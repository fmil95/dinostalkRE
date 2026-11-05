#include "common.h"
#include "hoya/title/ttlsub03.h"
#include "hoya/hoya.h"

extern int logo;
extern int hyCheckFadeFinishFlag();
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

int ProcFadeIn_ttlsub03(int step)
{
    int t = logo;

    switch (STRUCT_OFFSET(t, 4, int))
    {
    case 0:
        STRUCT_OFFSET(t, 0x40, int) = 0;
        SetFadePara_ttlsub03(t + 0x10, t + 0x20, STRUCT_OFFSET(t, 0x30, int));
        SwitchFadeTimer_ttlsub03(1);
        STRUCT_OFFSET(logo, 4, int)++;
        break;
    case 1:
        STRUCT_OFFSET(t, 4, int) = 2;
        break;
    case 2:
        if (!CheckFadeFinishFlag_ttlsub03())
        {
            STRUCT_OFFSET(logo, 4, int)++;
        }
        break;
    case 3:
        STRUCT_OFFSET(t, 4, int) = 0;
        step++;
        break;
    }

    return step;
}

int ProcFadeOut_ttlsub03(int step)
{
    int t = logo;

    switch (STRUCT_OFFSET(t, 0x4, int))
    {
    case 0:
        STRUCT_OFFSET(t, 0x40, int) = 0;
        SetFadePara_ttlsub03(t + 0x10, t + 0x20, STRUCT_OFFSET(t, 0x30, int));
        SwitchFadeTimer_ttlsub03(1);
        STRUCT_OFFSET(logo, 0x4, int)++;
        break;
    case 1:
        SwitchFadeTimer_ttlsub03(1);
        STRUCT_OFFSET(logo, 0x4, int)++;
        break;
    case 2:
        if (!CheckFadeFinishFlag_ttlsub03())
        {
            STRUCT_OFFSET(logo, 0x4, int)++;
        }
        break;
    case 3:
        STRUCT_OFFSET(t, 0x4, int) = 0;
        step++;
        break;
    }

    return step;
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub03", MainLogo);

void EndLogo(void) {
}
