#include "common.h"

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", LetsGotoStartgs3);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", gsStageInit_STARTGS3);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", gsStageExec_STARTGS3);

void gsStageEnd_STARTGS3(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", InitStgsWait);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", MainStgsWait);

void EndStgsWait(void) {
}
