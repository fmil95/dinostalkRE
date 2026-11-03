#include "gunsuv_usa/libgf/gflight.h"
#include "gunsuv_usa/libgf/gfshape.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gflight", GFLight_Init);

INCLUDE_ASM("asm/nonmatchings/libgf/gflight", GFLight_SetVector);

INCLUDE_ASM("asm/nonmatchings/libgf/gflight", GFLight_SetColor);

INCLUDE_ASM("asm/nonmatchings/libgf/gflight", GFLight_MakePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gflight", GFLight_Draw);

void GFLight_SetShape(GF_INST_SHAPE* shape, GF_LIGHT* light)
{
    shape->light = light;
}
