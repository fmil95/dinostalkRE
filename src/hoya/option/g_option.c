#include "common.h"

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", LetsGotoOptionScene);

void ReleaseOptionScene(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsOPTION_Draw1);

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsOPTION_Draw2);

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageInit_OPTION);

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageExec_OPTION);

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageInit_OPTION_STAGE);

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageExec_OPTION_STAGE);
