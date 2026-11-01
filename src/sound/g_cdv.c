#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sound/g_cdv", gsCdvInit);

INCLUDE_ASM("asm/nonmatchings/sound/g_cdv", gsCdvMain);

INCLUDE_ASM("asm/nonmatchings/sound/g_cdv", gsCdvSync);

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

INCLUDE_ASM("asm/nonmatchings/sound/g_cdv", gsCdvDiscReady);
