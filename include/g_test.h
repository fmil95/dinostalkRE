// STATUS: NOT STARTED

#ifndef G_TEST_H
#define G_TEST_H

G_TEST_Init();
G_TEST_Exec();
G_TEST_End();
gsExtProg_INIT();
gsExtProg_ENTRY_WORK();
gsExtProg_RECOV_WORK();
gsExtProg_EXEC();
gsExtProg_TIME_OVER();
gsStageExit_AfterMovie();
gsPC_Start();
gsPC_Disp();
gsPC_Stop();
gsLoading_Init();
gsLoading_Exec();
gsClearHiddenFrame();
_dbgCS_OverWrite();

#endif // G_TEST_H
