#include "common.h"

extern void (*trnty_ptnfuncs[])();
void trnty_ptnmain(char* a)
{
    if (STRUCT_OFFSET(a, 0x84, int) != 0x3D)
    {
        trnty_ptnfuncs[STRUCT_OFFSET(a, 0x5C, u_short)](a);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_glarvchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_trnchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_sarchstone);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_chkptnlevel);

void trnty_ptndummy(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn08);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn09);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn0a);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn0b);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn0c);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn0d);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn0e);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn0f);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn20);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn21);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn30);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptntr", D_00668FD8);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn31);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn32);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn33);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn38);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn39);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptntr", trnty_ptn3a);
