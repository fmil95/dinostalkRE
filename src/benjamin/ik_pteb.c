#include "common.h"

extern void _gsIK_InitDataHead();
extern char lArmHitSubProcFlag[];
extern char D_003EAF20[];
extern char _gsIK_PtebLArmHitPos[];
extern char _gsIK_PtebInterpolateArm[];
extern int _gsIK_ArmHitSub();

void _gsIK_PtebInit(void* a)
{
    _gsIK_InitDataHead((char*)a + 0xD40);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebResetInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebHeadStare);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebSetHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebHeadHitPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebHeadHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebLArmHitPos);

int _gsIK_PtebArmHitL(int a)
{
    _gsIK_ArmHitSub(lArmHitSubProcFlag, (char*)a + 0xD4A, a, 0xf, 0x12, D_003EAF20, _gsIK_PtebLArmHitPos, _gsIK_PtebInterpolateArm);
    return 2;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebRArmHitPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebArmHitR);
