// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFMODEL_H
#define GUNSUV_USA_LIBGF_GFMODEL_H

#include "common.h"
#include <eestruct.h>
#include "gunsuv_usa/libgf/gfobject.h"
#include "gunsuv_usa/libgf/pod.h"

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
