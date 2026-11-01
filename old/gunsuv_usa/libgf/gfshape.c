// STATUS: NOT STARTED

#include "gfshape.h"

Uint32 gf_transTextureNum = 0;

void gfShape_AttachObject2(GF_INST_OBJECT *obj, GF_INST_SHAPE *gShape, Sint32 gShapeNo) {
	PodSHAPETBL *shape_ofs_top;
	GF_INST_SHAPE *gCurShape;
}

void GFShape_AttachObject(GF_INST_SHAPE *shape, GF_INST_OBJECT *obj) {
	Sint32 no;
}

void GFShape_Eval(GF_INST_SHAPE *inst) {}

qword* GFShape_Draw(qword *packet, GF_INST_SHAPE *inst) {
	qword *cur;
	PodMATERIAL *material;
}

qword* GFShape_MakeMatrixTransferPacket(float *mat_lw[4], float *mat_light[4], qword *packet) {
	qword *cur;
	static sceVu0FVECTOR row = {
		/* [0] = */ 1.f,
		/* [1] = */ 1.f,
		/* [2] = */ 1.f,
		/* [3] = */ 1.f
	};
}

qword* GFShape_MakeAllMatrixTransferPacket(GF_INST_SHAPE *shape, qword *packet) {
	qword *cur;
	Uint32 i;
	int trns;
	GF_INSTANCE *inst;
	static sceVu0FVECTOR row = {
		/* [0] = */ 1.f,
		/* [1] = */ 1.f,
		/* [2] = */ 1.f,
		/* [3] = */ 1.f
	};
}

qword* gfTexturedraw(qword *packet, Sint32 texidx) {
	qword *cur;
	Sint32 valid;
}
