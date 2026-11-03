#include "common.h"

extern int logo;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();

void SetFadePara_ttlsub03(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (logo + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", SwitchFadeTimer_ttlsub03);

void CheckFadeFinishFlag_ttlsub03()
{
    hyCheckFadeFinishFlag((logo + 64));
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", Draw2dSprite_ttlsub03);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", InitLogo);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", ProcFadeIn_ttlsub03);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", ProcFadeOut_ttlsub03);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", MainLogo);

void EndLogo(void) {
}
