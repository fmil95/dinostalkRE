#include "common.h"

extern int D_00653B08[];

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_InitAll);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_Init);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_ClearFlag);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_LoadPad);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_Exec);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_CheckPort);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_GetDelay);

int gsGuncon1_Get()
{
    return D_00653B08[0];
}

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_GetTrg);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_FlashTrigger);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_CheckOut);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_CheckOutTrg);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_GetCamSight);

INCLUDE_ASM("asm/nonmatchings/g_guncon1/g_guncon1", gsGuncon1_ExchangePad);
