#include "common.h"

extern void EndMemcManager();
extern int pmss_006745c4;
extern void hyCheckFadeFinishFlag();
extern int gsNextProg;
extern void hySetFadePara2();

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", LoadInitSprFileNum);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", LoadDrawSprOther);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", LoadCalcSprOther);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", GotoNextStage_memcsub2);

void GotoModeSelect()
{
    gsNextProg = 0xf;
    EndMemcManager();
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", makeAllFileListTex_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", McConnectCheck_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", McDisconnectCheck_memcsub2);

void SetFadeParaPause_memcsub2(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pmss_006745c4 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", SwitchFadeTimerPause_memcsub2);

void CheckFadeFinishFlagPause_memcsub2()
{
    hyCheckFadeFinishFlag((pmss_006745c4 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", Draw2dObject_memcsub2);

void Calculation_memcsub2(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcFade_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcMemcChecking_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcSlotCheck_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcFormatCheck_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcSaveDataCheck_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcSaveDataLoad_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcSaveDataChoice_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcMcBroakenFile_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcMcErrConnect_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcCancel_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcEnd_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcEnd2_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", InitMemcLoad);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcDebug_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", MainMemcLoad);

void EndMemcLoad()
{
    EndMemcManager();
}
