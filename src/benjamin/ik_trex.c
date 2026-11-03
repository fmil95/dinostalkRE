#include "common.h"

extern char D_003EA7D0[];
extern char fvTrexTailNullTrans[];
extern char _gsIK_TrexTailHitPos[];
extern char _gsIK_TrexInterpolateTail[];
extern int _gsIK_TailHitSub();

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexInit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexUpdateData);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexResetInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexHeadStare);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexFootMoveL);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexFootMoveR);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexTailSwing);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexSetHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexHeadHitPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexHeadHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexLArmHitPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexArmHitL);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexRArmHitPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexArmHitR);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexTailHitPos);

int _gsIK_TrexTailHit(int a)
{
    _gsIK_TailHitSub(a, 3, 6, D_003EA7D0, fvTrexTailNullTrans, _gsIK_TrexTailHitPos, _gsIK_TrexInterpolateTail);
    return 0x100;
}
