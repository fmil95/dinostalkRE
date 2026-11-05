"""
Configures the project for building. Invokes splat to split the binary and
creates build files for ninja.
"""
#! /usr/bin/env python3
import argparse
import os
import shutil
import sys
import json
import re
from pathlib import Path
from typing import Dict, List, Set, Union

#MARK: Assembler workaround
# The EE assembler (tools/cc/ee/bin/as, GNU as 2.10-ee-001003-1) has a bug that
# depends on its internal memory layout. When a relaxable macro instruction such
# as `lw $2,sym($5)` (expanded to lui/addu/lw) lands on an internal fragment
# chunk boundary, gas writes the wrong bytes for the expansion. The usual
# symptom is the `lui` being overwritten by the final `lw` of the same macro,
# while keeping its R_MIPS_HI16 relocation.
#
# Whether it triggers depends on how much memory gas allocated before that
# instruction (even the length of the output path changes it), so a function
# that matches can break in the full build when unrelated code in the same
# file changes. The per-function object compare can't see it because it masks
# relocated words; only the final checksum catches it.
#
# Workaround: assemble each C file's .s several times, prepending 0, 1, 2, ...
# no-op `.align 2` directives to .text. They create empty fragments, which
# shifts gas's internal layout, but never change the output bytes. The first
# object that two different paddings produce byte-for-byte identically is kept:
# a corruption depends on the layout, so two layouts agreeing means neither was
# corrupted. The ninja "cc" rule calls this as `configure.py --as-checked`.
#
# Agreement alone is not enough (some corruptions are stable across paddings),
# so an object is also rejected when any R_MIPS_HI16 relocation in .text points
# at an instruction that is not a lui.
AS_CHECKED_MAX_TRIES = 32


def has_broken_hi16(data: bytes) -> bool:
    import struct

    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", data, 0x2E)
    sections = [struct.unpack_from("<IIIIIIIIII", data, shoff + i * shentsize) for i in range(shnum)]
    strtab = sections[shstrndx]

    def name(sec):
        start = strtab[4] + sec[0]
        return data[start:data.index(b"\0", start)].decode()

    for sec in sections:
        if sec[1] != 9 or name(sec) != ".rel.text":  # SHT_REL
            continue
        text = sections[sec[7]]  # sh_info: section the relocations apply to
        for off in range(sec[4], sec[4] + sec[5], 8):
            r_offset, r_info = struct.unpack_from("<II", data, off)
            if r_info & 0xFF == 5:  # R_MIPS_HI16
                insn, = struct.unpack_from("<I", data, text[4] + r_offset)
                if insn >> 26 != 0x0F:  # not lui
                    return True
    return False


#MARK: FPU hazard nops
# The game was assembled by a gas that, unlike tools/cc/ee/bin/as in R5900
# mode, inserted coprocessor hazard nops (the -mcpu=r4000 behaviour, which we
# can't use because it rejects EE-only opcodes). Rules taken from the binary:
#  - mtc1/dmtc1/ctc1 followed by an instruction that reads the written FPR: 1 nop
#  - mfc1/dmfc1/cfc1 followed by an instruction that reads the written GPR: 1 nop
#  - c.<cond>.s/d immediately followed by bc1t/bc1f(l): 1 nop
#  - every div.s is preceded by 2 nops
# Like gas, hazards are only checked between gcc's reorder-mode instructions and
# the next instruction (including the first one of a `.set noreorder` block),
# and are not tracked across labels or out of noreorder blocks.

_HZ_STORE_OPS = {"sb", "sh", "sw", "sd", "sq", "swc1", "sdc1", "swl", "swr", "sdl", "sdr",
                 "usw", "ush", "usd", "s.s", "s.d"}
_HZ_ALL_READ_PREFIXES = ("b", "j", "mult", "div", "mt", "teq", "tne", "tlt", "tge")


def _hz_parse(line: str):
    s = line.split("#", 1)[0].strip()
    if not s or s.startswith(".") or s.endswith(":"):
        return None
    parts = s.split(None, 1)
    op = parts[0]
    ops = [o.strip() for o in parts[1].split(",")] if len(parts) > 1 else []
    return op, ops


