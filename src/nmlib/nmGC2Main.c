#include "common.h"
#include "sifrpc.h"

typedef struct {
    /* 0x00 */ int pad[9];
    /* 0x24 */ void* serve;
} sceSifClientData;

extern sceSifClientData cdUsbGun;
extern char sdata_00873980[];
extern char D_0066F5C8[];
extern char D_0066F5D8[];
extern char D_0066F5F8[];
extern char D_0066F618[];

extern int printf();

INCLUDE_ASM("asm/nonmatchings/nmlib/nmGC2Main", nmUsbGunInit);

INCLUDE_ASM("asm/nonmatchings/nmlib/nmGC2Main", nmUsbGunGetInfo);

INCLUDE_ASM("asm/nonmatchings/nmlib/nmGC2Main", nmUsbGunRead);

INCLUDE_ASM("asm/nonmatchings/nmlib/nmGC2Main", nmUsbGunGetLocation);

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
        while (sceSifCheckStatRpc(&cdUsbGun) != 0)
        {
        }

        return 0;
    case 1:
        return sceSifCheckStatRpc(&cdUsbGun);
    default:
        return 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/nmlib/nmGC2Main", nmPadTimerReset);

INCLUDE_ASM("asm/nonmatchings/nmlib/nmGC2Main", nmPadWaitTimer);
