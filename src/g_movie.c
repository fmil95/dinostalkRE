#include "common.h"

#include <libgraph.h>
#include "g_movie.h"
#include "sound/CdvUse.h"
extern int waitingQue;
extern int gsMovie_skipGunKey;
extern void cdvMpegSkipReset();
extern void cdvMpegSkipSet();

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

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_End);

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_SetStartCol);

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_SetEndCol);

INCLUDE_ASM("asm/nonmatchings/g_movie", MpegFunc);

INCLUDE_ASM("asm/nonmatchings/g_movie", movieTest_init);

void movieTest_end()
{
    sceGsResetGraph(0, 1, 2, 1);
}

INCLUDE_ASM("asm/nonmatchings/g_movie", movieTest);
