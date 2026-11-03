#include "gunsuv_usa/libgf/libgf.h"
#include "gunsuv_usa/libgf/gfmicro.h"

GF_MICRO* GFMicro_Init(GF_MICRO* micro)
{
    micro->micro  = NULL;
    micro->packet = NULL;

    return micro;
}

qword* GFMicro_MakePacket(GF_MICRO* micro, qword* packbuf, Uint32* dsmcode, Sint32 worksize)
{
    micro->packet   = packbuf;
    micro->micro    = dsmcode;
    micro->workSize = worksize;

    _GFPKT_DMA_SET_TAG_1(packbuf, 5, 0, (Uint32)dsmcode);
    _GFPKT_DV_RET_BASE_OFFSET(packbuf + 1, 0x1E0, (Uint32)(0x220 - worksize) >> 1);

    return packbuf + 2;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfmicro", GFMicro_Draw);
