#include "common.h"

extern char D_005F28F0[];
extern int hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();

void SetFadePara_ttlsub04(int a, int b, int c)
{
    hySetFadePara2(a, b, c, D_005F28F0);
}

void SwitchFadeTimer_ttlsub04(int a)
{
    hySwitchFadeTimer(a, D_005F28F0);
}

int CheckFadeFinishFlag_ttlsub04()
{
    return hyCheckFadeFinishFlag(D_005F28F0);
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", Draw2dSprite_ttlsub04);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", InitDaisakusen);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", ProcFadeIn_ttlsub04);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", ProcFadeOut_ttlsub04);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", MainDaisakusen);

void EndDaisakusen(void) {
}
