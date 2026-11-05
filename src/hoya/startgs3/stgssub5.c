#include "common.h"
#include "hoya/startgs3/stgssub5.h"
#include "hoya/hoya.h"

extern int pStgs_006749a0;
extern int hyCheckFadeFinishFlag();
extern void hySwitchFadeTimer();

void SetFadeParaFadeIn_stgssub5()
{
    char* p = (char*)pStgs_006749a0;

    STRUCT_OFFSET(p, 0x10, int) = 0;
    STRUCT_OFFSET(p, 0x14, int) = 0;
    STRUCT_OFFSET(p, 0x18, int) = 0;
    STRUCT_OFFSET(p, 0x1C, float) = 128.0f;
    STRUCT_OFFSET(p, 0x20, int) = 0;
    STRUCT_OFFSET(p, 0x24, int) = 0;
    STRUCT_OFFSET(p, 0x28, int) = 0;
    STRUCT_OFFSET(p, 0x2C, int) = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", SetFadeParaFadeOut_stgssub5);

void SetFadePara_stgssub5(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pStgs_006749a0 + 64));
}

void SwitchFadeTimer_stgssub5(int a)
{
    hySwitchFadeTimer(a, (pStgs_006749a0 + 64));
}

int CheckFadeFinishFlag_stgssub5()
{
    return hyCheckFadeFinishFlag((pStgs_006749a0 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", Draw2dObject_stgssub5);

void Calculation_stgssub5(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", ProcFade_stgssub5);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", InitStgsTaikenTyuui);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", MainStgsTaikenTyuui);

void EndStgsTaikenTyuui(void) {
}
