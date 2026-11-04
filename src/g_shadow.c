#include "common.h"
#include "g_shadow.h"

extern float gpShadowFarZ;
extern float gpShadowMaxAlpha;
extern float D_0068D8E4[];
extern float D_002AF960[];
extern char gpShadowLightVector[];
extern void sceVu0Normalize();

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_Init);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_InitShadow);

void gpShadow_SetSortKey(float x)
{
    D_0068D8E4[0] = x;
}

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_MakePreset);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_MakeShapePacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_MakeVertexPacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_GifPacketMask);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_GifPacketShadow);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_GifPacketCover);

void gpShadow_Eval()
{
    gpShadowFarZ = D_002AF960[0];
}

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

void gpShadow_SetLightVector(int a)
{
    sceVu0Normalize(gpShadowLightVector, a);
}

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_InitPacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_CalcParam);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_CheckClip);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_DrawParam);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_AllMatrixTransfer);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_Start);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_End);
