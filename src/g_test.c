#include "common.h"

extern int gsExtProgWorkP;
extern int gsExtProgRpFile;
extern int gsExtProgRpFunc;
extern int gsExtProgNo;
extern int gsExtProgNext;
extern int _time_over_cnt;
extern int _time_over_step;
#include <libgraph.h>
#include "g_effect.h"
extern int _dbgCS_p;
extern int _dbgCS_siz;
extern int _dbgCS_sum0;
extern int FIOCache_GetCheckSum();
extern void gsEffectSetFadeNowColor();

extern int gsNextProg;
extern int gsCurProg;
extern int _afterMovieExit;
INCLUDE_RODATA("asm/nonmatchings/g_test", D_00664870);

INCLUDE_ASM("asm/nonmatchings/g_test", G_TEST_Init);

INCLUDE_RODATA("asm/nonmatchings/g_test", D_006648A8);

INCLUDE_RODATA("asm/nonmatchings/g_test", D_006648B8);

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

int gsStageExit_AfterMovie()
{
    if (gsNextProg != gsCurProg)
    {
        sceGsSyncPath(0, 0);
        sceGsSyncV(0);
        _afterMovieExit = 1;
        return 1;
    }
    _afterMovieExit = 0;
    return 0;
}

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
INCLUDE_RODATA("asm/nonmatchings/g_test", D_00664900);

INCLUDE_RODATA("asm/nonmatchings/g_test", D_00664910);

INCLUDE_RODATA("asm/nonmatchings/g_test", D_00664920);

