#include <stdio.h>
#include "common.h"
#include <sifrpc.h>

typedef struct nm_TimerRegAdr_tag
{
    /* 0x0 */ u_int* count;
    /* 0x4 */ u_int* mode;
    /* 0x8 */ u_int* comp;
    /* 0xc */ u_int* hold;
} nm_TimerRegAdr_t;

extern sceSifClientData cdUsbGun;
extern int nm_MeterTimerNo;
extern nm_TimerRegAdr_t nm_TimerRegAdr[];
extern int time0;
extern char sdata_00873980[];
extern char D_0066F5C8[];
INCLUDE_ASM("asm/nonmatchings/nmlib/nmGC2Main", nmUsbGunInit);

int nmUsbGunGetInfo(u_char* info)
{
    if (sceSifCheckStatRpc((sceSifRpcData*)&cdUsbGun) != 0)
    {
        printf("not complete get info!!\n");
    }

    return sceSifCallRpc(&cdUsbGun, 1, 1, sdata_00873980, 0x20, info, 0x20, NULL, NULL);
}

int nmUsbGunRead(u_int no, char* data)
{
    sdata_00873980[0] = no;

    if (sceSifCheckStatRpc((sceSifRpcData*)&cdUsbGun) != 0)
    {
        printf("not complete read data!!\n");
    }

    return sceSifCallRpc(&cdUsbGun, 2, 1, sdata_00873980, 0x20, data, 0x20, NULL, NULL);
}

int nmUsbGunGetLocation(int no, u_char* location)
{
    sdata_00873980[0] = no;

    if (sceSifCheckStatRpc((sceSifRpcData*)&cdUsbGun) != 0)
    {
        printf("not complete get location!!\n");
    }

    return sceSifCallRpc(&cdUsbGun, 3, 1, sdata_00873980, 0x20, location, 0x20, NULL, NULL);
}

int nmUsbGunGetConfig(u_char* config)
{
    return sceSifCallRpc(&cdUsbGun, 4, 1, sdata_00873980, 0x20, config, 0x20, NULL, NULL);
}

INCLUDE_ASM("asm/nonmatchings/nmlib/nmGC2Main", nmUsbTransCtrl);

int nmUsbGunSync(int mode)
{
    switch (mode)
    {
    case 0:
        while (sceSifCheckStatRpc((sceSifRpcData*)&cdUsbGun) != 0)
        {
        }

        return 0;
    case 1:
        return sceSifCheckStatRpc((sceSifRpcData*)&cdUsbGun);
    default:
        return 0;
    }
}

void nmPadTimerReset()
{
    int no;

    no = *nm_TimerRegAdr[nm_MeterTimerNo].count;

    time0 = no;
}

INCLUDE_ASM("asm/nonmatchings/nmlib/nmGC2Main", nmPadWaitTimer);
