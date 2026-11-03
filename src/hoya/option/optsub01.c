#include "common.h"

extern int pOptOption;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();
extern void OptDrawSprMenuLight();
extern void OptDrawSprMenu();
extern void OptDrawSprOther();

void SetFadeParaOpt(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pOptOption + 13200));
}

void SwitchFadeTimerOpt(int a)
{
    hySwitchFadeTimer(a, (pOptOption + 13200));
}

void CheckFadeFinishFlagOpt()
{
    hyCheckFadeFinishFlag((pOptOption + 13200));
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptInitSprOther);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptDrawSprOther);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptInitSprMenu);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptDrawSprMenu);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptCalcSprMenu);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptInitSprMenuLight);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptDrawSprMenuLight);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptCalcSprMenuLight);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptInitSprButtonPad);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptDrawSprButtonPad);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptCalcSprButtonPad);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptInitSprButtonGun);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptDrawSprButtonGun);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptCalcSprButtonGun);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptInitSprButtonGun1);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptDrawSprButtonGun1);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptCalcSprButtonGun1);

void Draw2dObjectOpt(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", Draw2dObjectOptMonitor);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", Draw2dObjectOptAjstScn);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", Draw2dObjectOptAjstGunGuncon1);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", Draw2dObjectOptAjstGunGuncon2);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", Draw2dObjectOptAjstGun);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", Draw2dObjectOptKeyConfig);

void Draw2dObjectOptMenu(int a)
{
    OptDrawSprMenuLight(a);
    OptDrawSprMenu(a);
    OptDrawSprOther(a);
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", InitSpriteKeyConfig);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", InitSpriteOther);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", OptReloadTexture);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", CalcNum2Char);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", ProcFadeIn_optsub01);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", ProcFadeOut_optsub01);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", ProcMenu);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", ProcKeyConfigPad);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", ProcKeyConfigGun);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", ProcKeyConfigGun1);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", ProcAjstScreen);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", ProcAjstGun);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", InitOpt);

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", MainOpt);

void EndOpt(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/optsub01", enableOption);
