#include "common.h"

extern void EndMemcManager();
extern int pmss_006746a4;
extern void hyCheckFadeFinishFlag();

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", McConnectCheck_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", McDisconnectCheck_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", SetFadePara_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", SwitchFadeTimer_memcsub4);

void CheckFadeFinishFlag_memcsub4()
{
    hyCheckFadeFinishFlag((pmss_006746a4 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", Draw2dObject_memcsub4);

void Calculation_memcsub4(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", GotoNextStage_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcFadeIn_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcMemcChecking_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcSlotCheck_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcFormatCheck_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcSaveDataCheck_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcLoad);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcMcBroakenFile_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcCancel_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcCancel2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcSystemLoadKeikoku);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcEnd_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcDebug_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcDebug2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", InitMemcSysLoad);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", MainMemcSysLoad);

void EndMemcSysLoad()
{
    EndMemcManager();
}
