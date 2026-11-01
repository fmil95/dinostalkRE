// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFANIM_H
#define GUNSUV_USA_LIBGF_GFANIM_H

typedef float sceVu0FVECTOR[4];

struct pmt_header {
	Uint32 magic;
	Uint32 version;
	Sint32 shapeNum;
	Sint32 free;
};

typedef pmt_header PmtHEADER;
typedef Float32 PmtQUATERNION[4];
typedef void (*GF_CallBackFunction)(/* parameters unknown */);
typedef gf_object GF_INST_OBJECT;
extern _GF_ANIMCOMPDATA _gfAnim_unitComp;

void GFAnim_Attach(GF_INST_OBJECT *obj, PmtHEADER *anim);
void GFAnim_HotAttach(GF_INST_OBJECT *obj, PmtHEADER *anim);
void GFAnim_ScaleMatrix(float *out_mat[4], float *in_mat[4], float *scale);
void gfAnim_calcmatrix(GF_INST_SHAPE *shape);
void GFAnim_Eval(GF_INST_SHAPE *shape, Float32 spd);
void GFAnim_SetSpeed(GF_INST_OBJECT *obj, Float32 speed);
void GFAnim_Forward(GF_INST_OBJECT *obj, Sint32 frd);
Uint32 GFAnim_ShapeFlagCheck(GF_INST_OBJECT *obj, Uint32 flag2);
Uint32 GFAnim_ShapeFlagSet(GF_INST_OBJECT *obj, Uint32 setFlag);
Uint32 GFAnim_ShapeFlagClear(GF_INST_OBJECT *obj, Uint32 setFlag);
void GFAnim_SetNextAnimation(GF_INST_OBJECT *object, PmtHEADER *nextanim, Uint32 flag, Sint32 time);
void GFAnim_SetCallbackFunction(GF_INST_OBJECT *object, GF_CallBackFunction function);

#endif // GUNSUV_USA_LIBGF_GFANIM_H
