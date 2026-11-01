// STATUS: NOT STARTED

#include "gfmodel.h"

GfSHAPEOFS *countshape = NULL;

Uint32 GFModel_GetVu1TransSize(Uint32 work_size) {
	Uint32 single;
}

qword* GFModel_MakePreset(GF_MODEL *model, qword *wp, Uint32 *rp, Sint32 worksize) {
	Sint32 packsize;
	qword *cur_wp;
	PodSHAPETBL *shapetbl;
	int i;
}

static qword* gfModel_MakeModelInitPacket(Sint32 pack_size, qword *packet) {
	qword *cur;
}

qword* GFModel_MakeShapePacket(PodSHAPE *pod_shape, qword *pkt_buf, Uint32 trans_size, gf_modelpkt_make make_flag) {
	qword *wp;
	Uint32 *rp;
	int i;
}

static void gfModel_MakeMaterialPacket(qword **wpp, Uint32 **rpp, Uint32 trans_size, gf_modelpkt_make make_flag) {
	PodMATERIAL *material;
	qword *wp;
	Uint32 *rp;
	int i;
}

static void gfModel_MakeGeometryPacket(qword **wpp, Uint32 **rpp, Uint32 trans_size, Uint32 mat_flag) {
	PodGEOMETRY *geometry;
	Uint32 pack_cnt;
	Uint32 remain;
	qword *wp;
	qword *rp;
	Sint32 data_num;
}

static void gfModel_MakeVertexPacket(qword **wpp, qword **rpp, Uint32 pack_cnt, Uint32 mat_flag, Uint32 gsprim, Sint32 vert_num) {
	qword *wp;
	Float32 *vert_p;
}

void GFModel_GetGiftag(sceGifTag *giftag, Uint32 gsprim, Uint32 vert_num) {}
