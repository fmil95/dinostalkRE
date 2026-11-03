#include "gunsuv_usa/libgf/gfmodel.h"

Uint32 GFModel_GetVu1TransSize(Uint32 work_size)
{
    Uint32 single;

    single = (0x220 - work_size) >> 1;

    return ((single - 3) / 7) * 4 + 2;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", GFModel_MakePreset);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", gfModel_MakeModelInitPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", GFModel_MakeShapePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", gfModel_MakeMaterialPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", gfModel_MakeGeometryPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", gfModel_MakeVertexPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", GFModel_GetGiftag);
