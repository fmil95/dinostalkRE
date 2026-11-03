#include "common.h"

extern int D_00653B74[];
extern int D_00653B64[];
extern int _flash_trg;
extern int _flash_cycle_cnt;
extern int _flash_bright;

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_Init);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_Exec);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_CheckConnect);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_GetActivePort);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_Get);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_GetTrg);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_GetRTrg);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", _gsGuncon2_changeByOpton);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_Get2);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_guncon2", gsGuncon2_GetTrg2);

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
