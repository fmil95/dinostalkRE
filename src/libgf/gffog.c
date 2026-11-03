#include "gunsuv_usa/libgf/gffog.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gffog", GFFog_Init);

INCLUDE_ASM("asm/nonmatchings/libgf/gffog", GFFog_MakePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gffog", GFFog_Draw);

Float32 GFFog_SetNear(GF_FOG* fog, Float32 near)
{
    fog->near = near;

    return near;
}

Float32 GFFog_SetFar(GF_FOG* fog, Float32 far)
{
    fog->far = far;

    return far;
}

Float32 GFFog_SetMin(GF_FOG* fog, Float32 min)
{
    fog->min = min;

    return min;
}

Float32 GFFog_SetMax(GF_FOG* fog, Float32 max)
{
    fog->max = max;

    return max;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gffog", GFFog_SetParam);
