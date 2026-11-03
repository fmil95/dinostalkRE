#include "common.h"

void LetsGotoContinueScene(void) {
}

int gsCONTINUE_Draw1(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/continue/g_cnt", gsCONTINUE_Draw2);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/g_cnt", gsStageInit_CONTINUE);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/g_cnt", gsStageExec_CONTINUE);
