#include "common.h"

extern char D_003EA7D0[];
extern char fvTrexTailNullTrans[];
extern char _gsIK_TrexTailHitPos[];
extern char _gsIK_TrexInterpolateTail[];
extern int _gsIK_TailHitSub();
extern char fvTrexArmNullTrans[];
extern char lArmHitSubProcFlag[];
extern char D_003EA870[];
extern char _gsIK_TrexLArmHitPos[];
extern char _gsIK_TrexInterpolateArm[];
extern int IK_JoinNullShape();
extern int _gsIK_ArmHitSub();
extern int IK_CutNullShape();

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

int _gsIK_TrexArmHitL(int a)
{
    IK_JoinNullShape((char*)a + 0xBA0, fvTrexArmNullTrans, 8);
    _gsIK_ArmHitSub(lArmHitSubProcFlag, (char*)a + 0xD4A, a, 8, 8, D_003EA870, _gsIK_TrexLArmHitPos, _gsIK_TrexInterpolateArm);
    IK_CutNullShape((char*)a + 0xBA0, 8);
    return 2;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexRArmHitPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexArmHitR);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_trex", _gsIK_TrexTailHitPos);

int _gsIK_TrexTailHit(int a)
{
    _gsIK_TailHitSub(a, 3, 6, D_003EA7D0, fvTrexTailNullTrans, _gsIK_TrexTailHitPos, _gsIK_TrexInterpolateTail);
    return 0x100;
}
