#include "common.h"
#include "g_world/st3.h"
#include "gunsuv_usa/libgf/gftex.h"
#include "taiken/taiken.h"

extern int gsWorldSt3_KoiwaCnt;
extern int gsWorldSt3_SplashCnt;
extern int gsWorldSt3_IwaCnt;
extern int gsWorldSt3_IwaObjCnt;
extern int _st3_demo0_timer;
extern int _st3_demo0_step;
extern int _st3_boss_died_flag;
extern int _st3_boss_died_wait;
extern int _st3_se_port_boat_eng;
extern int _st3_se_port_boat_spl;
extern char D_002F2030[];
extern void sceVu0CopyVector();

extern int gsWorldSt3_IwaOdv[];
extern int gsWorldSt3_KoiwaOdv[];
extern int gsWorldSt3_SplashOdv[];
extern int gsWorldTimer;
extern int _st3_tex_idx;
extern int SpBattleCount;
extern int D_003C0A94[];
typedef struct { int a; int b; int pad[2]; float v1[4]; float v2[4]; } St3DCollMngr;
extern St3DCollMngr _st3_d_coll_mngr[];
INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldInitSt3);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3EntryTex_GND);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_SpecialEffect);

int gsWorldSt3_SpecialEffect2(int a)
{
    int r = gsWorldSt3_TexScroll(a, _st3_tex_idx + 0x21, ((u_int)(-gsWorldTimer) >> 3) & 0xFF, 1, 0x80, 0x80);

    return gsWorldSt3_TexScroll(r, _st3_tex_idx + 0x22, ((u_int)(-gsWorldTimer) >> 2) & 0xFF, 1, 0x100, 0x100);
}

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

void gsWorldSt3_EntryIwa(int a)
{
    int n = gsWorldSt3_IwaCnt;

    gsWorldSt3_IwaOdv[n] = a;
    gsWorldSt3_IwaCnt = n + 1;
}

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

void gsWorldSt3_EntrySplash(int a)
{
    int n = gsWorldSt3_SplashCnt;

    gsWorldSt3_SplashOdv[n] = a;
    gsWorldSt3_SplashCnt = n + 1;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_IwaWater);

void gsWorldSt3_InitKoiwa()
{
    gsWorldSt3_KoiwaCnt = 0;
}

void gsWorldSt3_EntryKoiwa(int a)
{
    int n = gsWorldSt3_KoiwaCnt;

    gsWorldSt3_KoiwaOdv[n] = a;
    gsWorldSt3_KoiwaCnt = n + 1;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_Koiwa);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_SkyScale);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_HikariFade);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldBulletEffectGnd_ST3);

void gsWorldSt3_InitDinoCollWater()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        _st3_d_coll_mngr[i].a = 0;
        _st3_d_coll_mngr[i].b = 0;
        _st3_d_coll_mngr[i].v2[0] = _st3_d_coll_mngr[i].v2[1] = _st3_d_coll_mngr[i].v2[2] = 0.0f;
        _st3_d_coll_mngr[i].v1[0] = _st3_d_coll_mngr[i].v1[1] = _st3_d_coll_mngr[i].v1[2] = 0.0f;
        _st3_d_coll_mngr[i].v2[3] = 1.0f;
        _st3_d_coll_mngr[i].v1[3] = 1.0f;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3", _gsWorldSt3_DinoCollWater);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", _st3_DinoCollWater_CRN);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", _st3_DinoCollWater_PTR);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", _st3_DinoCollWater_PRS);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_00665750);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_00665780);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_00665790);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_006657A0);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_006657B0);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_006657C0);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_006657F0);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_00665800);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_00665810);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_00665820);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_DinoCollWater);

void gsWorldSt3_initBossDied()
{
    _st3_boss_died_flag = 0;
    _st3_boss_died_wait = 0x96;
}

void gsWorldSt3_EntryBossDied()
{
    _st3_boss_died_flag = (_st3_boss_died_flag | 0x1);
}

void gsWorldSt3_CheckBossDied()
{
    if (_st3_boss_died_flag)
    {
        if (SpBattleCount <= 0)
        {
            gsTaikenCall_CLEAR();
            _st3_boss_died_wait--;
        }

        if (_st3_boss_died_wait < 0)
        {
            _st3_boss_died_wait = -1;
            D_003C0A94[0] = 2;
        }
    }
}

void gsWorldSt3_InitBackSE()
{
    _st3_se_port_boat_eng = 0x17;
    _st3_se_port_boat_spl = 0x16;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_PlayBackSE);

int gsWorldSt3_TexScroll(int wp, int tex, int pos, int shift, int size, int h)
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

void gsWorldSt3_Demo0_Init()
{
    _st3_demo0_timer = 0;
    _st3_demo0_step = -1;
}

void gsWorldSt3_Demo0_Request(int a)
{
    _st3_demo0_step = 0;
    _st3_demo0_timer = 0;
    sceVu0CopyVector(D_002F2030, a);
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_Demo0_Exec);

INCLUDE_ASM("asm/nonmatchings/g_world/st3", gsWorldSt3_ObjSort);
INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_00665870);

INCLUDE_RODATA("asm/nonmatchings/g_world/st3", D_00665880);

