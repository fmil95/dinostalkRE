#include "common.h"

extern int gsExtProgWorkP;
extern int gsExtProgRpFile;
extern int gsExtProgRpFunc;

INCLUDE_ASM("asm/nonmatchings/g_test", G_TEST_Init);

INCLUDE_ASM("asm/nonmatchings/g_test", G_TEST_Exec);

INCLUDE_ASM("asm/nonmatchings/g_test", G_TEST_End);

INCLUDE_ASM("asm/nonmatchings/g_test", gsExtProg_INIT);

void gsExtProg_ENTRY_WORK(int a, int b, int c)
{
    gsExtProgWorkP = a;
    gsExtProgRpFile = b;
    gsExtProgRpFunc = c;
}

INCLUDE_ASM("asm/nonmatchings/g_test", gsExtProg_RECOV_WORK);

INCLUDE_ASM("asm/nonmatchings/g_test", gsExtProg_EXEC);

INCLUDE_ASM("asm/nonmatchings/g_test", gsExtProg_TIME_OVER);

INCLUDE_ASM("asm/nonmatchings/g_test", gsStageExit_AfterMovie);

void gsPC_Start(void) {
}

void gsPC_Disp(void) {
}

void gsPC_Stop(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_test", gsLoading_Init);

INCLUDE_ASM("asm/nonmatchings/g_test", gsLoading_Exec);

INCLUDE_ASM("asm/nonmatchings/g_test", gsClearHiddenFrame);

INCLUDE_ASM("asm/nonmatchings/g_test", _dbgCS_OverWrite);
