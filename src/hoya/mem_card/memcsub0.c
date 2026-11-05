#include "common.h"
#include "hoya/mem_card/memcsub0.h"
#include "hoya/hoya.h"
#include "hoya/mem_card/g_savlod.h"

extern int prgMan[];
extern int pmss_00673c64;
extern int hyCheckFadeFinishFlag();
extern void hySwitchFadeTimer();
extern int gsNextProg;
extern void LetsGotoStartgs3();

extern int CheckMemcType();
int McConnectCheck_memcsub0(int a)
{
    int r = a;
    int* p;

    if (CheckMemcType(0, 0) == 2)
    {
        p = (int*)pmss_00673c64;
        r = 0xD2;
        p[1] = 0;
        p[0x81] &= ~6;
    }
    return r;
}

int McDisconnectCheck_memcsub0(int a)
{
    int r = a;
    int* p;

    if (CheckMemcType(0, 0) != 2)
    {
        p = (int*)pmss_00673c64;
        r = 0xD2;
        p[1] = 0;
        p[0x81] &= ~6;
    }
    return r;
}

void SetFadePara_memcsub0(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pmss_00673c64 + 64));
}

void SwitchFadeTimer_memcsub0(int a)
{
    hySwitchFadeTimer(a, (pmss_00673c64 + 64));
}

int CheckFadeFinishFlag_memcsub0()
{
    return hyCheckFadeFinishFlag((pmss_00673c64 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", Draw2dObject_memcsub0);

void Calculation_memcsub0(void) {
}

void GotoNextStage_memcsub0()
{
    LetsGotoStartgs3(gsNextProg);
    EndMemcManager();
}

int ProcFade_memcsub0(int step)
{
    int t = pmss_00673c64;

    switch (STRUCT_OFFSET(t, 4, int))
    {
    case 0:
        STRUCT_OFFSET(t, 0x40, int) = 0;
        SetFadePara_memcsub0(t + 0x10, t + 0x20, STRUCT_OFFSET(t, 0x30, int));
        SwitchFadeTimer_memcsub0(1);
        STRUCT_OFFSET(pmss_00673c64, 4, int)++;
        break;
    case 1:
        STRUCT_OFFSET(t, 4, int) = 2;
        break;
    case 2:
        if (!CheckFadeFinishFlag_memcsub0())
        {
            STRUCT_OFFSET(pmss_00673c64, 4, int)++;
        }
        break;
    case 3:
        STRUCT_OFFSET(t, 4, int) = 0;
        step++;
        break;
    }

    return step;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", ProcMemcConnectCheck);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", ProcMemcFsizeCheck);

int ProcEnd_memcsub0(int a)
{
    prgMan[0] = 5;
    return a;
}

int ProcEnd2_memcsub0(int a)
{
    GotoNextStage_memcsub0();

    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", InitMemcFsize);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", MainMemcFsize);

void EndMemcFsize()
{
    EndMemcManager();
}
