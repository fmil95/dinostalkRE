#include "common.h"
#include "g_world/st5.h"

INCLUDE_ASM("asm/nonmatchings/g_world/st5", gsWorldInitSt5);

void gsWorldSt5_SpecialEffect()
{
    gsWorldSt5_CheckBossDied();
}

INCLUDE_ASM("asm/nonmatchings/g_world/st5", gsWorldSt5_SpecialEffect2);

INCLUDE_ASM("asm/nonmatchings/g_world/st5", gsWorldSt5_CheckBossDied);
