#include "common.h"

extern int _st9_se_port_lava;

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldInitSt9);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9_WorkInit);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9_SpecialEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9_SpecialEffect2);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9_TREX_Light);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9_LavaAnimation);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsSt9_SelectLavaPoint);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsSt9_LavaSpout);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsSt9_MiragePointRand);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsSt9_SetMirage);

void gsWorldSt9_InitBackSE()
{
    _st9_se_port_lava = 0x14;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9_PlayBackSE);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsSt9Demo_Cancel);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9Demo_LavaRise);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9Demo_FogBackChange);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsSt9Demo_ClutAnimation);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", ClutCopyBuf);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsCultAnimation);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsSt9_RockCrossTREX);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9_IwaBreak);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9_CheckBossDied);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", _gsWorldSt9_RockBreakTREX);

INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldSt9_RockBreakTREX);
