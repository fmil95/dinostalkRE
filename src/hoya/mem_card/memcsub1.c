#include "common.h"

extern void EndMemcManager();
extern int pmss_00674568;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", McConnectCheck_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", McDisconnectCheck_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", SaveInitSprFileNum);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", SaveDrawSprOther);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", SaveCalcSprOther);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", GotoNextStage_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", makeAllFileListTex_memcsub1);

void SetFadeParaPause_memcsub1(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pmss_00674568 + 64));
}

void SwitchFadeTimerPause_memcsub1(int a)
{
    hySwitchFadeTimer(a, (pmss_00674568 + 64));
}

void CheckFadeFinishFlagPause_memcsub1()
{
    hyCheckFadeFinishFlag((pmss_00674568 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", Draw2dObject_memcsub1);

void Calculation_memcsub1(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcFade_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcMemcChecking_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcSlotCheck_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcFormatCheck_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcSaveDataCheck_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcSaveDataLoad_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcSaveDataChoice_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcSaveDataNowSaving);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcMcBroakenFile_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcMcErrConnect_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcCancel_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcEnd_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", InitMemcSave);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcDebug_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", MainMemcSave);

void EndMemcSave()
{
    EndMemcManager();
}
