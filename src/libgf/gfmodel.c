#include "gunsuv_usa/libgf/libgf.h"
#include "gunsuv_usa/libgf/gfmodel.h"

Uint32 GFModel_GetVu1TransSize(Uint32 work_size)
{
    Uint32 single;

    single = (0x220 - work_size) >> 1;

    return ((single - 3) / 7) * 4 + 2;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", GFModel_MakePreset);

static qword* gfModel_MakeModelInitPacket(Sint32 pack_size, qword* packet)
{
    qword* cur;

    _GFPKT_DV_CNT_STCYCL_UNPACK(packet, 0xDE, 1, 1, 1);

    cur = packet + 1;
    (*cur)[0] = pack_size;
    (*cur)[1] = 0;
    (*cur)[2] = 0;
    (*cur)[3] = 0;
    cur++;

    _GFPKT_DMA_SET_TAG_0(cur, 6, 0);
    cur++;

    return cur;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", GFModel_MakeShapePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", gfModel_MakeMaterialPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", gfModel_MakeGeometryPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", gfModel_MakeVertexPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", GFModel_GetGiftag);
