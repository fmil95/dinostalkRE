#include "g_shocktest.h"
#include <libgraph.h>
#include <eekernel.h>

extern int gsShockSetSeqNo(int, int);
extern int gsPad_GetTrg(int);

extern int gConsole;
extern sceGsDBuff gDb;
extern int shockNo_0;
extern char D_00665600[];

void G_SHOCKTEST_Init() 
{
    gsFrame = frame;
    
    GF_InitGraphicsFramework();
    
    gsShockInit();
    
    gsPause = 0;
    
    MEM_CheckViolation();
}

void G_SHOCKTEST_Exec()
{
    int trg;

    trg = gsPad_GetTrg(0);

    sceDevConsPrintf(gConsole, D_00665600, shockNo_0);

    if (trg & 0x28)
    {
        gsShockSetSeqNo(0, shockNo_0);
    }

    if (trg & 0x3000)
    {
        if (shockNo_0 + 1 < 0x6B)
        {
            shockNo_0 = shockNo_0 + 1;
        }
        else
        {
            shockNo_0 = 0;
        }
    }

    if (trg & 0xC000)
    {
        if (shockNo_0 - 1 < 0)
        {
            shockNo_0 = 0x6A;
        }
        else
        {
            shockNo_0 = shockNo_0 - 1;
        }
    }

    gsShockManagement();
    sceGsSyncPath(0, 0);
    sceDevConsDraw(gConsole);

    sceGsSetHalfOffset((frame % 2) ? &gDb.draw1 : &gDb.draw0, 0x800, 0x800, !sceGsSyncV(0));

    FlushCache(0);
    sceGsSwapDBuff(&gDb, frame);
    FlushCache(0);
    gsSoundSeMain();

    gsFrame = ++frame;

    MEM_CheckViolation();
}

void G_SHOCKTEST_End() 
{
    sceGsSyncPath(0, 0);
    
    gsSoundClose();
    gsSoundSeMain();
    
    GF_EndGraphicsFramework();
    
    MEM_FreeAll();
}
