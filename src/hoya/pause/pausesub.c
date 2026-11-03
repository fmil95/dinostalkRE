#include "common.h"

extern int pPpp;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();
extern void gsPAUSE_PutVitalityLife();
extern void gsPAUSE_PutVitalityHead();
extern void gsPAUSE_PutVitalityUnder();

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

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", GetExplain);

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

void CheckFadeFinishFlagPause_pausesub()
{
    hyCheckFadeFinishFlag((pPpp + 144));
}

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_PutLife);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", Draw2dObjectPause);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", Calculation_pausesub);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", ProcFadeIn_pausesub);

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
