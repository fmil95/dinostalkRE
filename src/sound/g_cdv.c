#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sound/g_cdv", gsCdvInit);

void gsCdvMain() 
{
    cdvMain();
}

int gsCdvSync() 
{
    cdvSyncSet();
    
    return 0;
}

int gsCdvFlushWait() 
{
    cdvSyncSet();

    while (cdvGetWorkingQue() != -1) 
    {
        sceGsSyncV(0);

        cdvMain();
    }

    sceGsSyncV(0);

    return 0;
}

int gsCdvDiscReady() 
{
    cdvDiscReadySet();
    
    gsCdvFlushWait();
    
    return 0;
}
