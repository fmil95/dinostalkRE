#include "common.h"
#include "g_guncon1/g_guncon1.h"
extern int gsGuncon1Manager[];

extern int D_00653B08[];
extern int D_00653B10[];
extern int D_00653B0C[];

extern int _gc1_key_tbl[];
void gsGuncon1_InitAll()
{
    gsGuncon1_Init();
    gsGuncon1Manager[8] = 4;
    gsGuncon1Manager[11] = 0x80;
    gsGuncon1Manager[9] = 0;
    gsGuncon1Manager[10] = 0;
    gsGuncon1Manager[12] = 0x3D;
}

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_Init);

void gsGuncon1_ClearFlag(int a)
{
    gsGuncon1Manager[0] &= ~a;
}

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_LoadPad);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_Exec);

int gsGuncon1_CheckPort()
{
    int f = gsGuncon1Manager[0];

    if (f & 1)
    {
        return 0;
    }
    return (f & 2) ? 1 : -1;
}

int gsGuncon1_GetDelay()
{
    return D_00653B10[0];
}

int gsGuncon1_Get()
{
    return D_00653B08[0];
}

int gsGuncon1_GetTrg()
{
    return D_00653B0C[0];
}

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_FlashTrigger);

int gsGuncon1_CheckOut()
{
    return (gsGuncon1Manager[0] & 0x8) > 0;
}

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_CheckOutTrg);

void gsGuncon1_GetCamSight(char* a)
{
    int* m = gsGuncon1Manager;
    int f = m[0];

    if (!(f & 4))
    {
        return;
    }
    if (f & 8)
    {
        return;
    }
    if (STRUCT_OFFSET(a, 0xE0, int) != 1)
    {
        STRUCT_OFFSET(a, 0xD0, int) = m[4] << 4;
        STRUCT_OFFSET(a, 0xD4, int) = m[5] << 3;
    }
    else
    {
        STRUCT_OFFSET(a, 0xD0, int) = 0x1000;
        STRUCT_OFFSET(a, 0xD4, int) = 0x700;
    }
}

int gsGuncon1_ExchangePad(int a, int b)
{
    int* p = _gc1_key_tbl + b * 16;
    int bit = 1;
    int r = 0;
    int i;

    for (i = 15; i >= 0; i--, p++)
    {
        if (a & bit)
        {
            r |= *p;
        }
        bit <<= 1;
    }
    return r & 0x9F3;
}
