#include "common.h"

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", enemy_ptnmvmain);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_goptntbl);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_sarchptn);

void eneptn_dummy(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_onlygetdt);

void eneptn_loop00(void* a)
{
    STRUCT_OFFSET(a, 0x5E, short) = 0;
    STRUCT_OFFSET(a, 0x62, short) = 0;
    STRUCT_OFFSET(a, 0x5C, short) = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_goleset00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_tbljump00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_rndjump00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_thkmdchkjmp);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_vtlchkjmp);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_atchitchkjmp);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_plwpnchkjmp);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_gmleveljmp);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_thkmdchg);

void eneptn_rechkptn(void* a)
{
    STRUCT_OFFSET(a, 0x7C, int) = 0;
    STRUCT_OFFSET(a, 0x4, int) |= 0x80000000;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_enmtyloop);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_delcheck);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", obrpt_itemsnatchmain);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", obrpt_itemsarch);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", obrpt_plitemch);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", obrpt_setstlnitem);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_snatchitem00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_snatchitem01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_snatchitem02);
