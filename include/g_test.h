// STATUS: NOT STARTED

#ifndef G_TEST_H
#define G_TEST_H

typedef struct { // 0x8
	/* 0x0 */ int unk0;
	/* 0x4 */ int unk4;
} GS_OBJ_PACK;

extern GS_OBJ_PACK gsObjPack;

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