def _hz_regs(text: str) -> List[str]:
    return re.findall(r"\$(f\d+|[a-z]+\d*|\d+)", text)


def _hz_reads(op: str, ops: List[str]) -> List[str]:
    """Registers an instruction reads (approximation of gas' insn_uses_reg)."""
    if not ops:
        return []
    if re.match(r"[a-z]+\.[sdlw]$", op) and op not in _HZ_STORE_OPS:
        # FPU arithmetic/convert/move: fd, fs[, ft]
        return _hz_regs(",".join(ops[1:]))
    if op in _HZ_STORE_OPS or op.startswith(_HZ_ALL_READ_PREFIXES) or op.startswith("c."):
        return _hz_regs(",".join(ops))
    if op in ("mfc1", "dmfc1", "cfc1"):
        return _hz_regs(",".join(ops[1:]))
    # first operand is the destination; a memory operand's base register is read
    return _hz_regs(",".join(ops[1:]))


def _hz_li_s_uses_mtc1(value: str) -> bool:
    """li.s expands to lui+mtc1 (or mtc1 $0) unless the low half is non-zero."""
    import struct
    try:
        bits = struct.unpack("<I", struct.pack("<f", float(value)))[0]
    except ValueError:
        return False
    return (bits & 0xFFFF) == 0


def insert_hazard_nops(text: str) -> str:
    out: List[str] = []
    pending = None  # (kind, reg)
    noreorder = False
    for line in text.split("\n"):
        st = line.strip()
        if st.startswith(".set"):
            if "noreorder" in st:
                noreorder = True
            elif re.match(r"\.set\s+reorder", st):
                noreorder = False
                pending = None
            out.append(line)
            continue
        if st.endswith(":") or st.startswith(".include") or st.startswith("#APP"):
            pending = None
            out.append(line)
            continue
        ins = _hz_parse(line)
        if ins is None:
            out.append(line)
            continue
        op, ops = ins

        need = 0
        if pending is not None:
            kind, reg = pending
            if kind == "cond":
                if op.startswith("bc1"):
                    need = 1
            elif reg in _hz_reads(op, ops):
                need = 1
        if op == "div.s" and not noreorder:
            need = 2
        if need:
            # count nops already directly before this instruction
            have = 0
            for prev in reversed(out):
                p = _hz_parse(prev)
                if p is None:
                    if prev.strip().startswith(".set"):
                        continue
                    break
                if p[0] != "nop":
                    break
                have += 1
            nops = ["\tnop"] * max(0, need - have)
            if nops:
                # insert before a `.set noreorder` that opens this instruction's block
                i = len(out)
                while i > 0 and out[i - 1].strip().startswith(".set"):
                    i -= 1
                out[i:i] = nops

        pending = None
        if not noreorder:
            if op in ("mtc1", "dmtc1", "ctc1") and len(ops) == 2:
                pending = ("reg", _hz_regs(ops[1])[0] if _hz_regs(ops[1]) else None)
            elif op in ("mfc1", "dmfc1", "cfc1") and ops:
                pending = ("reg", _hz_regs(ops[0])[0] if _hz_regs(ops[0]) else None)
            elif op.startswith("c.") and op.count(".") == 2:
                pending = ("cond", None)
            elif op == "li.s" and len(ops) == 2 and _hz_li_s_uses_mtc1(ops[1]):
                pending = ("reg", _hz_regs(ops[0])[0])
        out.append(line)
    return "\n".join(out)


