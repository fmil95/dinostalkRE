#include "common.h"

extern void EndMemcManager();
extern int prgMan[];
extern int pmss_00673c64;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();
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

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", McDisconnectCheck_memcsub0);

void SetFadePara_memcsub0(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pmss_00673c64 + 64));
}

void SwitchFadeTimer_memcsub0(int a)
{
    hySwitchFadeTimer(a, (pmss_00673c64 + 64));
}

void CheckFadeFinishFlag_memcsub0()
{
    hyCheckFadeFinishFlag((pmss_00673c64 + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", Draw2dObject_memcsub0);

void Calculation_memcsub0(void) {
}

void GotoNextStage_memcsub0()
{
    LetsGotoStartgs3(gsNextProg);
    EndMemcManager();
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", ProcFade_memcsub0);

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
