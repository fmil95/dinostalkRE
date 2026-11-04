#include "common.h"

extern void (*enemy_ptnfuncs[])();
extern void obrpt_itemsnatchmain();
extern int Enemy_DelCheck();
void enemy_ptnmvmain(char* a)
{
    enemy_ptnfuncs[STRUCT_OFFSET(a, 0x5C, u_short)](a);
    obrpt_itemsnatchmain(a);
}

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

void eneptn_delcheck(char* a)
{
    if (Enemy_DelCheck(a) >= 0)
    {
        int x = STRUCT_OFFSET(a, 4, int);
        int y = STRUCT_OFFSET(a, 0, int);

        x |= 0x80000000;
        y |= 0x10000000;
        STRUCT_OFFSET(a, 0x52, short) = 1;
        STRUCT_OFFSET(a, 4, int) = x;
        STRUCT_OFFSET(a, 0, int) = y;
        STRUCT_OFFSET(a, 0x7C, int) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", obrpt_itemsnatchmain);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", obrpt_itemsarch);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", obrpt_plitemch);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", obrpt_setstlnitem);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_snatchitem00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_snatchitem01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnmn", eneptn_snatchitem02);
