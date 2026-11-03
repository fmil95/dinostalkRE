#include "common.h"

extern void EndMemcManager();
extern int prgMan[];
extern int pmss_00673c64;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", McConnectCheck_memcsub0);

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

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", GotoNextStage_memcsub0);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", ProcFade_memcsub0);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", ProcMemcConnectCheck);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", ProcMemcFsizeCheck);

int ProcEnd_memcsub0(int a)
{
    prgMan[0] = 5;
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", ProcEnd2_memcsub0);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", InitMemcFsize);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/memcsub0", MainMemcFsize);

void EndMemcFsize()
{
    EndMemcManager();
}
