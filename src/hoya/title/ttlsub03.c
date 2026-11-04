#include "common.h"

extern int logo;
extern int hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();

void SetFadePara_ttlsub03(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (logo + 64));
}

void SwitchFadeTimer_ttlsub03(int a)
{
    hySwitchFadeTimer(a, (logo + 64));
}

int CheckFadeFinishFlag_ttlsub03()
{
    return hyCheckFadeFinishFlag((logo + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", Draw2dSprite_ttlsub03);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", InitLogo);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", ProcFadeIn_ttlsub03);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", ProcFadeOut_ttlsub03);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", MainLogo);

void EndLogo(void) {
}
