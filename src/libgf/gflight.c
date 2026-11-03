#include "gunsuv_usa/libgf/gflight.h"
#include "gunsuv_usa/libgf/gfshape.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gflight", GFLight_Init);

void GFLight_SetVector(GF_LIGHT* light, float* v0, float* v1, float* v2)
{
    sceVu0NormalLightMatrix(light->paraVect, v0, v1, v2);

    light->paraVect[3][3] = 1.0f;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gflight", GFLight_SetColor);

INCLUDE_ASM("asm/nonmatchings/libgf/gflight", GFLight_MakePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gflight", GFLight_Draw);

void GFLight_SetShape(GF_INST_SHAPE* shape, GF_LIGHT* light)
{
    shape->light = light;
}
