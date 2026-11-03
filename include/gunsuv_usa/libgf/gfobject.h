// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFOBJECT_H
#define GUNSUV_USA_LIBGF_GFOBJECT_H

#include "common.h"
#include "gunsuv_usa/libgf/gfinstance.h"
#include "gunsuv_usa/libgf/gfmicro.h"
#include "gunsuv_usa/libgf/gflight.h"
#include "gunsuv_usa/libgf/gfpointlight.h"
#include "gunsuv_usa/libgf/gfspotlight.h"

struct gf_model { // 0x30
	/* 0x00 */ Uint32 *podData;
	/* 0x04 */ struct gf_shapeofs *shapeOfs;
	/* 0x08 */ qword *packet;
	/* 0x0c */ Sint32 pad;
	/* 0x10 */ sceVu0FVECTOR boundBox[2];
};

typedef struct gf_model GF_MODEL;
typedef void (*GF_CallBackFunction)(/* parameters unknown */);

struct gf_object { // 0x160
	/* 0x000 */ GF_INST_HEAD head;
	/* 0x100 */ Uint32 flag;
	/* 0x104 */ GF_MICRO *micro;
	/* 0x108 */ GF_LIGHT *light;
	/* 0x10c */ GF_POINT_LIGHT *point_light;
	/* 0x110 */ GF_SPOT_LIGHT *spot_light;
	/* 0x114 */ GF_MODEL *model;
	/* 0x118 */ Sint32 nShape;
	/* 0x11c */ struct gf_inst *shape;
	/* 0x120 */ Uint32 flagAnim;
	/* 0x124 */ struct pmt_header *curAnim;
	/* 0x128 */ Float32 speedAnim;
	/* 0x12c */ struct pmt_header *compNextAnim;
	/* 0x130 */ Uint32 compAllTimeAnim;
	/* 0x134 */ Uint32 compCurTimeAnim;
	/* 0x138 */ GF_CallBackFunction func;
	/* 0x140 */ sceVu0FVECTOR col;
	/* 0x150 */ Uint64 alpha;
};

typedef struct gf_object GF_INST_OBJECT;

GF_INST_OBJECT* GFObject_Init(GF_INST_OBJECT *obj);
void GFObject_AttachModel(GF_INST_OBJECT *obj, GF_MICRO *micro, GF_LIGHT *light, GF_POINT_LIGHT *point_light, GF_SPOT_LIGHT *spot_light, GF_MODEL *model);
void GFObject_AttachMicro(GF_INST_OBJECT *obj, GF_MICRO **micro);
void GFObject_Eval(GF_INST_OBJECT *inst);

#endif // GUNSUV_USA_LIBGF_GFOBJECT_H
