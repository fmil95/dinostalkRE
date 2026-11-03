#include "common.h"

extern int pStgs_00674978;
extern void hyCheckFadeFinishFlag();

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", SetFadeParaFadeIn_stgssub3);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", SetFadeParaFadeOut_stgssub3);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", SetFadePara_stgssub3);

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
