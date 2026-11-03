#include "common.h"

extern int pStgs_00674978;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", SetFadeParaFadeIn_stgssub3);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", SetFadeParaFadeOut_stgssub3);

void SetFadePara_stgssub3(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pStgs_00674978 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", SwitchFadeTimer_stgssub3);

void CheckFadeFinishFlag_stgssub3()
{
    hyCheckFadeFinishFlag((pStgs_00674978 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", Draw2dObject_stgssub3);

void Calculation_stgssub3(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", ProcFade_stgssub3);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", InitStgsKeikoku);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", MainStgsKeikoku);

void EndStgsKeikoku(void) {
}
