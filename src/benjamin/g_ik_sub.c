#include "common.h"
#include "benjamin/g_ik_sub.h"

void _gsIK_InitDataHead(char* h)
{
    STRUCT_OFFSET(h, 0, int) = 0;
    STRUCT_OFFSET(h, 4, int) = 0;
    STRUCT_OFFSET(h, 8, short) = 0;
    STRUCT_OFFSET(h, 0xA, short) = 0;
    STRUCT_OFFSET(h, 0xC, short) = 0;
    STRUCT_OFFSET(h, 0xE, short) = 0;
    STRUCT_OFFSET(h, 0x10, short) = 0;
    STRUCT_OFFSET(h, 0x12, short) = 0;
    STRUCT_OFFSET(h, 0x14, short) = 0;
    STRUCT_OFFSET(h, 0x18, int) = 0;
    STRUCT_OFFSET(h, 0x1C, int) = 0;
    STRUCT_OFFSET(h, 0x28, int) = 0;
    asm volatile("sqc2 $vf0, 0x0(%0)" : : "r"(h + 0x40) : "memory");
}

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
