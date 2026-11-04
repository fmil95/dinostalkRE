#include "common.h"
#include "g_world/st9.h"
#include "g_world/st9_demo.h"

extern int _st9_se_port_lava;
extern int _st9_lavaanim_texidx;
extern int _st9_situation;
extern short _st9_lava_pointid;

extern char gsEnemyInfos[];
extern void _gsWorldSt9_RockBreakTREX();
extern int gsPause;
extern char gsWorldManager[];
extern char gsWorldBreakList[];
INCLUDE_ASM("asm/nonmatchings/g_world/st9", gsWorldInitSt9);

void gsWorldSt9_WorkInit()
{
    _st9_lavaanim_texidx = 0;
    _st9_situation = 0;
    _st9_lava_pointid = 0;
}

void gsWorldSt9_SpecialEffect()
{
    gsWorldSt9_PlayBackSE();
    if (!(gsPause & 1))
    {
        gsWorldSt9_TREX_Light();
        gsSt9_LavaSpout();
        gsSt9_SetMirage();
        gsWorldSt9_RockBreakTREX();
        gsWorldSt9_DemoManager();
        gsWorldSt9Demo_LavaRise();
        gsWorldSt9Demo_FogBackChange();
        gsSt9_RockCrossTREX(gsWorldManager, gsWorldBreakList);
        gsWorldSt9_CheckBossDied();
    }
}

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

void gsWorldSt9_RockBreakTREX()
{
    char* p = gsEnemyInfos;
    int i;

    for (i = 9; i >= 0; i--, p += 0x2A50)
    {
        if (STRUCT_OFFSET(p, 0, int) & 1)
        {
            if (STRUCT_OFFSET(p, 0x2A, short) == 7)
            {
                _gsWorldSt9_RockBreakTREX(STRUCT_OFFSET(p, 0xD30, int), p + 0xBA0);
            }
        }
    }
}
