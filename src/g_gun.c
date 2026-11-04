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

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunGetReloadBullet);

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

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunCrash_FLUSH_CH);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunCrash_FLUSH_CH_ENE);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsInitGunBulletModel);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsInitGunBullet);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsSetBulletModel);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsSetBulletParam);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunPlaySE_FIRE);

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

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunStopEeSE_GUN);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunCheckBombHit_CAMERA);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunPlaySE_FLY);

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunTuneVOLUME_FLY);

void gsGunStopSE_FLY(int a)
{
    gsSoundEeSE_STOP((char*)a + 0xF4);
    gsSoundEeSE_STOP((char*)a + 0xF8);
}

INCLUDE_ASM("asm/nonmatchings/g_gun", gsGunPlaySE_BOMB);
