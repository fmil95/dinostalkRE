#include "common.h"
#include "gs_math.h"

INCLUDE_ASM("asm/nonmatchings/gs_math", gsSinfNC);

INCLUDE_ASM("asm/nonmatchings/gs_math", gsSinf);

INCLUDE_ASM("asm/nonmatchings/gs_math", gsArcsinf);

INCLUDE_ASM("asm/nonmatchings/gs_math", gsArctanfNC);

INCLUDE_ASM("asm/nonmatchings/gs_math", gsArctanf);

INCLUDE_ASM("asm/nonmatchings/gs_math", gsArctan2f);

float gsSqrtf(float x)
{
    float ret;

    asm volatile(
        ".set noreorder\n"
        "mfc1 $8, %1\n"
        "qmtc2.ni $8, $vf5\n"
        "vsqrt Q, $vf5x\n"
        "vwaitq\n"
        "vaddq.x $vf5, $vf0, Q\n"
        "qmfc2.ni $2, $vf5\n"
        "mtc1 $2, %0\n"
        ".set reorder\n"
        : "=f"(ret) : "f"(x) : "$2", "$8");

    return ret;
}
INCLUDE_RODATA("asm/nonmatchings/gs_math", D_00664750);

INCLUDE_RODATA("asm/nonmatchings/gs_math", D_00664770);

INCLUDE_RODATA("asm/nonmatchings/gs_math", D_00664790);

INCLUDE_RODATA("asm/nonmatchings/gs_math", D_006647B0);

INCLUDE_RODATA("asm/nonmatchings/gs_math", D_006647D0);

INCLUDE_RODATA("asm/nonmatchings/gs_math", D_006647F0);

INCLUDE_RODATA("asm/nonmatchings/gs_math", D_00664810);

INCLUDE_RODATA("asm/nonmatchings/gs_math", D_00664830);

INCLUDE_RODATA("asm/nonmatchings/gs_math", D_00664850);

