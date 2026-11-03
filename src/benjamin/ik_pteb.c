#include "common.h"

extern void _gsIK_InitDataHead();

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

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebArmHitL);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebRArmHitPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_pteb", _gsIK_PtebArmHitR);
