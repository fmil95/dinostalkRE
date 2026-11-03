#include "gunsuv_usa/libgf/gfspotlight.h"
#include "gunsuv_usa/libgf/gfpointlight.h"
#include "gunsuv_usa/libgf/gflight.h"
#include "gunsuv_usa/libgf/gfmicro.h"
#include "gunsuv_usa/libgf/libgf.h"
#include "gunsuv_usa/libgf/gfpack.h"

void GFPack_InitBuf(GF_PACKET* pm, qword* p, Sint32 size)
{
    pm->top  = p;
    pm->cur  = p;
    pm->size = size;
}

void GFPack_ResetBuf(GF_PACKET* pm)
{
    gf_trans_micro = NULL;
    pm->cur = pm->top;
    gf_trans_light = NULL;
    gf_trans_point_light = NULL;
    gf_trans_spot_light = NULL;

    _GFPKT_DMA_SET_TAG_0(pm->top, 7, 0);
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfpack", GFPacket_Add);

INCLUDE_ASM("asm/nonmatchings/libgf/gfpack", GFPacket_KickDma);
