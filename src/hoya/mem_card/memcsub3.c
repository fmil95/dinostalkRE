#include "common.h"
#include "hoya/mem_card/memcsub3.h"

extern void EndMemcManager();
extern int pmss_0067463c;
extern int hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();

extern int CheckMemcType();
extern int memcManager;
extern int gsNextProg;
extern void LetsGotoTitle();
int McConnectCheck_memcsub3(int a)
{
    int r = a;
    int* p;

    if (CheckMemcType(0, 0) == 2)
    {
        p = (int*)pmss_0067463c;
        r = 0xC8;
        p[1] = 0;
        p[0x81] &= ~6;
    }
    return r;
}

int McDisconnectCheck_memcsub3(int a)
{
    int r = a;
    int* p;

    if (CheckMemcType(0, 0) != 2)
    {
        p = (int*)pmss_0067463c;
        r = 0xC8;
        p[1] = 0;
        p[0x81] &= ~6;
    }
    return r;
}

void SetFadePara_memcsub3(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pmss_0067463c + 64));
}

void SwitchFadeTimer_memcsub3(int a)
{
    hySwitchFadeTimer(a, (pmss_0067463c + 64));
}

int CheckFadeFinishFlag_memcsub3()
{
    return hyCheckFadeFinishFlag((pmss_0067463c + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", Draw2dObject_memcsub3);

void Calculation_memcsub3(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", ProcFadeIn_memcsub3);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", ProcMemcChecking_memcsub3);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", ProcSlotCheck_memcsub3);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub3", D_0066B680);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", ProcFormatCheck_memcsub3);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub3", D_0066B6E8);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", ProcSaveDataCheck_memcsub3);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub3", D_0066B9B0);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", ProcSaveDataLoad_memcsub3);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub3", D_0066BAE0);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", ProcSave);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", ProcMcBroakenFile_memcsub3);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", ProcCancel_memcsub3);

int ProcEnd_memcsub3(int a)
{
    if (memcManager == 0x63)
    {
        LetsGotoTitle(gsNextProg);
    }
    else
    {
        LetsGotoTitle(gsNextProg);
    }
    EndMemcManager();
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", InitMemcSysSave);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", ProcDebug_memcsub3);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub3", MainMemcSysSave);

void EndMemcSysSave()
{
    EndMemcManager();
}
INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub3", D_0066BB40);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/memcsub3", D_0066BB50);

