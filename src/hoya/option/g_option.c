#include "common.h"

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", LetsGotoOptionScene);

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
