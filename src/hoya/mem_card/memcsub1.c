#include "common.h"
#include "hoya/mem_card/memcsub1.h"
#include "hoya/g_string.h"
#include "hoya/mem_card/g_memc.h"
#include "hoya/hoya.h"
#include "hoya/mem_card/g_savlod.h"
#include "hoya/hyopen.h"

extern int pmss_00674568;
extern int hyCheckFadeFinishFlag();
extern void hySwitchFadeTimer();
extern void GotoNextStage_memcsub1();

extern int CheckMemcType();
extern char mcCheck_005eec38[];
extern int gsResult[];
extern int gsNextProg;
extern int prgMan[];
extern int plGameData[];
int McConnectCheck_memcsub1(int a)
{
    int r = a;
    int* p;

    if (CheckMemcType(0, 0) == 2)
    {
        p = (int*)pmss_00674568;
        r = 0xC8;
        p[1] = 0;
        p[0x81] &= ~0xFFE;
    }
    return r;
}

int McDisconnectCheck_memcsub1(int a)
{
    int r = a;
    int* p;

    if (CheckMemcType(0, 0) != 2)
    {
        p = (int*)pmss_00674568;
        r = 0xC8;
        p[1] = 0;
        p[0x81] &= ~0xFFE;
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", SaveInitSprFileNum);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", SaveDrawSprOther);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", SaveCalcSprOther);

void GotoNextStage_memcsub1()
{
    if (gsResult[0] < 8)
    {
        gsNextProg = hyGetStageNumber(gsResult[0]) + 1;
        EndMemcManager();
    }
    else
    {
        prgMan[0] = 4;
    }

    plGameData[0x1D8 / 4]++;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", makeAllFileListTex_memcsub1);

void SetFadeParaPause_memcsub1(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pmss_00674568 + 64));
}

void SwitchFadeTimerPause_memcsub1(int a)
{
    hySwitchFadeTimer(a, (pmss_00674568 + 64));
}

int CheckFadeFinishFlagPause_memcsub1()
{
    return hyCheckFadeFinishFlag((pmss_00674568 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", Draw2dObject_memcsub1);

void Calculation_memcsub1(void) {
}

int ProcFade_memcsub1(int step)
{
    int t = pmss_00674568;

    switch (STRUCT_OFFSET(t, 4, int))
    {
    case 0:
        STRUCT_OFFSET(t, 0x40, int) = 0;
        SetFadeParaPause_memcsub1(t + 0x10, t + 0x20, STRUCT_OFFSET(t, 0x30, int));
        SwitchFadeTimerPause_memcsub1(1);
        STRUCT_OFFSET(pmss_00674568, 4, int)++;
        break;
    case 1:
        STRUCT_OFFSET(t, 4, int) = 2;
        break;
    case 2:
        if (!CheckFadeFinishFlagPause_memcsub1())
        {
            STRUCT_OFFSET(pmss_00674568, 4, int)++;
        }
        break;
    case 3:
        STRUCT_OFFSET(t, 4, int) = 0;
        step++;
        break;
    }

    return step;
}

void ProcMemcChecking_memcsub1()
{
    int* p = (int*)pmss_00674568;

    p[0x204 / 4] = (p[0x204 / 4] & ~6) | 1;
    hyPutLumpsOfStr(mcCheck_005eec38);
    PermittoSendMcTex(0);
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcSlotCheck_memcsub1);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub1", D_0066AF10);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub1", D_0066AF20);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcFormatCheck_memcsub1);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub1", D_0066AF88);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcSaveDataCheck_memcsub1);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub1", D_0066B250);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcSaveDataLoad_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcSaveDataChoice_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcSaveDataNowSaving);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcMcBroakenFile_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcMcErrConnect_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcCancel_memcsub1);

int ProcEnd_memcsub1(int a)
{
    GotoNextStage_memcsub1(a);
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", InitMemcSave);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", ProcDebug_memcsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub1", MainMemcSave);

void EndMemcSave()
{
    EndMemcManager();
}
INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub1", D_0066B450);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub1", D_0066B460);

