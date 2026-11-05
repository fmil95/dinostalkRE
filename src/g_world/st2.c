#include "common.h"
#include "g_world/st2.h"
#include "gunsuv_usa/libgf/gftex.h"
#include "taiken/taiken.h"
#include "air/a_spbtl.h"

extern int _st2_rapt_flag;
extern int _st2_se_port_river;
extern int _st2_se_port_fall;
extern int _st2_se_port_sawa;
extern int _st2_se_sawa_vol;
extern int _st2_shock_fall_flg;

extern char gsEnemyInfos[];
extern int D_002AEB44[];
extern int D_003C0A94[];
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

void gsWorldSt2_MotiveRapt()
{
    _st2_rapt_flag = (_st2_rapt_flag | 0x1);
    gsSt2_BattleInit_RAPT();
}

void gsWorldSt2_CheckRaptEnd()
{
    if (_st2_rapt_flag & 1)
    {
        if (gsSt2_DieCheck_RAPT() <= 0)
        {
            if (D_002AEB44[0] & 1)
            {
                D_003C0A94[0] = 2;
            }
            else
            {
                D_003C0A94[0] = 4;
            }
            _st2_rapt_flag = 0;
        }
    }
}

void gsWorldSt2_CheckBossDied()
{
    int p = (int)gsEnemyInfos;

    do
    {
        if (STRUCT_OFFSET(p, 0, int) & 1)
        {
            if (STRUCT_OFFSET(p, 0x2A, short) == 14 || STRUCT_OFFSET(p, 0x2A, short) == 8)
            {
                if (STRUCT_OFFSET(p, 0, int) & 0x20000000)
                {
                    gsTaikenCall_CLEAR();
                }
            }
        }
        p += 0x2A50;
    } while (p < (int)gsEnemyInfos + 0x1A720);
}

void gsWorldSt2_InitBackSE()
{
    _st2_se_port_river = 0x17;
    _st2_se_port_fall = 0x16;
    _st2_se_port_sawa = 0x15;
    _st2_se_sawa_vol = 0x3fff;
    _st2_shock_fall_flg = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_PlayBackSE);

int gsWorldSt2_TexScroll(int wp, int tex, int pos, int shift, int size, int h)
{
    GF_TEXDB* db;
    Uint32* pig;
    int ret;
    Uint32 save[2];

    db = GFTex_GetDb(tex);
    pig = db->pig;
    save[0] = pig[0x48 / 4];
    save[1] = pig[0x4C / 4];
    pig[0x48 / 4] = save[0] + (size >> shift) * (h - (pos & (h - 1)));
    ret = (int)GFTex_MakeTexturePacket((qword*)wp, db, 1);
    pig[0x48 / 4] = save[0];
    pig[0x4C / 4] = save[1];
    return ret;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st2", gsWorldSt2_SkyScale);