def as_checked(argv: List[str]) -> int:
    """argv: <as path> <as flags...> -o <out.o> <in.s>"""
    import subprocess

    as_path, *args = argv
    src = args[-1]
    out = args[args.index("-o") + 1]
    flags = [a for i, a in enumerate(args[:-1]) if a != "-o" and args[i - 1] != "-o"]

    with open(src) as f:
        text = insert_hazard_nops(f.read())

    tmp_s = f"{out}.pad.s"
    tmp_o = f"{out}.pad.o"
    seen: Dict[bytes, int] = {}

    try:
        for pad in range(AS_CHECKED_MAX_TRIES):
            with open(tmp_s, "w") as f:
                f.write("\t.text\n" + "\t.align\t2\n" * pad + text)

            if os.path.exists(tmp_o):
                os.remove(tmp_o)

            res = subprocess.run([as_path, *flags, "-o", tmp_o, tmp_s])

            if res.returncode != 0:
                return res.returncode

            with open(tmp_o, "rb") as f:
                data = f.read()

            if has_broken_hi16(data):
                continue

            if data in seen:
                with open(out, "wb") as f:
                    f.write(data)
                return 0

            seen[data] = pad
    finally:
        for p in (tmp_s, tmp_o):
            if os.path.exists(p):
                os.remove(p)

    print(f"as-checked: no two paddings agreed for {src}", file=sys.stderr)
    return 1


if __name__ == "__main__" and len(sys.argv) > 1 and sys.argv[1] == "--as-checked":
    sys.exit(as_checked(sys.argv[2:]))

import ninja_syntax
import splat
import splat.scripts.split as split
from splat.segtypes.linker_entry import LinkerEntry

#MARK: Constants
ROOT = Path(__file__).parent.resolve()
TOOLS_DIR = ROOT / "tools"
OUTDIR = "out"

YAML_FILE = Path("config/SLUS_204.85.yaml")
BASENAME = "SLUS_204.85"
LD_PATH = f"{BASENAME}.ld"
ELF_PATH = f"{OUTDIR}/{BASENAME}"
MAP_PATH = f"{OUTDIR}/{BASENAME}.map"
PRE_ELF_PATH = f"{OUTDIR}/{BASENAME}.elf"

G_OVERRIDES = {
    "inststr.c": "-G2",
    "g_cdv.c": "-G2",
    "mem.c": "-G8",
    "main.c": "-G8",
    "aelib.c": "-G8",
    "se_rpc.c": "-G8",
    "g_savlod.c": "-G8",
    "mcduse.c": "-G8",
    "g_pad.c": "-G8",
    "CdvUse.c": "-G8",
    "gfvalloc.c": "-G8",
    "g_world.c": "-G8",
}

O_OVERRIDES = {
    "nmGC2Main.c": "-O1"
}

SDK_ROOT = "include/sce/usr/local/sce"

COMMON_INCLUDES = (
    "-Iinclude "
    f"-isystem {SDK_ROOT}/ee/include "
    f"-isystem {SDK_ROOT}/common/include "
    f"-isystem {SDK_ROOT}/ee/gcc/ee/include "
    "-isystem include/sdk/ee -isystem include/gcc"
)

CC_DIR = f"{TOOLS_DIR}/cc/bin"
COMMON_COMPILE_FLAGS = f"-B{TOOLS_DIR}/cc/lib/gcc-lib/ee/2.96-ee-001003-1/ -O2"

# WINE = "wine"
# WINE_ENV = "WINEPREFIX=~/.wine_ps2 WINEDEBUG=-all"

GAME_GCC_CMD = f"{CC_DIR}/ee-gcc.exe -c {COMMON_INCLUDES} {COMMON_COMPILE_FLAGS} $in"
COMPILE_CMD = f"{GAME_GCC_CMD}"

# if sys.platform == "linux" or sys.platform == "linux2":
#     COMPILE_CMD = f"{WINE_ENV} {WINE} {GAME_GCC_CMD}"

CATEGORY_MAP = {
    "ps2": "Game",
    "ps2t": "Tooling",
    "sce": "Libs",
    "data": "Data",
}

def clean():
    """
    Clean all products of the build process.
    """
    files_to_clean = [
        ".splache",
        ".ninja_log",
        "build.ninja",
        "permuter_settings.toml",
        "objdiff.json",
        LD_PATH
    ]
    for filename in files_to_clean:
        if os.path.exists(filename):
            os.remove(filename)

    shutil.rmtree("asm", ignore_errors=True)
    shutil.rmtree("assets", ignore_errors=True)
    shutil.rmtree("obj", ignore_errors=True)
    shutil.rmtree("out", ignore_errors=True)


