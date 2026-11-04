#include "common.h"

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_thkmain);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_getstate);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_getthkwander);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_getthkattack);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_getthkescape);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_setpllenlevel);

void enemy_modchgdm(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_modechgmain);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_modchg00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_modchg01);

void enemy_modchg02(void* a)
{
    if (STRUCT_OFFSET(a, 0x4, int) & 0x20000000)
    {
        STRUCT_OFFSET(a, 0x4, int) = (STRUCT_OFFSET(a, 0x4, int) ^ 0x20000000) | 0x40000000;
    }
}

void enemy_modchg03(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_modchg04);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_modchg05);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enethkmn", enemy_modchg08);

void enemy_modchg09(void* a)
{
    if (STRUCT_OFFSET(a, 0x0, int) & 0x100)
    {
        STRUCT_OFFSET(a, 0x4, int) |= 0x40000000;
    }
}
