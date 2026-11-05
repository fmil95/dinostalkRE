#include "common.h"
#include "hoya/title/ttlsub01.h"
#include "hoya/hoya.h"

extern int ttl;
extern int hyCheckFadeFinishFlag();
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

int ProcFade_ttlsub01(int step)
{
    int t = ttl;

    switch (STRUCT_OFFSET(t, 4, int))
    {
    case 0:
        STRUCT_OFFSET(t, 0x900, int) = 0;
        SetFadePara_ttlsub01(t + 0x8D0, t + 0x8E0, STRUCT_OFFSET(t, 0x8F0, int));
        SwitchFadeTimer_ttlsub01(1);
        STRUCT_OFFSET(ttl, 4, int)++;
        break;
    case 1:
        STRUCT_OFFSET(t, 4, int) = 2;
        break;
    case 2:
        if (!CheckFadeFinishFlag_ttlsub01())
        {
            STRUCT_OFFSET(ttl, 4, int)++;
        }
        break;
    case 3:
        STRUCT_OFFSET(t, 4, int) = 0;
        step++;
        break;
    }

    return step;
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", ProcFade2);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", MainTitle);

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub01", Draw2dObject2);

void EndTitle(void) {
}
