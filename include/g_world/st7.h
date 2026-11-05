// STATUS: NOT STARTED

#ifndef G_WORLD_ST7_H
#define G_WORLD_ST7_H

int gsWorldInitSt7();
gsWorldSt7EntryTex_GND();
void gsWorldSt7_SpecialEffect();
int gsWorldSt7_SpecialEffect2(int a);
gsWorldSt7_ClearPointLight();
gsWorldSt7_FlushPointLight();
void gsWorldSt7_InitJeepLight();
void gsWorldSt7_EntryJeepLight(int a);
gsWorldSt7_JeepLight();
gsWorldSt7_Loop();
gsWorldSt7_JeepInit();
gsWorldSt7_Jeep();
gsWorldSt7_JeepDirection();
gsWorldSt7_GaitoLight();
gsWorldSt7_JeepCrash();
void gsWorldSt7_InitGlow();
void gsWorldSt7_EntryGlow(int a);
gsWorldSt7_Glow();
gsWorldSt7_Neon_Emb();
gsWorldSt7_Neon_Sca();
void gsWorldSt7_InitNeon_00();
void gsWorldSt7_EntryNeon_00(int a);
gsWorldSt7_Neon_00();
void gsWorldSt7_InitNeon_01();
gsWorldSt7_EntryNeon_01();
gsWorldSt7_Neon_01();
int gsWorldSt7_Neon_Scroll(int a, int b, int c);
int gsWorldSt7_TV_Storm(int a, int b, int c);
void gsWorldSt7_InitHasiLight();
void gsWorldSt7_EntryHasiLight(int a);
gsWorldSt7_HasiLight();
gsWorldSt7_Fire();
void gsWorldSt7_InitFireLight();
void gsWorldSt7_EntryFireLightObj(int a);
gsWorldSt7_EntryFireLight();
gsWorldSt7_FireLight();
gsWorldSt7_InitTrikera();
gsWorldSt7_Trikera();
gsWorldSt7_GetTrikeraVector();
gsWorldSt7_BrowDoram();
gsWorldSt7_BrowDoramGunHit();
gsWorldSt7_BrowDoramGunHit_RANGE();
gsWorldSt7_BrowDoramBreak();
gsWorldSt7_BrowDoramDamage();
void gsWorldSt7_TrexHeadColl();
void gsWorldSt7_InitDinoLight();
gsWorldSt7_EntryDinoLight();
gsWorldSt7_DinoLight();
gsWorldSt7_ObjSort_EXT();
gsWorldSt7_ObjSort_EXT2();
gsWorldSt7_Frea();
gsWorldSt7_Kanban();
int gsWorldSt7_CheckBossDied_CALNO();
gsWorldSt7_CheckBossDied_TREX();
void gsWorldSt7_InitBackSE();
gsWorldSt7_PlayBackSE();
gsWorldSt7_FarAdjust();

#endif // G_WORLD_ST7_H
