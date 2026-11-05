#include "common.h"
#include "hoya/startgs3/stgssub3.h"
#include "hoya/hoya.h"

extern int pStgs_00674978;
extern int hyCheckFadeFinishFlag();
extern void hySwitchFadeTimer();

void SetFadeParaFadeIn_stgssub3()
{
    char* p = (char*)pStgs_00674978;

    STRUCT_OFFSET(p, 0x10, int) = 0;
    STRUCT_OFFSET(p, 0x14, int) = 0;
    STRUCT_OFFSET(p, 0x18, int) = 0;
    STRUCT_OFFSET(p, 0x1C, float) = 128.0f;
    STRUCT_OFFSET(p, 0x20, int) = 0;
    STRUCT_OFFSET(p, 0x24, int) = 0;
    STRUCT_OFFSET(p, 0x28, int) = 0;
    STRUCT_OFFSET(p, 0x2C, int) = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", SetFadeParaFadeOut_stgssub3);

void SetFadePara_stgssub3(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pStgs_00674978 + 64));
}

void SwitchFadeTimer_stgssub3(int a)
{
    hySwitchFadeTimer(a, (pStgs_00674978 + 64));
}

int CheckFadeFinishFlag_stgssub3()
{
    return hyCheckFadeFinishFlag((pStgs_00674978 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", Draw2dObject_stgssub3);

void Calculation_stgssub3(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", ProcFade_stgssub3);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", InitStgsKeikoku);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub3", MainStgsKeikoku);

void EndStgsKeikoku(void) {
}
