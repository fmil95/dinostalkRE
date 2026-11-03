#include "common.h"

extern int ttl;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();

void SetFadePara_ttlsub01(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (ttl + 2304));
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", SwitchFadeTimer_ttlsub01);

void CheckFadeFinishFlag_ttlsub01()
{
    hyCheckFadeFinishFlag((ttl + 2304));
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", Calculation_ttlsub01);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", Draw2dObjectTitle);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", InitTitle);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", InitTtlTtl00);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", ProcFade_ttlsub01);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", ProcFade2);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", MainTitle);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", Draw2dObject2);

void EndTitle(void) {
}
