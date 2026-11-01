#include "common.h"

void LetsGotoContinueScene(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/continue/g_cnt", gsCONTINUE_Draw1);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/g_cnt", gsCONTINUE_Draw2);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/g_cnt", gsStageInit_CONTINUE);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/g_cnt", gsStageExec_CONTINUE);
