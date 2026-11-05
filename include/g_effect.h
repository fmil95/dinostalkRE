// STATUS: NOT STARTED

#ifndef G_EFFECT_H
#define G_EFFECT_H

void gsEffectRemove(char* p);
gsEffectRemoveForce();
gsEffectAddOne();
gsEffectAddWithVector();
int gsEffectAddWithRot(int a, int b, int c, int d);
int gsEffectAddWithPri();
int gsEffectAdd(int a, int b, int c);
gsEffectAddThunder();
gsEffectAddScale();
void gsEffectInitMicro(int a, int b, int c);
gsEffectTexLoad();
int gsEffectGetTexIdx(int i);
void gsEffectTexReset();
u_int gs_EffectMemAlign(u_int a, u_int b);
gs_effectInitEffectSrc();
gsEffectInit();
void gsEffectReset();
gsManagementEffectOne();
gsManagementEffect();
gsEffectFuncRandomMove();
gsEffectFuncRandomMove2();
gsEffectFuncRandomMove3();
void gsEffectFuncMakeParticle(int a);
gsEffectFuncFadein();
gsEffectFuncMagmaL();
gsEffectFuncThunderCreate();
gsEffectInitBlur();
gsEffectSetBlurFade();
void gsEffectSetBlurNowColor(int a);
void gsEffectBlurStatPush();
void gsEffectBlurStatPop();
gsEffectBlurManagement();
gsEffectBlurFullScreen();
void gsEffectInitFade();
gsEffectFade();
void gsEffectSetFade();
void gsEffectSetFadeNowColor(int a);
void gsEffectFadeManagement(int a);
int gsEffectGetFadeCnt();
gsEffectChangeBloodColor();
void gsEffectSetWind(int a);
#endif // G_EFFECT_H
