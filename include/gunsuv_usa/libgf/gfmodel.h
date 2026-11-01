// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFMODEL_H
#define GUNSUV_USA_LIBGF_GFMODEL_H

typedef struct {
	long unsigned int NLOOP : 15;
	long unsigned int EOP : 1;
	long unsigned int pad16 : 16;
	long unsigned int id : 14;
	long unsigned int PRE : 1;
	long unsigned int PRIM : 11;
	long unsigned int FLG : 2;
	long unsigned int NREG : 4;
	long unsigned int REGS0 : 4;
	long unsigned int REGS1 : 4;
	long unsigned int REGS2 : 4;
	long unsigned int REGS3 : 4;
	long unsigned int REGS4 : 4;
	long unsigned int REGS5 : 4;
	long unsigned int REGS6 : 4;
	long unsigned int REGS7 : 4;
	long unsigned int REGS8 : 4;
	long unsigned int REGS9 : 4;
	long unsigned int REGS10 : 4;
	long unsigned int REGS11 : 4;
	long unsigned int REGS12 : 4;
	long unsigned int REGS13 : 4;
	long unsigned int REGS14 : 4;
	long unsigned int REGS15 : 4;
} sceGifTag;

struct pod_shape {
	Sint32 matNum;
	Uint32 flag;
	Sint32 pad;
	Sint32 free;
	sceVu0FVECTOR min;
	sceVu0FVECTOR max;
};

typedef pod_shape PodSHAPE;

struct gf_shapeofs {
	qword *packet;
	PodSHAPETBL *shapeTbl;
	Sint32 index;
	Uint32 npoly;
};

typedef gf_shapeofs GfSHAPEOFS;

enum gf_modelpkt_make {
	GF_MODELPKT_MAKE_ALL = 0,
	GF_MODELPKT_MAKE_VERTEX_ONLY = 1,
	GF_MODELPKT_MAKE_TEXTURE_ONLY = 2
};

extern GfSHAPEOFS *countshape;

Uint32 GFModel_GetVu1TransSize(Uint32 work_size);
qword* GFModel_MakePreset(GF_MODEL *model, qword *wp, Uint32 *rp, Sint32 worksize);
qword* GFModel_MakeShapePacket(PodSHAPE *pod_shape, qword *pkt_buf, Uint32 trans_size, gf_modelpkt_make make_flag);
void GFModel_GetGiftag(sceGifTag *giftag, Uint32 gsprim, Uint32 vert_num);

#endif // GUNSUV_USA_LIBGF_GFMODEL_H
