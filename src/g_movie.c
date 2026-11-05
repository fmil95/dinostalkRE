#include "common.h"
#include <libgraph.h>
#include "g_movie.h"
#include "sound/CdvUse.h"
#include "g_pad.h"

extern int waitingQue;
extern int gsMovie_skipGunKey;
extern void cdvMpegSkipReset();
extern void cdvMpegSkipSet();

extern sceGsDBuff gsMovieClearDb;
extern int frame;
extern float startCol[];
extern float endCol[];
INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_Init);

void gsMovie_SetSkipKey(int a, int b)
{
    cdvMpegSkipReset(0, 0);
    cdvMpegSkipSet(0, 0, (a & 0xFFFF), 1);
    gsMovie_skipGunKey = b;
}

void gsMovie_Play(int a)
{
    waitingQue = cdvMpegPlaySet(a, 0, 0);
}

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_Exec);

int gsMovie_End()
{
    gsPad_Update();
    sceGsSyncV(0);
    sceGsSwapDBuff(&gsMovieClearDb, frame);
    sceGsSwapDBuff(&gsMovieClearDb, ++frame);
    frame++;
    gsPad_Update();
    return 0;
}

void gsMovie_SetStartCol(u_short r, u_short g, u_short b, u_short a)
{
    startCol[0] = r;
    startCol[1] = g;
    startCol[2] = b;
    startCol[3] = a;
}

void gsMovie_SetEndCol(u_short r, u_short g, u_short b, u_short a)
{
    endCol[0] = r;
    endCol[1] = g;
    endCol[2] = b;
    endCol[3] = a;
}

INCLUDE_ASM("asm/nonmatchings/g_movie", MpegFunc);

INCLUDE_ASM("asm/nonmatchings/g_movie", movieTest_init);

void movieTest_end()
{
    sceGsResetGraph(0, 1, 2, 1);
}

INCLUDE_ASM("asm/nonmatchings/g_movie", movieTest);
