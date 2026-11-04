#include "common.h"

extern void EndMemcManager();
extern int pmss_006746a4;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();
extern int gsNextProg;
extern void LetsGotoStartgs3();

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", McConnectCheck_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", McDisconnectCheck_memcsub4);

void SetFadePara_memcsub4(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pmss_006746a4 + 64));
}

void SwitchFadeTimer_memcsub4(int a)
{
    hySwitchFadeTimer(a, (pmss_006746a4 + 64));
}

void CheckFadeFinishFlag_memcsub4()
{
    hyCheckFadeFinishFlag((pmss_006746a4 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", Draw2dObject_memcsub4);

void Calculation_memcsub4(void) {
}

void GotoNextStage_memcsub4()
{
    LetsGotoStartgs3(gsNextProg);
    EndMemcManager();
}

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

int ProcEnd_memcsub4(int a)
{
    GotoNextStage_memcsub4();

    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcDebug_memcsub4);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcDebug2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", InitMemcSysLoad);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", MainMemcSysLoad);

void EndMemcSysLoad()
{
    EndMemcManager();
}
