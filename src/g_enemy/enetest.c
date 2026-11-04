#include "common.h"

extern char D_004026E0[];
extern void GFInstance_Remove();
extern void enetest_end();
extern void enetest_init();

extern void TEST_destroy_instshape();
extern void GF_EndGraphicsFramework();
extern void MEM_FreeAll();
extern char gsEnemyInfos[];
INCLUDE_RODATA("asm/nonmatchings/g_enemy/enetest", D_00669260);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enetest", enetest_init);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enetest", enetest_main);

void enetest_end(void)
{
    int i;
    char* p;

    sceGsSyncPath(0, 0);
    for (i = 9, p = gsEnemyInfos; i >= 0; i--, p += 0x2A50)
    {
        if (STRUCT_OFFSET(p, 0x0, int) & 1)
        {
            TEST_destroy_instshape(STRUCT_OFFSET(p, 0xCBC, int));
        }
    }
    sceGsSyncPath(0, 0);
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

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
INCLUDE_RODATA("asm/nonmatchings/g_enemy/enetest", D_006692C8);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enetest", D_006692D8);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enetest", D_006692E8);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enetest", D_006692F8);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enetest", D_00669308);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enetest", D_00669318);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enetest", D_00669330);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enetest", D_00669340);

