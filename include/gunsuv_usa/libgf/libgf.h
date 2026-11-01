// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_LIBGF_H
#define GUNSUV_USA_LIBGF_LIBGF_H

typedef int qword[4];
typedef float sceVu0FMATRIX[4][4];
typedef u_int Uint32;
extern sceVu0FMATRIX gUnitMatrix;

void GF_InitGraphicsFramework();
void GF_EndGraphicsFramework();
void gf_setsorykey(float *p[4], GF_INSTANCE *inst);
void GF_sort_shape(sceVu0FMATRIX *cam);
void _GFPKT_DMA_SET_TAG_0(qword *p, Uint32 id, Uint32 qwc);
void _GFPKT_DMA_SET_TAG_1(qword *p, Uint32 id, Uint32 qwc, Uint32 addr);
void _GFPKT_DV_REF_UNPACK(qword *p, Uint32 addr, Uint32 vuaddr, Uint32 size);
void _GFPKT_DV_REF_UNPACKR(qword *p, Uint32 addr, Uint32 vuaddr, Uint32 size);
void _GFPKT_DV_RET_BASE_OFFSET(qword *p, Uint32 base, Uint32 offset);
void _GFPKT_DV_CNT_MSCAL_FLUSH(qword *p, Uint32 size, Uint32 vuaddr);
void _GFPKT_DV_CNT_FLUSH(qword *p, Uint32 size);
void _GFPKT_DV_CNT_MSCNT(qword *p, Uint32 size);
void _GFPKT_DV_CNT_UNPACK(qword *p, Uint32 vuaddr, Uint32 size);
void _GFPKT_DV_CNT_UNPACKR(qword *p, Uint32 vuaddr, Uint32 size);
void _GFPKT_DV_CNT_STCYCL(qword *p, Uint32 size, Uint32 wl, Uint32 cl);
void _GFPKT_DV_CNT_STCYCL_STROW(qword *p, Uint32 size, Uint32 wl, Uint32 cl);
void _GFPKT_DV_REF_STCYCL_UNPACK(qword *p, Uint32 addr, Uint32 vuaddr, Uint32 size, Uint32 wl, Uint32 cl);
void _GFPKT_DV_REF_STCYCL_UNPACKR(qword *p, Uint32 addr, Uint32 vuaddr, Uint32 size, Uint32 wl, Uint32 cl);
void _GFPKT_DV_CNT_STCYCL_UNPACK(qword *p, Uint32 vuaddr, Uint32 size, Uint32 wl, Uint32 cl);
void _GFPKT_DV_CNT_STCYCL_UNPACKR(qword *p, Uint32 vuaddr, Uint32 size, Uint32 wl, Uint32 cl);
void _GFPKT_DV_CNT_DIRECT(qword *p, Uint32 size);
void _GFPKT_DV_REF_DIRECT(qword *p, Uint32 addr, Uint32 size);

#endif // GUNSUV_USA_LIBGF_LIBGF_H
