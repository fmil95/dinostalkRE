#include "common.h"
#include "hoya/mem_card/memcsub2.h"
#include "hoya/g_string.h"
#include "hoya/mem_card/g_memc.h"
#include "hoya/hoya.h"
#include "hoya/mem_card/g_savlod.h"

extern int pmss_006745c4;
extern int hyCheckFadeFinishFlag();
extern int gsNextProg;
extern void hySwitchFadeTimer();
extern int GotoNextStage_memcsub2();

extern void GotoModeSelect();
extern int CheckMemcType();
extern char mcCheck_005ef430[];
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

int McConnectCheck_memcsub2(int a)
{
    int r = a;
    int* p;

    if (CheckMemcType(0, 0) == 2)
    {
        p = (int*)pmss_006745c4;
        r = 0xC8;
        p[1] = 0;
        p[0x81] &= ~0xFFE;
    }
    return r;
}

int McDisconnectCheck_memcsub2(int a)
{
    int r = a;
    int* p;

    if (CheckMemcType(0, 0) != 2)
    {
        p = (int*)pmss_006745c4;
        r = 0xC8;
        p[1] = 0;
        p[0x81] &= ~0xFFE;
    }
    return r;
}

void SetFadeParaPause_memcsub2(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pmss_006745c4 + 64));
}

void SwitchFadeTimerPause_memcsub2(int a)
{
    hySwitchFadeTimer(a, (pmss_006745c4 + 64));
}

int CheckFadeFinishFlagPause_memcsub2()
{
    return hyCheckFadeFinishFlag((pmss_006745c4 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", Draw2dObject_memcsub2);

void Calculation_memcsub2(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcFade_memcsub2);

void ProcMemcChecking_memcsub2()
{
    int* p = (int*)pmss_006745c4;

    p[0x204 / 4] = (p[0x204 / 4] & ~6) | 1;
    hyPutLumpsOfStr(mcCheck_005ef430);
    PermittoSendMcTex(0);
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcSlotCheck_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcFormatCheck_memcsub2);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub2", D_0066B470);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcSaveDataCheck_memcsub2);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub2", D_0066B4D8);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcSaveDataLoad_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcSaveDataChoice_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcMcBroakenFile_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcMcErrConnect_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcCancel_memcsub2);

int ProcEnd_memcsub2(int a)
{
    GotoNextStage_memcsub2(a);
    return a;
}

int ProcEnd2_memcsub2(int a)
{
    GotoModeSelect();

    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", InitMemcLoad);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", ProcDebug_memcsub2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub2", MainMemcLoad);

void EndMemcLoad()
{
    EndMemcManager();
}
INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub2", D_0066B660);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub2", D_0066B670);

