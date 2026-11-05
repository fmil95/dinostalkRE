// STATUS: NOT STARTED

#ifndef G_TEST_H
#define G_TEST_H

#include "gunsuv_usa/libgf/gfpack.h"

extern GF_PACKET gsObjPack;

void G_TEST_Init();
G_TEST_Exec();
G_TEST_End();
void gsExtProg_INIT();
void gsExtProg_ENTRY_WORK(int a, int b, int c);
gsExtProg_RECOV_WORK();
gsExtProg_EXEC();
gsExtProg_TIME_OVER();
int gsStageExit_AfterMovie();
gsPC_Start();
gsPC_Disp();
gsPC_Stop();
gsLoading_Init();
gsLoading_Exec();
void gsClearHiddenFrame(int a);
void _dbgCS_OverWrite();
#endif // G_TEST_H
