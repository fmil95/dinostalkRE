#include "common.h"

extern void EndLetterAll();

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", SetFadePara_cntsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", SwitchFadeTimer_cntsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", CheckFadeFinishFlag_cntsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", continueGameOver);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", continueContinue);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", InitRipple);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", setRipple);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", calcRippleMovement);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", DecideRippleSpace);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", calcLightMovement);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", calcNumber);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", calcGameOver);

void calcContinue(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", InitContinueContinue00);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", InitContinue);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", Draw2dObject2Cnt);

void Draw2dObjectCnt(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", continueTest);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", ProcFadeIn_cntsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", ProcFadeOut_cntsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", ProcContinue);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", ProcContinueCount);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", ProcContinueContinue);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", ProcContinueGameOver);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", ProcContinueGameOverWait);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/cntsub1", MainContinue);

void EndContinue()
{
    EndLetterAll();
}
