// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFSHAPE_H
#define GUNSUV_USA_LIBGF_GFSHAPE_H

#include "common.h"
#include "gunsuv_usa/libgf/gfobject.h"

struct gf_inst { // 0x170
	/* 0x000 */ GF_INST_HEAD head;
	/* 0x100 */ Uint32 flag;
	/* 0x104 */ Sint32 no;
	/* 0x108 */ struct pod_shapetbl *shapeTbl;
	/* 0x10c */ struct pod_shape *shape;
	/* 0x110 */ struct gf_object *object;
	/* 0x114 */ qword *packet;
	/* 0x118 */ qword *extPacket;
	/* 0x11c */ GF_MICRO *micro;
	/* 0x120 */ GF_LIGHT *light;
	/* 0x124 */ GF_POINT_LIGHT *point_light;
	/* 0x128 */ GF_SPOT_LIGHT *spot_light;
	/* 0x12c */ Uint32 flagAnim;
	/* 0x130 */ struct pmt_shapekeyhead *keyHead;
	/* 0x134 */ struct pmt_shapeofs *shapeOffs;
	/* 0x138 */ Sint32 curKey;
	/* 0x13c */ Float32 curFrame;
	/* 0x140 */ struct pmt_shapekeyhead *keyHeadComp;
	/* 0x144 */ struct pmt_shapeofs *shapeOffsComp;
	/* 0x148 */ Sint32 curKeyComp;
	/* 0x14c */ Float32 curFrameComp;
	/* 0x150 */ sceVu0FVECTOR col;
	/* 0x160 */ Uint64 alpha;
};

typedef struct gf_inst GF_INST_SHAPE;
extern Uint32 gf_transTextureNum;

void gfShape_AttachObject2(GF_INST_OBJECT *obj, GF_INST_SHAPE *gShape, Sint32 gShapeNo);
void GFShape_AttachObject(GF_INST_SHAPE *shape, GF_INST_OBJECT *obj);
void GFShape_Eval(GF_INST_SHAPE *inst);
qword* GFShape_Draw(qword *packet, GF_INST_SHAPE *inst);
qword* GFShape_MakeMatrixTransferPacket(float *mat_lw[4], float *mat_light[4], qword *packet);
qword* GFShape_MakeAllMatrixTransferPacket(GF_INST_SHAPE *shape, qword *packet);
qword* gfTexturedraw(qword *packet, Sint32 texidx);

#endif // GUNSUV_USA_LIBGF_GFSHAPE_H
