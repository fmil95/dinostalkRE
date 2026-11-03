#include "gunsuv_usa/libgf/gflight.h"
#include "gunsuv_usa/libgf/gfshape.h"

extern sceVu0FVECTOR D_00655CE0;

GF_LIGHT* GFLight_Init(GF_LIGHT* light)
{
    sceVu0FMATRIX unit;

    sceVu0UnitMatrix(unit);

    GFLight_SetVector(light, unit[0], unit[1], unit[2]);
    GFLight_SetColor(light, D_00655CE0, D_00655CE0, D_00655CE0, D_00655CE0);

    light->packet = NULL;

    return light;
}

void GFLight_SetVector(GF_LIGHT* light, float* v0, float* v1, float* v2)
{
    sceVu0NormalLightMatrix(light->paraVect, v0, v1, v2);

    light->paraVect[3][3] = 1.0f;
}

void GFLight_SetColor(GF_LIGHT* light, float* c0, float* c1, float* c2, float* amb)
{
    sceVu0LightColorMatrix(light->paraCol, c0, c1, c2, amb);
}

qword* GFLight_MakePacket(GF_LIGHT* light, qword* packbuf)
{
    light->packet = packbuf;

    return packbuf;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gflight", GFLight_Draw);

void GFLight_SetShape(GF_INST_SHAPE* shape, GF_LIGHT* light)
{
    shape->light = light;
}
