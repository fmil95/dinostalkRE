#include "sound/g_cdv.h"

int gsCdvQue;

int gsCdvInit()
{
    cdvInit(256, &gsCdvQue, 2);
    cdvDiscReadySet();

    gsCdvFlushWait();

    return 0;
}

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
