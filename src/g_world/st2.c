#include "common.h"

extern int _st2_rapt_flag;
extern int _st2_se_port_river;
extern int _st2_se_port_fall;
extern int _st2_se_port_sawa;
extern int _st2_se_sawa_vol;
extern int _st2_shock_fall_flg;

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldInitSt2);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2EntryTex_GND);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_SpecialEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_SpecialEffect2);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_Komorebi);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", _gsWorldSt2_Wind);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_Wind);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_River);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_InitLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_Light);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_dokubana);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldBulletEffectGnd_ST2);

void gsWorldSt2_InitRapt()
{
    _st2_rapt_flag = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_MotiveRapt);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_CheckRaptEnd);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_CheckBossDied);

void gsWorldSt2_InitBackSE()
{
    _st2_se_port_river = 0x17;
    _st2_se_port_fall = 0x16;
    _st2_se_port_sawa = 0x15;
    _st2_se_sawa_vol = 0x3fff;
    _st2_shock_fall_flg = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_PlayBackSE);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_TexScroll);

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_SkyScale);
