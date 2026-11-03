#include "common.h"

extern char D_003E9570[];
extern char fvRaptTailNullTrans[];
extern char _gsIK_RaptTailHitPos[];
extern char _gsIK_RaptInterpolateTail[];
extern int _gsIK_TailHitSub();
extern char lArmHitSubProcFlag[];
extern char D_003E9670[];
extern char _gsIK_RaptLArmHitPos[];
extern char _gsIK_RaptInterpolateArm[];
extern int _gsIK_ArmHitSub();
extern char rArmHitSubProcFlag[];
extern char D_003E9610[];
extern char _gsIK_RaptRArmHitPos[];

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptInit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptUpdateData);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptResetInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptHeadStare);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptFootMoveL);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptFootMoveR);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptTailSwing);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptSetHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptHeadHitPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptHeadHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptLArmHitPos);

int _gsIK_RaptArmHitL(int a)
{
    _gsIK_ArmHitSub(lArmHitSubProcFlag, (char*)a + 0xD4A, a, 0xa, 0xc, D_003E9670, _gsIK_RaptLArmHitPos, _gsIK_RaptInterpolateArm);
    return 2;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptRArmHitPos);

int _gsIK_RaptArmHitR(int a)
{
    _gsIK_ArmHitSub(rArmHitSubProcFlag, (char*)a + 0xD4C, a, 7, 9, D_003E9610, _gsIK_RaptRArmHitPos, _gsIK_RaptInterpolateArm);
    return 4;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptTailHitPos);

int _gsIK_RaptTailHit(int a)
{
    _gsIK_TailHitSub(a, 2, 5, D_003E9570, fvRaptTailNullTrans, _gsIK_RaptTailHitPos, _gsIK_RaptInterpolateTail);
    return 0x100;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_rapb", _gsIK_RaptDeadPose);
