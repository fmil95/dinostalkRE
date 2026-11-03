#include "common.h"

extern int pStgs_006749a0;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", SetFadeParaFadeIn_stgssub5);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", SetFadeParaFadeOut_stgssub5);

void SetFadePara_stgssub5(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pStgs_006749a0 + 64));
}

void SwitchFadeTimer_stgssub5(int a)
{
    hySwitchFadeTimer(a, (pStgs_006749a0 + 64));
}

void CheckFadeFinishFlag_stgssub5()
{
    hyCheckFadeFinishFlag((pStgs_006749a0 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", Draw2dObject_stgssub5);

void Calculation_stgssub5(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", ProcFade_stgssub5);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", InitStgsTaikenTyuui);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", MainStgsTaikenTyuui);

void EndStgsTaikenTyuui(void) {
}
