#include "common.h"

extern void sceVu0CopyVector();

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_Init);

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_MakePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_Draw);

void GFSpecular_SetVector()
{
    sceVu0CopyVector();
}

void GFSpecular_SetColor(void* a)
{
    sceVu0CopyVector((char*)a + 0x10);
}

void GFSpecular_SetParam(void* a, float x, float y, float z)
{
    STRUCT_OFFSET(a, 0x20, float) = x;
    STRUCT_OFFSET(a, 0x24, float) = y;
    STRUCT_OFFSET(a, 0x28, float) = z;
}
