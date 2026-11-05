#include "common.h"
#include "hoya/startgs3/stgssub5.h"
#include "hoya/hoya.h"

extern int pStgs_006749a0;
extern int hyCheckFadeFinishFlag();
extern void hySwitchFadeTimer();

extern char stgs_0084bad0[];
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

void SetFadeParaFadeOut_stgssub5()
{
    char* p = (char*)pStgs_006749a0;

    STRUCT_OFFSET(p, 0x10, int) = 0;
    STRUCT_OFFSET(p, 0x14, int) = 0;
    STRUCT_OFFSET(p, 0x18, int) = 0;
    STRUCT_OFFSET(p, 0x1C, int) = 0;
    STRUCT_OFFSET(p, 0x20, int) = 0;
    STRUCT_OFFSET(p, 0x24, int) = 0;
    STRUCT_OFFSET(p, 0x28, int) = 0;
    STRUCT_OFFSET(p, 0x2C, float) = 128.0f;
}

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

int ProcFade_stgssub5(int step)
{
    int t = pStgs_006749a0;

    switch (STRUCT_OFFSET(t, 4, int))
    {
    case 0:
        STRUCT_OFFSET(t, 0x40, int) = 0;
        SetFadePara_stgssub5(t + 0x10, t + 0x20, STRUCT_OFFSET(t, 0x30, int));
        SwitchFadeTimer_stgssub5(1);
        STRUCT_OFFSET(pStgs_006749a0, 4, int)++;
        break;
    case 1:
        STRUCT_OFFSET(t, 4, int) = 2;
        break;
    case 2:
        if (!CheckFadeFinishFlag_stgssub5())
        {
            STRUCT_OFFSET(pStgs_006749a0, 4, int)++;
        }
        break;
    case 3:
        STRUCT_OFFSET(t, 4, int) = 0;
        step++;
        break;
    }

    return step;
}

void InitStgsTaikenTyuui()
{
    int* p;

    pStgs_006749a0 = (int)stgs_0084bad0;
    hyLoadPigStartgs3();
    p = (int*)pStgs_006749a0;
    p[0x30 / 4] = 30;
    ((float*)p)[0x1C / 4] = 128.0f;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[0x368 / 4] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    p[11] = 0;
    p[0x200 / 4] = 0;
    hyInitFadeMng2(p + 0x10);
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/stgssub5", MainStgsTaikenTyuui);

void EndStgsTaikenTyuui(void) {
}
