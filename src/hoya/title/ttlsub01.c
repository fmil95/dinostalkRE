#include "common.h"

extern int ttl;
extern int hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();

extern void hyDrawSMSprite();
void SetFadePara_ttlsub01(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (ttl + 2304));
}

void SwitchFadeTimer_ttlsub01(int a)
{
    hySwitchFadeTimer(a, (ttl + 2304));
}

int CheckFadeFinishFlag_ttlsub01()
{
    return hyCheckFadeFinishFlag((ttl + 2304));
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", Calculation_ttlsub01);

void Draw2dObjectTitle(int a)
{
    int t = ttl;

    STRUCT_OFFSET(t, 0x30, int) = 0;
    STRUCT_OFFSET(t, 0x34, int) = 0;
    hyDrawSMSprite(t + 0x2C, a);
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", InitTitle);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", InitTtlTtl00);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", ProcFade_ttlsub01);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", ProcFade2);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", MainTitle);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", Draw2dObject2);

void EndTitle(void) {
}
