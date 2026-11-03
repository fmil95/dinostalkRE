#include "common.h"

extern int _st7_dino_light_num;
extern int _st7_glow_num;
extern int _st7_hasi_light_num;
extern int _st7_jeep_light_obj_num;
extern int _st7_neon_00_num;
extern int _st7_neon_01_num;
extern int _st7_se_port_jeep_eng;
extern int _st7_se_port_jeep_run;
extern int _st7_se_port_fire_a;
extern int _st7_se_port_fire_b;
extern int _st7_shock_jeep_cnt;

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldInitSt7);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7EntryTex_GND);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_SpecialEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_SpecialEffect2);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_ClearPointLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_FlushPointLight);

void gsWorldSt7_InitJeepLight()
{
    _st7_jeep_light_obj_num = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_EntryJeepLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", _st7_jeep_light_calc);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_JeepLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", _gsWorldSt7_Loop);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Loop);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_JeepInit);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Jeep);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_JeepDirection);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_GaitoLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_JeepCrash);

void gsWorldSt7_InitGlow()
{
    _st7_glow_num = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_EntryGlow);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Glow);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Neon_Emb);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Neon_Sca);

void gsWorldSt7_InitNeon_00()
{
    _st7_neon_00_num = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_EntryNeon_00);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Neon_00);

void gsWorldSt7_InitNeon_01()
{
    _st7_neon_01_num = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_EntryNeon_01);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Neon_01);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Neon_Scroll);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_TV_Storm);

void gsWorldSt7_InitHasiLight()
{
    _st7_hasi_light_num = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_EntryHasiLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_HasiLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Fire);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_InitFireLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_EntryFireLightObj);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_EntryFireLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", _gsWorldSt7_FireLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_FireLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_InitTrikera);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Trikera);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_GetTrikeraVector);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_BrowDoram);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_BrowDoramGunHit);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_BrowDoramGunHit_RANGE);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_BrowDoramBreak);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_BrowDoramDamage);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", _gsWorldSt7_TrexHeadColl);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_TrexHeadColl);

void gsWorldSt7_InitDinoLight()
{
    _st7_dino_light_num = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_EntryDinoLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", _gsWorldSt7_DinoLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_DinoLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_ObjSort_EXT);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_ObjSort_EXT2);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Frea);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Kanban);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_CheckBossDied_CALNO);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_CheckBossDied_TREX);

void gsWorldSt7_InitBackSE()
{
    _st7_se_port_jeep_eng = 0x17;
    _st7_se_port_jeep_run = 0x16;
    _st7_se_port_fire_a = 0x15;
    _st7_se_port_fire_b = 0x14;
    _st7_shock_jeep_cnt = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_PlayBackSE);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_FarAdjust);
