#include "common.h"
#include "hoya/pause/pausesub.h"
#include "hoya/hoya.h"

extern int pPpp;
extern int hyCheckFadeFinishFlag();
extern void hySwitchFadeTimer();

typedef struct { int* str; int n; } ExpEnt;
extern ExpEnt* ExpAll[];
INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_InitVitality);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_PutVitalityUnder);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_PutVitalityHead);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_PutVitalityLife);

void gsPAUSE_PutVitality(int a)
{
    gsPAUSE_PutVitalityLife(a);
    gsPAUSE_PutVitalityHead(a);
    gsPAUSE_PutVitalityUnder(a);
}

void GetExplain(int* a, int* b, int i, int j)
{
    if (i >= 0 && j >= 0)
    {
        *a = *ExpAll[i][j].str;
        *b = ExpAll[i][j].n;
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", InitExplain);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", GetExpCur);

void SetFadeParaPause_pausesub(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pPpp + 144));
}

void SwitchFadeTimerPause_pausesub(int a)
{
    hySwitchFadeTimer(a, (pPpp + 144));
}

int CheckFadeFinishFlagPause_pausesub()
{
    return hyCheckFadeFinishFlag((pPpp + 144));
}

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_PutLife);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", Draw2dObjectPause);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", Calculation_pausesub);

int ProcFadeIn_pausesub(int step)
{
    int t = pPpp;

    switch (STRUCT_OFFSET(t, 4, int))
    {
    case 0:
        STRUCT_OFFSET(t, 0x90, int) = 0;
        SetFadeParaPause_pausesub(t + 0x60, t + 0x70, STRUCT_OFFSET(t, 0x80, int));
        SwitchFadeTimerPause_pausesub(1);
        STRUCT_OFFSET(pPpp, 4, int)++;
        break;
    case 1:
        STRUCT_OFFSET(t, 4, int) = 2;
        break;
    case 2:
        if (!CheckFadeFinishFlagPause_pausesub())
        {
            STRUCT_OFFSET(pPpp, 4, int)++;
        }
        break;
    case 3:
        STRUCT_OFFSET(t, 4, int) = 0;
        step++;
        break;
    }

    return step;
}

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", ProcFadeOut_pausesub);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", ProcLMenu);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", ProcRMenu);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", ProcReset00);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", InitPausePause00);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", InitPausePause01);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", InitPause);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", MainPause);

void EndPause(void) {
}