def write_permuter_settings():
    """
    Write the permuter settings file, comprising the compiler and assembler commands.
    """
    with open("permuter_settings.toml", "w", encoding="utf-8") as f:
        f.write(f"""compiler_command = "{COMPILE_CMD} -D__GNUC__"
assembler_command = "mips-linux-gnu-as -march=r5900 -mabi=eabi -Iinclude -I{SDK_ROOT}/ee/include -I{SDK_ROOT}/common/include"
compiler_type = "gcc"

[preserve_macros]

[decompme.compilers]
"tools/build/cc/gcc/gcc" = "ee-gcc2.96"
""")

#MARK: Build
def build_stuff(linker_entries: List[LinkerEntry], skip_checksum=False, objects_only=False, dual_objects=False):
    """
    Build the objects and the final ELF file.
    If objects_only is True, only build objects and skip linking/checksum.
    If dual_objects is True, build objects twice: once normally, once with -DSKIP_ASM.
    """
    built_objects: Set[Path] = set()
    objdiff_units = []  # For objdiff.json

    def build(
        object_paths: Union[Path, List[Path]],
        src_paths: List[Path],
        task: str,
        variables: Dict[str, str] = None,
        implicit_outputs: List[str] = None,
        out_dir: str = None,
        extra_flags: str = "",
        collect_objdiff: bool = False,
        orig_entry=None,
    ):
        """
        Helper function to build objects.
        """
        # Handle none parameters
        if variables is None:
            variables = {}

        if implicit_outputs is None:
            implicit_outputs = []

        # Convert object_paths to list if it is not already
        if not isinstance(object_paths, list):
            object_paths = [object_paths]

        # Only rewrite output path to .o if out_dir is set (i.e. --objects mode)
        if out_dir:
            new_object_paths = []
            for obj in object_paths:
                obj = Path(obj)
                stem = obj.stem
                if obj.suffix in [".s", ".c"]:
                    stem = obj.stem
                else:
                    if obj.suffix == ".o" and obj.with_suffix("").suffix in [".s", ".c"]:
                        stem = obj.with_suffix("").stem
                target_dir = out_dir if out_dir else obj.parent
                new_obj = Path(target_dir) / (stem + ".o")
                new_object_paths.append(new_obj)
            object_paths = new_object_paths

        # Otherwise, use the original object_paths (with .s.o, .c.o, etc.)

        # Add object paths to built_objects
        for idx, object_path in enumerate(object_paths):
            if object_path.suffix == ".o":
                built_objects.add(object_path)

            # Add extra_flags to variables if present
            build_vars = variables.copy()
            if extra_flags:
                build_vars["cflags"] = extra_flags
            ninja.build(
                outputs=[str(object_path)],
                rule=task,
                inputs=[str(s) for s in src_paths],
                variables=build_vars,
                implicit_outputs=implicit_outputs,
            )

            # Collect for objdiff.json if requested
            if collect_objdiff and orig_entry is not None:
                src = src_paths[0] if src_paths else None
                if src:
                    src = Path(src)
                    # Always use the final "matched" name, i.e. as if it will be in src/ with no asm/ prefix
                    try:
                        # If the file is in asm/, replace asm/ with nothing (just drop asm/)
                        if src.parts[0] == "asm":
                            rel = Path(*src.parts[1:])
                        elif src.parts[0] == "src":
                            rel = Path(*src.parts[1:])
                        else:
                            rel = src
                        # Remove extension for the name
                        name = str(rel.with_suffix(""))
                    except Exception:
                        name = str(src.with_suffix(""))
                else:
                    name = object_path.stem
                    # Ensure `rel` is defined so later code can compute src-based paths
                    try:
                        rel = Path(object_path)
                    except Exception:
                        rel = Path(str(object_path))

                if "target" in str(object_path):
                    target_path = str(object_path)

                    # Determine if a .c or .cpp file exists in src/ for this unit (recursively)
                    src_base = rel.with_suffix("")
                    src_c_files = list(Path("src").rglob(src_base.name + ".c"))
                    src_cpp_files = list(Path("src").rglob(src_base.name + ".cpp"))
                    has_src = bool(src_c_files or src_cpp_files)

                    # Determine the category based on the name
                    categories = [name.split("/")[0]]
                    if "ps2/ps2t" in name:
                        categories.append("ps2t")

                    unit = {
                        "name": name,
                        "target_path": target_path,
                        "metadata": {
                            "progress_categories": categories,
                        }
                    }

                    if has_src:
                        # Replace only the path segment named 'target' with 'current',
                        # preserving any filenames that may contain the substring "target".
                        op = Path(object_path)
                        parts = list(op.parts)
                        for idx, part in enumerate(parts):
                            if part == "target":
                                parts[idx] = "current"
                                break
                        base_path = str(Path(*parts))
                        unit["base_path"] = base_path
                    objdiff_units.append(unit)

    ninja = ninja_syntax.Writer(open(str(ROOT / "build.ninja"), "w", encoding="utf-8"), width=9999)

    #MARK: Rules
    cross = "mips-linux-gnu-"

    ld_args = "-EL -T config/undefined_syms_auto.txt -T config/undefined_funcs_auto.txt -T config/undefined_syms.txt -Map $mapfile -T $in -o $out"

    ninja.rule(
        "as",
        description="as $in",
        command=f"cpp {COMMON_INCLUDES} $in -o  - | {cross}as -no-pad-sections -EL -march=5900 -mabi=eabi -Iinclude -o $out",
    )

    # this is the original cc rule, but the larger one below is used due to problems with WINE
    #ninja.rule(
        #"cc",
        #description="cc $in",
        #command=f"{COMPILE_CMD} $cflags -o $out && {cross}strip $out -N dummy-symbol-name",
    #)

    AS_EE = f"{TOOLS_DIR}/cc/ee/bin/as"
    # WINE_RUN = f"{WINE_ENV} {WINE}" if sys.platform.startswith("linux") else ""

    ninja.rule(
        "cc",
        description="cc $in",
        command=(
            f"rm -f $out $out.s; "
            f"{CC_DIR}/ee-gcc -S {COMMON_INCLUDES} {COMMON_COMPILE_FLAGS} $gflag $oflag $in $cflags -o $out.s; "
            #f"{WINE_RUN} {CC_DIR}/ee-gcc -S {COMMON_INCLUDES} {COMMON_COMPILE_FLAGS} $in $cflags -o $out.s; "
            # f"wineserver -w; "
            # assembled through the workaround described under "Assembler workaround"
            f"{sys.executable} {ROOT / 'configure.py'} --as-checked {AS_EE} -O2 -mabi=eabi $gflag -o $out $out.s && "
            # f"{WINE_RUN} {AS_EE} -G4 -O2 -mabi=eabi -o $out $out.s; "
            # f"wineserver -w; "
            f"test -s $out && {cross}strip $out -N dummy-symbol-name"
        ),
    )

    ninja.rule(
        "ld",
        description="link $out",
        command=f"{cross}ld {ld_args}",
    )

    ninja.rule(
        "sha1sum",
        description="sha1sum $in",
        command="sha1sum -c $in && touch $out",
    )

    ninja.rule(
        "elf",
        description="elf $out",
        command=f"{cross}objcopy $in $out -O binary",
    )

    #MARK: Build
    # Build all the objects
    for entry in linker_entries:
        seg = entry.segment

        if seg.type[0] == ".":
            continue

        if entry.object_path is None:
            continue

        if isinstance(seg, splat.segtypes.common.asm.CommonSegAsm) or isinstance(
            seg, splat.segtypes.common.data.CommonSegData
        ):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "as", out_dir="obj/target", collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", out_dir="obj/current", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "as")
        elif isinstance(seg, splat.segtypes.common.c.CommonSegC):
            # Find the appropriate -G flag for this source file, defaulting to -G4
            gflag = "-G4"
            for src in entry.src_paths:
                path_obj = Path(src)
                if path_obj.name in G_OVERRIDES:
                    gflag = G_OVERRIDES[path_obj.name]
                    break
                elif str(src) in G_OVERRIDES:
                    gflag = G_OVERRIDES[str(src)]
                    break

            # Find the optimization level override for this source file, if any
            oflag = ""
            for src in entry.src_paths:
                if Path(src).name in O_OVERRIDES:
                    oflag = O_OVERRIDES[Path(src).name]
                    break

            variables = {"gflag": gflag, "oflag": oflag}

            if dual_objects:
                build(entry.object_path, entry.src_paths, "cc", out_dir="obj/target", variables=variables, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "cc", out_dir="obj/current", variables=variables, extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "cc", variables=variables)
        elif isinstance(seg, splat.segtypes.common.databin.CommonSegDatabin):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "as", out_dir="obj/target", collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", out_dir="obj/current", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "as")
        elif isinstance(seg, splat.segtypes.common.rodatabin.CommonSegRodatabin):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "as", out_dir="obj/target", collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", out_dir="obj/current", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "as")
        elif isinstance(seg, splat.segtypes.common.textbin.CommonSegTextbin):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "as", out_dir="obj/target", collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", out_dir="obj/current", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "as")
        elif isinstance(seg, splat.segtypes.common.bin.CommonSegBin):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "as", out_dir="obj/target", collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", out_dir="obj/current", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "as")
        else:
            print(f"ERROR: Unsupported build segment type {seg.type}")
            sys.exit(1)

    if objects_only:
        # Write objdiff.json if dual_objects (i.e. --objects)
        if dual_objects:
            objdiff = {
                "$schema": "https://raw.githubusercontent.com/encounter/objdiff/main/config.schema.json",
                "custom_make": "ninja",
                "custom_args": [],
                "build_target": False,
                "build_base": True,
                "watch_patterns": [
                    "src/**/*.c",
                    "src/**/*.cp",
                    "src/**/*.cpp",
                    "src/**/*.cxx",
                    "src/**/*.h",
                    "src/**/*.hp",
                    "src/**/*.hpp",
                    "src/**/*.hxx",
                    "src/**/*.s",
                    "src/**/*.S",
                    "src/**/*.asm",
                    "src/**/*.inc",
                    "src/**/*.py",
                    "src/**/*.yml",
                    "src/**/*.txt",
                    "src/**/*.json"
                ],
                "units": objdiff_units,
                "progress_categories": [ {"id": id, "name": name} for id, name in CATEGORY_MAP.items() ],
            }
            with open("objdiff.json", "w", encoding="utf-8") as f:
                json.dump(objdiff, f, indent=2)
        return

    ninja.build(
        PRE_ELF_PATH,
        "ld",
        LD_PATH,
        implicit=[str(obj) for obj in built_objects],
        variables={"mapfile": MAP_PATH},
    )

    ninja.build(
        ELF_PATH,
        "elf",
        PRE_ELF_PATH,
    )

    if not skip_checksum:
        ninja.build(
            ELF_PATH + ".ok",
            "sha1sum",
            "config/checksum.sha1",
            implicit=[ELF_PATH],
        )
    else:
        print("Skipping checksum step")

