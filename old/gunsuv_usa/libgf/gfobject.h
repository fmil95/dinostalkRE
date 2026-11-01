// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFOBJECT_H
#define GUNSUV_USA_LIBGF_GFOBJECT_H

struct gf_model {
	Uint32 *podData;
	GfSHAPEOFS *shapeOfs;
	qword *packet;
	Sint32 pad;
	sceVu0FVECTOR boundBox[2];
};

typedef gf_model GF_MODEL;
GF_INST_OBJECT* GFObject_Init(GF_INST_OBJECT *obj);
void GFObject_AttachModel(GF_INST_OBJECT *obj, GF_MICRO *micro, GF_LIGHT *light, GF_POINT_LIGHT *point_light, GF_SPOT_LIGHT *spot_light, GF_MODEL *model);
void GFObject_AttachMicro(GF_INST_OBJECT *obj, GF_MICRO **micro);
void GFObject_Eval(GF_INST_OBJECT *inst);

#endif // GUNSUV_USA_LIBGF_GFOBJECT_H
