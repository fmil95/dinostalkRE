#include "gunsuv_usa/libgf/gfspecular.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_Init);

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_MakePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfspecular", GFSpecular_Draw);

void GFSpecular_SetVector(GF_SPECULAR* specular, float* vec)
{
    sceVu0CopyVector(specular->vect, vec);
}

void GFSpecular_SetColor(GF_SPECULAR* specular, float* color)
{
    sceVu0CopyVector(specular->col, color);
}

void GFSpecular_SetParam(GF_SPECULAR* specular, Float32 spec, Float32 diff, Float32 bright)
{
    specular->other[0] = spec;
    specular->other[1] = diff;
    specular->other[2] = bright;
}
