#include "common.h"
#include "benjamin/ik_pteb.h"

extern void _gsIK_InitDataHead();
extern char lArmHitSubProcFlag[];
extern char D_003EAF20[];
extern char _gsIK_PtebLArmHitPos[];
extern char _gsIK_PtebInterpolateArm[];
extern int _gsIK_ArmHitSub();
extern char rArmHitSubProcFlag[];
extern char D_003EAEA0[];
extern char _gsIK_PtebRArmHitPos[];

extern int gsPartPteb[];
void _gsIK_PtebInit(void* a)
{
    _gsIK_InitDataHead((char*)a + 0xD40);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebResetInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebHeadStare);

void _gsIK_PtebSetHit(void* a, int i)
{
    STRUCT_OFFSET(a, 0xD58, int) |= gsPartPteb[i];
    STRUCT_OFFSET(a, 0xD5C, int) |= gsPartPteb[i];
}

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

int _gsIK_PtebArmHitR(int a)
{
    _gsIK_ArmHitSub(rArmHitSubProcFlag, (char*)a + 0xD4C, a, 0xb, 0xe, D_003EAEA0, _gsIK_PtebRArmHitPos, _gsIK_PtebInterpolateArm);
    return 4;
}
