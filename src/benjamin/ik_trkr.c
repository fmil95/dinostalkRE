#include "common.h"

extern void sceVu0CopyVector();
extern void sceVu0CopyVector();

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrInit);

void _gsIK_TrkrUpdateData(int a, int b)
{
    sceVu0CopyVector((char*)a + 0xDC0, (char*)b + 0x30);
    sceVu0CopyVector((char*)a + 0xD90, b);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrResetInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrHeadStare);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrFootMoveL);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrFootMoveR);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrTailSwing);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrSetHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrHeadHitPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrHeadHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrTailHitPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trkr", _gsIK_TrkrTailHit);
