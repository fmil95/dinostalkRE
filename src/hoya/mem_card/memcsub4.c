#include "common.h"
#include "hoya/mem_card/memcsub4.h"

extern void EndMemcManager();
extern int pmss_006746a4;
extern int hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();
extern int gsNextProg;
extern void LetsGotoStartgs3();

extern int CheckMemcType();
int McConnectCheck_memcsub4(int a)
{
    int r = a;
    int* p;

    if (CheckMemcType(0, 0) == 2)
    {
        p = (int*)pmss_006746a4;
        r = 0xC8;
        p[1] = 0;
        p[0x81] &= ~6;
    }
    return r;
}

int McDisconnectCheck_memcsub4(int a)
{
    int r = a;
    int* p;

    if (CheckMemcType(0, 0) != 2)
    {
        p = (int*)pmss_006746a4;
        r = 0xD2;
        p[1] = 0;
        p[0x81] &= ~6;
    }
    return r;
}

void SetFadePara_memcsub4(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pmss_006746a4 + 64));
}

void SwitchFadeTimer_memcsub4(int a)
{
    hySwitchFadeTimer(a, (pmss_006746a4 + 64));
}

int CheckFadeFinishFlag_memcsub4()
{
    return hyCheckFadeFinishFlag((pmss_006746a4 + 64));
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

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub4", D_0066BB60);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub4", D_0066BB70);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub4", ProcSaveDataCheck_memcsub4);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub4", D_0066BD18);

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
INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub4", D_0066BE50);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub4", D_0066BE60);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub4", D_0066BE70);

