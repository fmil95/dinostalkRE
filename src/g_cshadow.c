#include "common.h"

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_Init);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_InitCShadow);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_Draw);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_InitPacket);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_CalcAlpha);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_MakePacket);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_SetGsRegs);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_GetHitTriangle);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_GetNearTriangles);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_AddTriList);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_GetChangeMatrix);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_GetTexST);
