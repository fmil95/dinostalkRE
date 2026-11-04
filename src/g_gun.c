#include "common.h"

extern int gsGunExtraId;
extern void gsSoundEeSE_STOP();
extern void gsSoundEeSE_STOP();

extern char D_003C1144[];
extern void gsSoundSeMePlay();
extern char D_003C1146[];
extern char D_003C114C[];
extern char D_003C114E[];
extern char D_003C1148[];
extern char D_003C246C[];
extern char gsGunInfo[];
extern int gShockData[];
extern void gsShockSetSeq();
extern char gsWorldManager[];
extern void gsWorldCrashOBJ_FLUSH();
extern void gsGunCrash_FLUSH_CH_ENE();
extern int gsArmsTypeTbl[];
extern int D_003C245C[];
INCLUDE_ASM("asm/nonmatchings/g_gun", gsInitGunManager);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsInitGunManager_START_GAME);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsInitGunManager_LOAD_GAME);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunClearManager);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsTriggerGun);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsTriggerGuncon);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsTriggerGuncon1);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsManagementGun);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsSetGunBullet);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunSetBulletVector);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunSetExBomb_SHOCK);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunSetExBomb);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsManagementGunBullet);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsMngmntBullet_LINE_EFFECT);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsMngmntBullet_LINE_EFFECT2);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsMngmntBullet_BULLET_TRANS);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsMngmntBullet_LINE);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsMngmntBullet_RANGE);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsMngmntBullet_LAND_EFFECT);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsMngmntBullet_HIT_LAND_EFFECT);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsMngmntBullet_HIT_ITEM_SHOCK);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsMngmntBullet_HIT);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunRockOnTarget);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunRockOnTarget_OFF);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_GRENADE);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_PINEAPPLE);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_PINEAPPLE2);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_BOWGUN);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_BOWGUN2);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_BOWGUN3);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunBulletCheckEnd_BOWGUN);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_MINE);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunBulletCheckEnd_MINE);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_GAIZAR);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_GAIZAR2);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_FLAME);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunBulletCheckEnd_FLAME);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_SPARK);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_SPARK2);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunAdjustBulletLine_SPARK3);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunBulletCheckEnd_SPARK);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunCheckReload);

int gsGunGetReloadBullet(int a)
{
    int t = gsArmsTypeTbl[a];
    int x = D_003C245C[a * 12];
    int y = ((int*)(gsGunInfo + 0x20))[t * 45];

    return (y < x) ? y : x;
}

INCLUDE_ASM("asm/nonmatchings/g_gun", _gsGunEntryGun);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunEntryGun);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunEntryGun_STRONG);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunSpecial_STRONG);

int gsGunGetExtArmsTypeNo()
{
    return ((gsGunExtraId & 0x1) + 2);
}

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunPutTreasure);

INCLUDE_ASM("asm/nonmatchings/g_gun", _gsGunCrashObject);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunCrashObject);

void gsGunCrash_FLUSH_CH(int a, int b)
{
    gsWorldCrashOBJ_FLUSH(gsWorldManager, a);
    gsGunCrash_FLUSH_CH_ENE(b);
}

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunCrash_FLUSH_CH_ENE);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsInitGunBulletModel);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsInitGunBullet);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsSetBulletModel);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsSetBulletParam);

void gsGunPlaySE_FIRE(int a)
{
    char* g = gsGunInfo + a * 180;
    short* p = (short*)(g + 0x50);
    int i = 1;
    short s;

    do
    {
        s = *p++;

        if (s >= 0)
        {
            gsSoundSeMePlay(s);
        }
    } while (--i >= 0);

    s = STRUCT_OFFSET(g, 0xAA, short);
    if (s >= 0)
    {
        gsShockSetSeq(0, gShockData[s]);
    }
}

void gsGunPlaySE_LOAD_A(int a)
{
    short s = STRUCT_OFFSET(D_003C1144 + a * 180, 0, short);

    if (s >= 0)
    {
        gsSoundSeMePlay(s);
    }
}

void gsGunPlaySE_LOAD_B(int a)
{
    short s = STRUCT_OFFSET(D_003C1146 + a * 180, 0, short);

    if (s >= 0)
    {
        gsSoundSeMePlay(s);
    }
}

void gsGunPlaySE_EMPTY(int a)
{
    short* p = (short*)(D_003C1148 + a * 180);
    int i = 1;

    do
    {
        short s = *p++;

        if (s >= 0)
        {
            gsSoundSeMePlay(s);
        }
    } while (--i >= 0);
}

void gsGunPlaySE_RELOAD_A(int a)
{
    short s = STRUCT_OFFSET(D_003C114C + a * 180, 0, short);

    if (s >= 0)
    {
        gsSoundSeMePlay(s);
    }
}

void gsGunPlaySE_RELOAD_B(int a)
{
    short s = STRUCT_OFFSET(D_003C114E + a * 180, 0, short);

    if (s >= 0)
    {
        gsSoundSeMePlay(s);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunYakkyo_ENTRY);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunYakkyo_EXEC);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunPlaySE_FIRE_EXTRA);

void gsGunStopEeSE_GUN(int a)
{
    char* p = D_003C246C + a * 48;

    gsSoundEeSE_STOP(p);
    gsSoundEeSE_STOP(p + 4);
    gsSoundEeSE_STOP(p + 8);
    gsSoundEeSE_STOP(p + 12);
}

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunCheckBombHit_CAMERA);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunPlaySE_FLY);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunTuneVOLUME_FLY);

void gsGunStopSE_FLY(int a)
{
    gsSoundEeSE_STOP((char*)a + 0xF4);
    gsSoundEeSE_STOP((char*)a + 0xF8);
}

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunPlaySE_BOMB);
