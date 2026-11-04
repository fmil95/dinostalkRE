#include "gunsuv_usa/libgf/libgf.h"
#include "gunsuv_usa/libgf/gfmodel.h"

static void gfModel_MakeMaterialPacket(qword** wpp, Uint32** rpp, Uint32 trans_size, gf_modelpkt_make make_flag);
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

qword* GFModel_MakeShapePacket(PodSHAPE* pod_shape, qword* pkt_buf, Uint32 trans_size, gf_modelpkt_make make_flag)
{
    qword* wp;
    Uint32* rp;
    int i;

    wp = pkt_buf;
    rp = (Uint32*)(pod_shape + 1);

    for (i = 0; i < pod_shape->matNum; i++)
    {
        gfModel_MakeMaterialPacket(&wp, &rp, trans_size, make_flag);
    }

    return wp;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", gfModel_MakeMaterialPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", gfModel_MakeGeometryPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", gfModel_MakeVertexPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmodel", GFModel_GetGiftag);
