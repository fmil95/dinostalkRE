// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFMODEL_H
#define GUNSUV_USA_LIBGF_GFMODEL_H

#include "common.h"
#include "gunsuv_usa/libgf/gfobject.h"
#include "gunsuv_usa/libgf/pod.h"

typedef struct { // 0x10
	/* 0x0:0 */ long unsigned int NLOOP : 15;
	/* 0x1:7 */ long unsigned int EOP : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int id : 14;
	/* 0x5:6 */ long unsigned int PRE : 1;
	/* 0x5:7 */ long unsigned int PRIM : 11;
	/* 0x7:2 */ long unsigned int FLG : 2;
	/* 0x7:4 */ long unsigned int NREG : 4;
	/* 0x8:0 */ long unsigned int REGS0 : 4;
	/* 0x8:4 */ long unsigned int REGS1 : 4;
	/* 0x9:0 */ long unsigned int REGS2 : 4;
	/* 0x9:4 */ long unsigned int REGS3 : 4;
	/* 0xa:0 */ long unsigned int REGS4 : 4;
	/* 0xa:4 */ long unsigned int REGS5 : 4;
	/* 0xb:0 */ long unsigned int REGS6 : 4;
	/* 0xb:4 */ long unsigned int REGS7 : 4;
	/* 0xc:0 */ long unsigned int REGS8 : 4;
	/* 0xc:4 */ long unsigned int REGS9 : 4;
	/* 0xd:0 */ long unsigned int REGS10 : 4;
	/* 0xd:4 */ long unsigned int REGS11 : 4;
	/* 0xe:0 */ long unsigned int REGS12 : 4;
	/* 0xe:4 */ long unsigned int REGS13 : 4;
	/* 0xf:0 */ long unsigned int REGS14 : 4;
	/* 0xf:4 */ long unsigned int REGS15 : 4;
} sceGifTag;

struct gf_shapeofs { // 0x10
	/* 0x0 */ qword *packet;
	/* 0x4 */ PodSHAPETBL *shapeTbl;
	/* 0x8 */ Sint32 index;
	/* 0xc */ Uint32 npoly;
};

typedef struct gf_shapeofs GfSHAPEOFS;

typedef enum {
	GF_MODELPKT_MAKE_ALL = 0,
	GF_MODELPKT_MAKE_VERTEX_ONLY = 1,
	GF_MODELPKT_MAKE_TEXTURE_ONLY = 2
} gf_modelpkt_make;

extern GfSHAPEOFS *countshape;

Uint32 GFModel_GetVu1TransSize(Uint32 work_size);
qword* GFModel_MakePreset(GF_MODEL *model, qword *wp, Uint32 *rp, Sint32 worksize);
qword* GFModel_MakeShapePacket(PodSHAPE *pod_shape, qword *pkt_buf, Uint32 trans_size, gf_modelpkt_make make_flag);
void GFModel_GetGiftag(sceGifTag *giftag, Uint32 gsprim, Uint32 vert_num);

#endif // GUNSUV_USA_LIBGF_GFMODEL_H
