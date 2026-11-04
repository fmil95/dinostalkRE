// STATUS: NOT STARTED

#ifndef G_WORLD_ST3_H
#define G_WORLD_ST3_H

int gsWorldInitSt3();
gsWorldSt3EntryTex_GND();
void gsWorldSt3_SpecialEffect();
int gsWorldSt3_SpecialEffect2();
gsWorldSt3_BoatInit();
gsWorldSt3_Boat();
gsWorldSt3_BoatDirection();
gsWorldSt3_InitLight();
gsWorldSt3_Light();
void gsWorldSt3_InitIwa();
void gsWorldSt3_EntryIwa(int a);
gsWorldSt3_EntryIwaObj();
gsWorldSt3_Iwa();
gsWorldSt3_IwaDamage();
gsWorldSt3_IwaGunHit();
gsWorldSt3_IwaGunHit_RANGE();
gsWorldSt3_IwaBreak();
void gsWorldSt3_InitSplash();
void gsWorldSt3_EntrySplash(int a);
gsWorldSt3_IwaWater();
void gsWorldSt3_InitKoiwa();
void gsWorldSt3_EntryKoiwa(int a);
gsWorldSt3_Koiwa();
gsWorldSt3_SkyScale();
gsWorldSt3_HikariFade();
gsWorldBulletEffectGnd_ST3();
gsWorldSt3_InitDinoCollWater();
gsWorldSt3_DinoCollWater();
void gsWorldSt3_initBossDied();
void gsWorldSt3_EntryBossDied();
gsWorldSt3_CheckBossDied();
void gsWorldSt3_InitBackSE();
gsWorldSt3_PlayBackSE();
int gsWorldSt3_TexScroll();
void gsWorldSt3_Demo0_Init();
void gsWorldSt3_Demo0_Request(int a);
gsWorldSt3_Demo0_Exec();
gsWorldSt3_ObjSort();

#endif // G_WORLD_ST3_H
