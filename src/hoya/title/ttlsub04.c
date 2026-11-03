#include "common.h"

extern char D_005F28F0[];
extern void hyCheckFadeFinishFlag();

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", SetFadePara_ttlsub04);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", SwitchFadeTimer_ttlsub04);

void CheckFadeFinishFlag_ttlsub04()
{
    hyCheckFadeFinishFlag(D_005F28F0);
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", Draw2dSprite_ttlsub04);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", InitDaisakusen);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", ProcFadeIn_ttlsub04);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", ProcFadeOut_ttlsub04);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub04", MainDaisakusen);

void EndDaisakusen(void) {
}