#MARK: Short loop fix
# Pattern to workaround unintended nops around loops
COMMENT_PART = r"\/\* (.+) ([0-9A-Z]{2})([0-9A-Z]{2})([0-9A-Z]{2})([0-9A-Z]{2}) \*\/"
INSTRUCTION_PART = r"(\b(bne|bnel|beq|beql|bnez|bnezl|beqzl|bgez|bgezl|bgtz|bgtzl|blez|blezl|bltz|bltzl|b)\b.*)"
OPCODE_PATTERN = re.compile(f"{COMMENT_PART}  {INSTRUCTION_PART}")

PROBLEMATIC_FUNCS = set(
    [
        # Problematic functions go here
    ]
)

#MARK: Rodata migration
# splat can migrate a C file's rodata (jump tables, strings, constants) into the
# asm files of the functions that use it, so that an INCLUDE_ASM function emits
# its own rodata and a matched function emits it from C. The C object then
# provides the whole .rodata of the file, in function order.
#
# splat only supports this globally and errors out on any C file whose rodata
# is still disassembled to its own asm file (`rodata` instead of `.rodata`).
# To migrate files one at a time, migrate_rodata_to_functions is enabled in the
# yaml, and this wrapper turns it off while splitting every C file whose rodata
# segment is not dotted. A file opts in by changing its yaml rodata entry to
# `.rodata`; rodata it can't attribute to a single function then has to be
# pulled in with INCLUDE_RODATA (or written in C) at the right place.
#
# ee-gcc 2.96 aligns jump tables to 16 bytes (`.align 4`), while spimdisasm's
# EEGCC profile assumes 8, so migrated jump tables would land too early after
# C-generated rodata. The profile is corrected here as well.
def enable_per_file_rodata_migration() -> None:
    from spimdisasm.common import Compiler
    from splat.segtypes.common.c import CommonSegC
    from splat.util import options

    Compiler.EEGCC.value.prevAlign_jumptable = 4

    original_split = CommonSegC.split

    def split_with_opt_in(self, rom_bytes):
        rodata = self.siblings.get(".rodata") or self.siblings.get(".rdata")
        enabled = options.opts.migrate_rodata_to_functions

        if rodata is None or not rodata.type.startswith("."):
            options.opts.migrate_rodata_to_functions = False

        try:
            return original_split(self, rom_bytes)
        finally:
            options.opts.migrate_rodata_to_functions = enabled

    CommonSegC.split = split_with_opt_in


