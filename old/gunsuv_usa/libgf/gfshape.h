// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFSHAPE_H
#define GUNSUV_USA_LIBGF_GFSHAPE_H

struct gf_inst {
	GF_INST_HEAD head;
	Uint32 flag;
	Sint32 no;
	PodSHAPETBL *shapeTbl;
	PodSHAPE *shape;
	gf_object *object;
	qword *packet;
	qword *extPacket;
	GF_MICRO *micro;
	GF_LIGHT *light;
	GF_POINT_LIGHT *point_light;
	GF_SPOT_LIGHT *spot_light;
	Uint32 flagAnim;
	PmtSHAPEKEYHEAD *keyHead;
	PmtSHAPEOFS *shapeOffs;
	Sint32 curKey;
	Float32 curFrame;
	PmtSHAPEKEYHEAD *keyHeadComp;
	PmtSHAPEOFS *shapeOffsComp;
	Sint32 curKeyComp;
	Float32 curFrameComp;
	sceVu0FVECTOR col;
	Uint64 alpha;
};

typedef gf_inst GF_INST_SHAPE;
extern Uint32 gf_transTextureNum;

void gfShape_AttachObject2(GF_INST_OBJECT *obj, GF_INST_SHAPE *gShape, Sint32 gShapeNo);
void GFShape_AttachObject(GF_INST_SHAPE *shape, GF_INST_OBJECT *obj);
void GFShape_Eval(GF_INST_SHAPE *inst);
qword* GFShape_Draw(qword *packet, GF_INST_SHAPE *inst);
qword* GFShape_MakeMatrixTransferPacket(float *mat_lw[4], float *mat_light[4], qword *packet);
qword* GFShape_MakeAllMatrixTransferPacket(GF_INST_SHAPE *shape, qword *packet);
qword* gfTexturedraw(qword *packet, Sint32 texidx);

#endif // GUNSUV_USA_LIBGF_GFSHAPE_H
