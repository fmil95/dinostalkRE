#include "common.h"

extern char D_004026E0[];
extern void GFInstance_Remove();
extern void enetest_end();
extern void enetest_init();

INCLUDE_ASM("asm/nonmatchings/g_enemy/enetest", enetest_init);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enetest", enetest_main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enetest", enetest_end);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enetest", enetestinfoprt);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enetest", enetest_mkcammatrix);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enetest", enetest_joy);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enetest", enetest_joysub00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enetest", enetest_joysub01);

void enetest_reload()
{
    GFInstance_Remove(D_004026E0);
    enetest_end();
    enetest_init();
}
