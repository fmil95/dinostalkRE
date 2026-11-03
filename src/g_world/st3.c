#include "common.h"

extern int gsWorldSt3_KoiwaCnt;
extern int gsWorldSt3_SplashCnt;
extern int gsWorldSt3_IwaCnt;
extern int gsWorldSt3_IwaObjCnt;
extern int _st3_demo0_timer;
extern int _st3_demo0_step;
extern int _st3_boss_died_flag;
extern int _st3_boss_died_wait;

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldInitSt3);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3EntryTex_GND);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_SpecialEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_SpecialEffect2);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_BoatInit);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_Boat);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_BoatDirection);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_InitLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_Light);

void gsWorldSt3_InitIwa()
{
    gsWorldSt3_IwaCnt = 0;
    gsWorldSt3_IwaObjCnt = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_EntryIwa);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_EntryIwaObj);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_Iwa);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_IwaDamage);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_IwaGunHit);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_IwaGunHit_RANGE);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_IwaBreak);

void gsWorldSt3_InitSplash()
{
    gsWorldSt3_SplashCnt = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_EntrySplash);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_IwaWater);

void gsWorldSt3_InitKoiwa()
{
    gsWorldSt3_KoiwaCnt = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_EntryKoiwa);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_Koiwa);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_SkyScale);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_HikariFade);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldBulletEffectGnd_ST3);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_InitDinoCollWater);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", _gsWorldSt3_DinoCollWater);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", _st3_DinoCollWater_CRN);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", _st3_DinoCollWater_PTR);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", _st3_DinoCollWater_PRS);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_DinoCollWater);

void gsWorldSt3_initBossDied()
{
    _st3_boss_died_flag = 0;
    _st3_boss_died_wait = 0x96;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_EntryBossDied);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_CheckBossDied);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_InitBackSE);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_PlayBackSE);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_TexScroll);

void gsWorldSt3_Demo0_Init()
{
    _st3_demo0_timer = 0;
    _st3_demo0_step = -1;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_Demo0_Request);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_Demo0_Exec);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_ObjSort);
