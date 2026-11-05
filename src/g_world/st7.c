#include "common.h"
#include "g_world/st7.h"
#include "gunsuv_usa/libgf/gftex.h"

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

extern int _st7_fire_light_obj[];
extern int _st7_fire_light_obj_num;
extern int _st7_glow_obj_no[];
extern int _st7_hasi_light_obj[];
extern int _st7_jeep_light_obj[];
extern int _st7_neon_00_obj[];
extern int _st7_fire_light_num;
extern int _st7_fire_light_time;
extern int _st7_fire_light_step;
extern int rand();
extern char gsEnemyInfos[];
extern void _gsWorldSt7_TrexHeadColl();
extern int gsWorldTimer;
extern int gsWorldTexIdx[];
INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldInitSt7);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7EntryTex_GND);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_SpecialEffect);

int gsWorldSt7_SpecialEffect2(int a)
{
    int idx = gsWorldTexIdx[0];

    a = gsWorldSt7_Neon_Scroll(a, idx + 0x3F, ((u_int)-gsWorldTimer >> 1) & 0x7FFC);
    return gsWorldSt7_TV_Storm(a, idx + 0x1B, gsWorldTimer);
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_ClearPointLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_FlushPointLight);

void gsWorldSt7_InitJeepLight()
{
    _st7_jeep_light_obj_num = 0;
}

void gsWorldSt7_EntryJeepLight(int a)
{
    int n = _st7_jeep_light_obj_num;

    _st7_jeep_light_obj[n] = a;
    _st7_jeep_light_obj_num = n + 1;
}

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

void gsWorldSt7_EntryGlow(int a)
{
    int n = _st7_glow_num;

    _st7_glow_obj_no[n] = a;
    _st7_glow_num = n + 1;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Glow);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Neon_Emb);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Neon_Sca);

void gsWorldSt7_InitNeon_00()
{
    _st7_neon_00_num = 0;
}

void gsWorldSt7_EntryNeon_00(int a)
{
    int n = _st7_neon_00_num;

    _st7_neon_00_obj[n] = a;
    _st7_neon_00_num = n + 1;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Neon_00);

void gsWorldSt7_InitNeon_01()
{
    _st7_neon_01_num = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_EntryNeon_01);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Neon_01);

int gsWorldSt7_Neon_Scroll(int pkt, int tex, int pos)
{
    GF_TEXDB* db = GFTex_GetDb(tex);
    int* pig = (int*)db->pig;
    int save[2];

    save[0] = pig[0x48 / 4];
    save[1] = pig[0x4C / 4];
    pig[0x48 / 4] = save[0] + (0x80 - (pos & 0x7F)) * 128;
    pkt = (int)GFTex_MakeTexturePacket((qword*)pkt, db, 1);
    pig[0x48 / 4] = save[0];
    pig[0x4C / 4] = save[1];
    return pkt;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_TV_Storm);

void gsWorldSt7_InitHasiLight()
{
    _st7_hasi_light_num = 0;
}

void gsWorldSt7_EntryHasiLight(int a)
{
    int n = _st7_hasi_light_num;

    _st7_hasi_light_obj[n] = a;
    _st7_hasi_light_num = n + 1;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_HasiLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Fire);

void gsWorldSt7_InitFireLight()
{
    _st7_fire_light_obj_num = 0;
    _st7_fire_light_num = 0;
    _st7_fire_light_time = 0;
    _st7_fire_light_step = rand() % 30 + 6;
}

void gsWorldSt7_EntryFireLightObj(int a)
{
    int n = _st7_fire_light_obj_num;

    _st7_fire_light_obj[n] = a;
    _st7_fire_light_obj_num = n + 1;
}

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

void gsWorldSt7_TrexHeadColl()
{
    char* p = gsEnemyInfos;
    int i;

    for (i = 9; i >= 0; i--, p += 0x2A50)
    {
        if (STRUCT_OFFSET(p, 0, int) & 1)
        {
            if (STRUCT_OFFSET(p, 0x2A, short) == 7)
            {
                _gsWorldSt7_TrexHeadColl(STRUCT_OFFSET(p, 0xD30, int), p + 0xBA0);
            }
        }
    }
}

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

INCLUDE_RODATA("asm/nonmatchings/g_world/st7", D_00665A28);

INCLUDE_RODATA("asm/nonmatchings/g_world/st7", D_00665A50);

INCLUDE_RODATA("asm/nonmatchings/g_world/st7", D_00665A60);

INCLUDE_RODATA("asm/nonmatchings/g_world/st7", D_00665A70);

INCLUDE_RODATA("asm/nonmatchings/g_world/st7", D_00665A80);

INCLUDE_RODATA("asm/nonmatchings/g_world/st7", D_00665AA0);

INCLUDE_RODATA("asm/nonmatchings/g_world/st7", D_00665AD0);

INCLUDE_RODATA("asm/nonmatchings/g_world/st7", D_00665AE0);

INCLUDE_RODATA("asm/nonmatchings/g_world/st7", D_00665AF0);

INCLUDE_ASM("asm/nonmatchings/g_world/st7", gsWorldSt7_Kanban);

int gsWorldSt7_CheckBossDied_CALNO()
{
    int p = (int)gsEnemyInfos;

    do
    {
        int f = *(int*)p;

        if (f & 1)
        {
            short t = *(short*)(p + 0x2A);

            if ((t == 14 || t == 8) && (f & 0x20000000))
            {
                return 1;
            }
        }

        p += 0x2A50;
    } while (p < (int)gsEnemyInfos + 0x1A720);

    return 0;
}

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
INCLUDE_RODATA("asm/nonmatchings/g_world/st7", D_00665B18);

