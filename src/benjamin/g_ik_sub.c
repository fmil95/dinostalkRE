#include "common.h"

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_InitDataHead);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_HeadStareSub);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_HeadStareSub2);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_HeadInterpolateSub);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_FootEffectSub);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_FootMoveSubOneCollide);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_TailSwingSub);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_TailInterpolateSub);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_ResetHeadInfoSub);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_ResetTailInfoSub);

void _gsIK_ResetHitInfoSub(void* a)
{
    char* p = (char*)a + 0xD40;
    int v = STRUCT_OFFSET(p, 0x0, int) & 0xFFF8007F;

    STRUCT_OFFSET(p, 0x1C, int) = 0;
    STRUCT_OFFSET(p, 0x18, int) = 0;
    STRUCT_OFFSET(p, 0x0, int) = v;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_HeadHitSub);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_ArmHitSub);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_TailHitSub);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik_sub", _gsIK_RecoverBodyRotXZSub);
