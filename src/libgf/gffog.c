#include "common.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gffog", GFFog_Init);

INCLUDE_ASM("asm/nonmatchings/libgf/gffog", GFFog_MakePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gffog", GFFog_Draw);

float GFFog_SetNear(void* a, float x)
{
    STRUCT_OFFSET(a, 0x8, float) = x;
    return x;
}

float GFFog_SetFar(void* a, float x)
{
    STRUCT_OFFSET(a, 0xC, float) = x;
    return x;
}

float GFFog_SetMin(void* a, float x)
{
    STRUCT_OFFSET(a, 0x0, float) = x;
    return x;
}

float GFFog_SetMax(void* a, float x)
{
    STRUCT_OFFSET(a, 0x4, float) = x;
    return x;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gffog", GFFog_SetParam);
