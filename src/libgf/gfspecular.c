#include "common.h"

extern void sceVu0CopyVector();

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_Init);

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_MakePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_Draw);

void GFSpecular_SetVector()
{
    sceVu0CopyVector();
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_SetColor);

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_SetParam);
