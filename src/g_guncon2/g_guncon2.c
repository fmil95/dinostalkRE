#include "common.h"
extern void* gsGuncon2Manager[];

extern int D_00653B74[];
extern int D_00653B64[];
extern int _flash_trg;
extern int _flash_cycle_cnt;
extern int _flash_bright;

extern int gunrtrg;
extern int GetGunBuffer();
INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_Init);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_Exec);

int gsGuncon2_CheckConnect()
{
    void* m = gsGuncon2Manager[0];

    if (m && STRUCT_OFFSET(m, 0x34, int) != -1)
    {
        return 1;
    }

    return 0;
}

int gsGuncon2_GetActivePort()
{
    if (gsGuncon2Manager[0] == (void*)GetGunBuffer(0))
    {
        return 0;
    }
    return (gsGuncon2Manager[0] == (void*)GetGunBuffer(1)) ? 1 : -1;
}

int gsGuncon2_Get()
{
    void* m = gsGuncon2Manager[0];

    if (m == 0)
    {
        return 0;
    }

    return STRUCT_OFFSET(m, 0x28, int);
}

int gsGuncon2_GetTrg()
{
    void* m = gsGuncon2Manager[0];

    if (m == 0)
    {
        return 0;
    }

    return STRUCT_OFFSET(m, 0x2C, int);
}

int gsGuncon2_GetRTrg()
{
    if (gsGuncon2Manager[0] == 0)
    {
        return 0;
    }

    return gunrtrg;
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", _gsGuncon2_changeByOpton);

int gsGuncon2_Get2()
{
    void* m = gsGuncon2Manager[0];

    if (m == 0)
    {
        return 0;
    }
    return _gsGuncon2_changeByOpton(STRUCT_OFFSET(m, 0x28, int));
}

int gsGuncon2_GetTrg2()
{
    void* m = gsGuncon2Manager[0];

    if (m == 0)
    {
        return 0;
    }
    return _gsGuncon2_changeByOpton(STRUCT_OFFSET(m, 0x2C, int));
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_GetGunPos);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_GetCamSight);

int gsGuncon2_GetCycle()
{
    return D_00653B74[0];
}

void gsGuncon2_SetState(int a)
{
    D_00653B64[0] = a;
}

int gsGuncon2_CanChangeArms()
{
    return ((D_00653B64[0] ^ 0x10) == 0);
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_InitManager);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_InitAdjustPara);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_DrawFlash);

void gsGuncon2_Flash_INIT()
{
    _flash_trg = 0;
    _flash_cycle_cnt = 0;
    _flash_bright = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_Flash_CALL);

void gsGuncon2_Flash_RECALL()
{
    _flash_trg = 0;
    _flash_cycle_cnt = 0;
    _flash_bright = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_Flash_EXEC);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_LoadModule);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGunconSetTrgRepeat);
