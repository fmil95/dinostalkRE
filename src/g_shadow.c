#include "common.h"

extern float gpShadowFarZ;
extern float gpShadowMaxAlpha;

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_Init);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_InitShadow);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_SetSortKey);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_MakePreset);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_MakeShapePacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_MakeVertexPacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_GifPacketMask);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_GifPacketShadow);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_GifPacketCover);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_Eval);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_AddPacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_Draw);

void gpShadow_SetObject(void* p, int v)
{
    STRUCT_OFFSET(p, 0x18, int) = v;
}

void gpShadow_Visible(void* p, int v)
{
    STRUCT_OFFSET(p, 0x0, int) = v;
}

void gpShadow_SetVolumeLength(void* p, float v)
{
    STRUCT_OFFSET(p, 0x8, float) = v;
}

void gpShadow_ReSetScreenFarZ(float v)
{
    gpShadowFarZ = v;
}

void gpShadow_SetMaxAlpha(float v)
{
    gpShadowMaxAlpha = v;
}

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_SetLightVector);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_InitPacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_CalcParam);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_CheckClip);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_DrawParam);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_AllMatrixTransfer);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_Start);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_End);
