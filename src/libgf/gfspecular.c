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

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_SetParam);
