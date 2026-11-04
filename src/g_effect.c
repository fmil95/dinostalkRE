#include "common.h"
extern char gParticleM[];
extern char gParticleMS[];
extern void GFMicro_MakePacket();

extern int gsEffect_FadeCnt;
extern void gsEffectAddWithPri();
extern char gsEffect_WindVec[];
extern void sceVu0CopyVector();
extern char gsEffect_BlurCol[];
extern char gsEffect_BlurDisCol[];
extern char gsEffect_FadeCol[];
extern char gsEffect_FadeDisCol[];
extern char gsEffectS[];
extern char gsEffectM[];
extern char gsEffectL[];
extern void gs_effectResetEffectSrc();
extern void gs_effectResetEffectSrc();
extern void gs_effectResetEffectSrc();
extern int gsEffect_BlurRBak;
extern int gsEffect_BlurR;
extern int gsEffect_BlurTimeBak;
extern int gsEffect_BlurTime;
extern int gsEffect_BlurCntBak;
extern int gsEffect_BlurCnt;
extern char gsEffect_BlurColBak[];
extern char gsEffect_BlurAddCol[];
extern char gsEffect_BlurAddColBak[];
extern char gsEffect_BlurDisColBak[];

typedef struct { int a; int b; int c; } EffectTexInfoS;
extern EffectTexInfoS effectTexInfo[];
INCLUDE_ASM("asm/nonmatchings/g_effect", gs_effectResetEffectSrc);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectRemove);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectRemoveForce);

INCLUDE_ASM("asm/nonmatchings/g_effect", _gsEffectAddOne);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectAddOne);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectAddWithVector);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectAddWithRot);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectAddWithPri);

void gsEffectAdd(int a, int b, int c)
{
    gsEffectAddWithPri(a, b, c, 1);
}

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectAddThunder);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectAddScale);

void gsEffectInitMicro(int a, int b, int c)
{
    GFMicro_MakePacket(gParticleM, b, gParticleMS, c);
}

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectTexLoad);

int gsEffectGetTexIdx(int i)
{
    EffectTexInfoS* e;

    if (i < 0)
    {
        return i;
    }

    e = &effectTexInfo[i];

    if (e->c == 0)
    {
        return 0;
    }

    return e->b;
}

void gsEffectTexReset()
{
    int i;

    for (i = 0; i < 64; i++)
    {
        effectTexInfo[i].c = 0;
        effectTexInfo[i].b = 0;
    }
}

u_int gs_EffectMemAlign(u_int a, u_int b)
{
    return a + (b - a % b);
}

INCLUDE_ASM("asm/nonmatchings/g_effect", gs_effectInitEffectSrc);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectInit);

void gsEffectReset()
{
    gs_effectResetEffectSrc(gsEffectS, 0x78, 0xc);
    gs_effectResetEffectSrc(gsEffectM, 0x32, 0x30);
    gs_effectResetEffectSrc(gsEffectL, 5, 0x134);
}

INCLUDE_ASM("asm/nonmatchings/g_effect", gf_calcViewPosZ);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsManagementEffectOne);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsManagementEffect);

INCLUDE_ASM("asm/nonmatchings/g_effect", initParticleParamAll);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncRandomMove);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncRandomMove2);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncRandomMove3);

void gsEffectFuncMakeParticle(int a)
{
    gsEffectAddWithPri(a, 0, 108, 0);
}

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncFadein);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncMagmaL);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncThunderCreate);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectInitBlur);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectSetBlurFade);

void gsEffectSetBlurNowColor(int a)
{
    sceVu0CopyVector(gsEffect_BlurCol, a);
    sceVu0CopyVector(gsEffect_BlurDisCol, a);
}

void gsEffectBlurStatPush()
{
    sceVu0CopyVector(gsEffect_BlurColBak, gsEffect_BlurCol);
    sceVu0CopyVector(gsEffect_BlurAddColBak, gsEffect_BlurAddCol);
    sceVu0CopyVector(gsEffect_BlurDisColBak, gsEffect_BlurDisCol);
    gsEffect_BlurRBak = gsEffect_BlurR;
    gsEffect_BlurTimeBak = gsEffect_BlurTime;
    gsEffect_BlurCntBak = gsEffect_BlurCnt;
}

void gsEffectBlurStatPop()
{
    sceVu0CopyVector(gsEffect_BlurCol, gsEffect_BlurColBak);
    sceVu0CopyVector(gsEffect_BlurAddCol, gsEffect_BlurAddColBak);
    sceVu0CopyVector(gsEffect_BlurDisCol, gsEffect_BlurDisColBak);
    gsEffect_BlurR = gsEffect_BlurRBak;
    gsEffect_BlurTime = gsEffect_BlurTimeBak;
    gsEffect_BlurCnt = gsEffect_BlurCntBak;
}

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectBlurManagement);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectBlurFullScreen);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectInitFade);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFade);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectSetFade);

void gsEffectSetFadeNowColor(int a)
{
    sceVu0CopyVector(gsEffect_FadeCol, a);
    sceVu0CopyVector(gsEffect_FadeDisCol, a);
}

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFadeManagement);

int gsEffectGetFadeCnt()
{
    return gsEffect_FadeCnt;
}

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectChangeBloodColor);

void gsEffectSetWind(int a)
{
    sceVu0CopyVector(gsEffect_WindVec, a);
}
