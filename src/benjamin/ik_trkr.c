#include "common.h"
#include "benjamin/ik_trkr.h"

extern void sceVu0CopyVector();
extern void sceVu0CopyVector();
extern char D_003EA360[];
extern char fvTrkrTailNullTrans[];
extern char _gsIK_TrkrTailHitPos[];
extern char _gsIK_TrkrInterpolateTail[];
extern int _gsIK_TailHitSub();

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

int _gsIK_TrkrTailHit(int a)
{
    _gsIK_TailHitSub(a, 2, 5, D_003EA360, fvTrkrTailNullTrans, _gsIK_TrkrTailHitPos, _gsIK_TrkrInterpolateTail);
    return 0x100;
}
