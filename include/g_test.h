// STATUS: NOT STARTED

#ifndef G_TEST_H
#define G_TEST_H

#include "gunsuv_usa/libgf/gfpack.h"

typedef struct { // 0x14
	/* 0x00 */ int unk0;
	/* 0x04 */ int unk4;
	/* 0x08 */ int unk8;
	/* 0x0c */ int unkC;
	/* 0x10 */ int unk10;
} STAGE_PACK;

extern GF_PACKET gsObjPack;
extern STAGE_PACK _stage_pack_list[];

void G_TEST_Init();
G_TEST_Exec();
G_TEST_End();
void gsExtProg_INIT();
void gsExtProg_ENTRY_WORK(int a, int b, int c);
void gsExtProg_RECOV_WORK();
gsExtProg_EXEC();
gsExtProg_TIME_OVER();
int gsStageExit_AfterMovie();
void gsPC_Start(void);
void gsPC_Disp(void);
void gsPC_Stop(void);
void gsLoading_Init();
void gsLoading_Exec();
void gsClearHiddenFrame(int a);
void _dbgCS_OverWrite();
#endif // G_TEST_H
