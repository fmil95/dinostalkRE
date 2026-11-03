#include "gunsuv_usa/libgf/gfinstance.h"

void GF_InitGraphicsFramework(void) {
}

void GF_EndGraphicsFramework(void) {
}

void gf_setsorykey(sceVu0FMATRIX p, GF_INSTANCE* inst)
{
    sceVu0FVECTOR out;

    inst->sortKey = p[0][2] * inst->worldMatrix[3][0] + p[1][2] * inst->worldMatrix[3][1] + p[2][2] * inst->worldMatrix[3][2] + p[3][2];
}

void GF_sort_shape(void) {
}

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DMA_SET_TAG_0);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DMA_SET_TAG_1);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_REF_UNPACK);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_REF_UNPACKR);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_RET_BASE_OFFSET);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_CNT_MSCAL_FLUSH);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_CNT_FLUSH);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_CNT_MSCNT);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_CNT_UNPACK);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_CNT_UNPACKR);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_CNT_STCYCL);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_CNT_STCYCL_STROW);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_REF_STCYCL_UNPACK);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_REF_STCYCL_UNPACKR);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_CNT_STCYCL_UNPACK);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_CNT_STCYCL_UNPACKR);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_CNT_DIRECT);

INCLUDE_ASM("asm/nonmatchings/libgf/libgf", _GFPKT_DV_REF_DIRECT);
