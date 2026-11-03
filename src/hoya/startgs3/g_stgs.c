#include "common.h"

extern int wait;
extern int stgsOldProcNo;
extern int gsNextProg;

void LetsGotoStartgs3(int a)
{
    stgsOldProcNo = a;
    gsNextProg = 0x12;
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", gsStageInit_STARTGS3);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", gsStageExec_STARTGS3);

void gsStageEnd_STARTGS3(void) {
}

void InitStgsWait()
{
    wait = 0x10;
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", MainStgsWait);

void EndStgsWait(void) {
}