def replace_instructions_with_opcodes(asm_folder: Path) -> None:
    """
    Replace branch instructions with raw opcodes for functions that trigger the short loop bug.
    """
    nm_folder = ROOT / asm_folder / "nonmatchings"

    for p in nm_folder.rglob("*.s"):
        if p.stem not in PROBLEMATIC_FUNCS:
            continue

        with p.open("r") as file:
            content = file.read()

        if re.search(OPCODE_PATTERN, content):
            # Reference found
            # Embed the opcode, we have to swap byte order for correct endianness
            content = re.sub(
                OPCODE_PATTERN,
                r"/* \1 \2\3\4\5 */  .word      0x\5\4\3\2 /* \6 */",
                content,
            )

            # Write the updated content back to the file
            with p.open("w") as file:
                file.write(content)

#MARK: Main
def main():
    """
    Main function, parses arguments and runs the configuration.
    """
    parser = argparse.ArgumentParser(description="Configure the project")
    parser.add_argument(
        "-c",
        "--clean",
        help="Clean artifacts and build",
        action="store_true",
    )
    parser.add_argument(
        "-C",
        "--clean-only",
        help="Only clean artifacts",
        action="store_true",
    )
    parser.add_argument(
        "-s",
        "--skip-checksum",
        help="Skip the checksum step",
        action="store_true",
    )
    parser.add_argument(
        "--objects",
        help="Build objects to obj/target and obj/current (with -DSKIP_ASM), skip linking and checksum",
        action="store_true",
    )
    parser.add_argument(
        "-noloop",
        "--no-short-loop-workaround",
        help="Do not replace branch instructions with raw opcodes for functions that trigger the short loop bug",
        action="store_true",
    )
    args = parser.parse_args()

    do_clean = (args.clean or args.clean_only) or False
    do_skip_checksum = args.skip_checksum or False
    do_objects = args.objects or False

    if do_clean:
        clean()
        if args.clean_only:
            return

    enable_per_file_rodata_migration()
    split.main([YAML_FILE], modes="all", verbose=False)

    linker_entries = split.linker_writer.entries

    if do_objects:
        build_stuff(linker_entries, skip_checksum=True, objects_only=True, dual_objects=True)
    else:
        build_stuff(linker_entries, do_skip_checksum)

    write_permuter_settings()

    if not args.no_short_loop_workaround:
        replace_instructions_with_opcodes(split.config["options"]["asm_path"])

if __name__ == "__main__":
    main()
