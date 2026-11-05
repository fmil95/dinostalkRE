#include "common.h"
#include "hoya/option/g_option.h"

extern int optManager[];
extern char optManagerD[];
extern int gsExtProgNext;
extern int gsNextProg;
void LetsGotoOptionScene(int n)
{
    int* om = optManager;

    om[2] = (int)optManagerD;

    if (n != -1)
    {
        *om = n;
    }

    if ((u_int)n < 8)
    {
        gsExtProgNext = 1;
    }
    else
    {
        gsNextProg = 10;
    }
}

void ReleaseOptionScene(void) {
}

int gsOPTION_Draw1(int a)
{
    return a;
}

int gsOPTION_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageInit_OPTION);

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageExec_OPTION);

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageInit_OPTION_STAGE);

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageExec_OPTION_STAGE);
