// STATUS: NOT STARTED

#ifndef G_GUN_H
#define G_GUN_H

gsInitGunManager();
void gsInitGunManager_START_GAME();
gsInitGunManager_LOAD_GAME();
gsGunClearManager();
gsTriggerGun();
gsTriggerGuncon();
gsTriggerGuncon1();
gsManagementGun();
gsSetGunBullet();
gsGunSetBulletVector();
gsGunSetExBomb();
gsManagementGunBullet();
gsMngmntBullet_LINE_EFFECT();
gsMngmntBullet_LINE_EFFECT2();
gsMngmntBullet_BULLET_TRANS();
gsMngmntBullet_LINE();
gsMngmntBullet_RANGE();
gsMngmntBullet_LAND_EFFECT();
gsMngmntBullet_HIT_LAND_EFFECT();
gsMngmntBullet_HIT_ITEM_SHOCK();
gsMngmntBullet_HIT();
gsGunRockOnTarget();
gsGunAdjustBulletLine();
gsGunRockOnTarget_OFF();
gsGunAdjustBulletLine_GRENADE();
gsGunAdjustBulletLine_PINEAPPLE();
gsGunAdjustBulletLine_PINEAPPLE2();
gsGunAdjustBulletLine_BOWGUN();
gsGunAdjustBulletLine_BOWGUN2();
gsGunAdjustBulletLine_BOWGUN3();
void gsGunBulletCheckEnd_BOWGUN();
gsGunAdjustBulletLine_MINE();
void gsGunBulletCheckEnd_MINE();
gsGunAdjustBulletLine_GAIZAR();
gsGunAdjustBulletLine_GAIZAR2();
gsGunAdjustBulletLine_FLAME();
void gsGunBulletCheckEnd_FLAME();
gsGunAdjustBulletLine_SPARK();
gsGunAdjustBulletLine_SPARK2();
gsGunAdjustBulletLine_SPARK3();
void gsGunBulletCheckEnd_SPARK();
gsGunCheckReload();
int gsGunGetReloadBullet(int arg0);
gsGunEntryGun();
gsGunEntryGun_STRONG();
gsGunSpecial_STRONG();
int gsGunGetExtArmsTypeNo();
void gsGunPutTreasure(int a, void* b);
gsGunCrashObject();
void gsGunCrash_FLUSH_CH(int a, int b);
void gsGunCrash_FLUSH_CH_ENE();
gsInitGunBulletModel();
gsInitGunBullet();
gsSetBulletModel();
gsSetBulletParam();
void gsGunPlaySE_FIRE(int a);
void gsGunPlaySE_LOAD_A(int a);
void gsGunPlaySE_LOAD_B(int a);
void gsGunPlaySE_EMPTY(int a);
void gsGunPlaySE_RELOAD_A(int a);
void gsGunPlaySE_RELOAD_B(int a);
gsGunYakkyo_ENTRY();
gsGunYakkyo_EXEC();
gsGunPlaySE_FIRE_EXTRA();
void gsGunStopEeSE_GUN(int a);
gsGunCheckBombHit_CAMERA();
gsGunPlaySE_FLY();
gsGunTuneVOLUME_FLY();
void gsGunStopSE_FLY(int a);
gsGunPlaySE_BOMB();

#endif // G_GUN_H
