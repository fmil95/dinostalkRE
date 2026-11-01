#include "common.h"

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_InitVitality);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_PutVitalityUnder);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_PutVitalityHead);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_PutVitalityLife);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", gsPAUSE_PutVitality);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", GetExplain);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", InitExplain);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", GetExpCur);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", SetFadeParaPause_pausesub);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", SwitchFadeTimerPause_pausesub);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/pausesub", CheckFadeFinishFlagPause_pausesub);

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
