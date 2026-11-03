#include "common.h"

extern int gsEffect_FadeCnt;
extern void gsEffectAddWithPri();

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

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectInitMicro);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectTexLoad);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectGetTexIdx);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectTexReset);

INCLUDE_ASM("asm/nonmatchings/g_effect", gs_EffectMemAlign);

INCLUDE_ASM("asm/nonmatchings/g_effect", gs_effectInitEffectSrc);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectInit);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectReset);

INCLUDE_ASM("asm/nonmatchings/g_effect", gf_calcViewPosZ);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsManagementEffectOne);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsManagementEffect);

INCLUDE_ASM("asm/nonmatchings/g_effect", initParticleParamAll);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncRandomMove);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncRandomMove2);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncRandomMove3);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncMakeParticle);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncFadein);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncMagmaL);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFuncThunderCreate);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectInitBlur);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectSetBlurFade);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectSetBlurNowColor);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectBlurStatPush);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectBlurStatPop);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectBlurManagement);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectBlurFullScreen);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectInitFade);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFade);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectSetFade);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectSetFadeNowColor);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectFadeManagement);

int gsEffectGetFadeCnt()
{
    return gsEffect_FadeCnt;
}

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectChangeBloodColor);

INCLUDE_ASM("asm/nonmatchings/g_effect", gsEffectSetWind);
