# Dino Stalker Decompile (PS2) 

![Game Cover](https://i.imgur.com/iaWcuQf.png)

## About

This is a decompilation of TOSE's 2002 dino massacre for PS2, Dino Stalker. This project originally started in October 2024, and only saw a few days of work at the time with dozens of functions matched but no build capabilities, and has since been dusted out with a proper build system.

AI-generated contributions are accepted, but are subjected to pre-established standards. The main goal of the decompile is to reconstruct the source-code to do a PC port in order to have all games from the Dino Crisis series playable on modern operating systems.

## Building

You'll need to provide your own dump of the US version of the game. The following steps work only on Linux, but you can use WSL too:

### Clone the repo and run quickstart.sh

Copy and run the following block of commands. You might be asked for your password to install certain dependencies.

```bash
git clone https://github.com/fmil95/dinostalkRE && \
cd dinostalkRE && \
./scripts/quickstart.sh
```

### Extract the ELF from the game DVD

Copy `SLUS_204.85` from the root folder of the game files to the `disc` directory of the project before you try to build.

### Build the project

```bash
./scripts/build.sh
```

You should see this, provided you encountered no errors during the process:

```
[XXX/XXX] sha1sum config/checksum.sha1
out/SLUS_204.85: OK
```

## Progress

To see how much of the game is matched, generate the objdiff report and run the progress script:

```bash
./scripts/checks.sh --report
python3 scripts/check_progress.py --categories
```

## Credits

![Game Cover](https://i.imgur.com/M3RCOWV.png)

This project used the [Sly Cooper and the Thievius Raccoonus decomp repo](https://github.com/TheOnlyZac/sly1) as template.
