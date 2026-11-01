// STATUS: NOT STARTED

#include "libgf.h"

sceVu0FMATRIX gUnitMatrix = {
	/* [0] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 1.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 1.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	}
};

void GF_InitGraphicsFramework() {}

void GF_EndGraphicsFramework() {}

void gf_setsorykey(float *p[4], GF_INSTANCE *inst) {
	sceVu0FVECTOR out;
}

void GF_sort_shape(sceVu0FMATRIX *cam) {}

void _GFPKT_DMA_SET_TAG_0(qword *p, Uint32 id, Uint32 qwc) {}

void _GFPKT_DMA_SET_TAG_1(qword *p, Uint32 id, Uint32 qwc, Uint32 addr) {}

void _GFPKT_DV_REF_UNPACK(qword *p, Uint32 addr, Uint32 vuaddr, Uint32 size) {}

void _GFPKT_DV_REF_UNPACKR(qword *p, Uint32 addr, Uint32 vuaddr, Uint32 size) {}

void _GFPKT_DV_RET_BASE_OFFSET(qword *p, Uint32 base, Uint32 offset) {}

void _GFPKT_DV_CNT_MSCAL_FLUSH(qword *p, Uint32 size, Uint32 vuaddr) {}

void _GFPKT_DV_CNT_FLUSH(qword *p, Uint32 size) {}

void _GFPKT_DV_CNT_MSCNT(qword *p, Uint32 size) {}

void _GFPKT_DV_CNT_UNPACK(qword *p, Uint32 vuaddr, Uint32 size) {}

void _GFPKT_DV_CNT_UNPACKR(qword *p, Uint32 vuaddr, Uint32 size) {}

void _GFPKT_DV_CNT_STCYCL(qword *p, Uint32 size, Uint32 wl, Uint32 cl) {}

void _GFPKT_DV_CNT_STCYCL_STROW(qword *p, Uint32 size, Uint32 wl, Uint32 cl) {}

void _GFPKT_DV_REF_STCYCL_UNPACK(qword *p, Uint32 addr, Uint32 vuaddr, Uint32 size, Uint32 wl, Uint32 cl) {}

void _GFPKT_DV_REF_STCYCL_UNPACKR(qword *p, Uint32 addr, Uint32 vuaddr, Uint32 size, Uint32 wl, Uint32 cl) {}

void _GFPKT_DV_CNT_STCYCL_UNPACK(qword *p, Uint32 vuaddr, Uint32 size, Uint32 wl, Uint32 cl) {}

void _GFPKT_DV_CNT_STCYCL_UNPACKR(qword *p, Uint32 vuaddr, Uint32 size, Uint32 wl, Uint32 cl) {}

void _GFPKT_DV_CNT_DIRECT(qword *p, Uint32 size) {}

void _GFPKT_DV_REF_DIRECT(qword *p, Uint32 addr, Uint32 size) {}
