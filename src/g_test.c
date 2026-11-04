#include "common.h"

extern int gsExtProgWorkP;
extern int gsExtProgRpFile;
extern int gsExtProgRpFunc;
extern int gsExtProgNo;
extern int gsExtProgNext;
extern int _time_over_cnt;
extern int _time_over_step;
#include <libgraph.h>
extern int _dbgCS_p;
extern int _dbgCS_siz;
extern int _dbgCS_sum0;
extern int FIOCache_GetCheckSum();
extern void gsEffectSetFadeNowColor();
extern void gsEffectSetFade();

INCLUDE_ASM("asm/nonmatchings/g_test", G_TEST_Init);

INCLUDE_ASM("asm/nonmatchings/g_test", G_TEST_Exec);

INCLUDE_ASM("asm/nonmatchings/g_test", G_TEST_End);

void gsExtProg_INIT()
{
    gsExtProgNo = 0;
    gsExtProgNext = 0;
    gsExtProgWorkP = 0;
    gsExtProgRpFile = 0;
    gsExtProgRpFunc = 0;
    _time_over_cnt = 0;
    _time_over_step = 0;
}

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

void gsClearHiddenFrame(int a)
{
    sceGsSyncPath(0, 0);
    sceGsSyncV(0);
    gsEffectSetFadeNowColor(a);
    gsEffectSetFade(a, 1);
}

void _dbgCS_OverWrite()
{
    _dbgCS_sum0 = FIOCache_GetCheckSum(_dbgCS_p, _dbgCS_siz);
}
