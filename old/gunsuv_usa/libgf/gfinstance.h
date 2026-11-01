// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFINSTANCE_H
#define GUNSUV_USA_LIBGF_GFINSTANCE_H

typedef void (*gf_inst_evalfunc)(/* parameters unknown */);
typedef qword* (*gf_inst_drawfunc)(/* parameters unknown */);

struct gf_inst_head {
	sceVu0FMATRIX localMatrix;
	sceVu0FMATRIX worldMatrix;
	sceVu0FMATRIX lightMatrix;
	gf_inst_head *parent;
	gf_inst_head *bros;
	gf_inst_head *child;
	GF_INST_TYPE type;
	Uint32 flag;
	Float32 sortKey;
	gf_inst_evalfunc *evalFunc;
	gf_inst_drawfunc *drawFunc;
	gf_inst_head *before;
	gf_inst_head *next;
	gf_inst_head *beforeGroup;
	gf_inst_head *groupEnd;
	void *user;
};

typedef gf_inst_head GF_INSTANCE;
extern Float32 gf_sortKeyMax;
extern Float32 gf_sortKeyMin;
extern gf_inst_evalfunc gf_default_shape_evalfunc[0];
extern gf_inst_drawfunc gf_default_shape_drawfunc[0];
extern Uint32 gf_drawpolynum;
extern GF_INSTANCE *gf_drawOt[1001];
extern GF_INSTANCE *gf_drawOtPtr[1001];

void GFInstance_Eval(GF_INSTANCE *inst);
void GFInstance_Start();
void GFInstance_End();
qword* GFInstance_Draw(qword *packet);
void GFInstance_InitHead(GF_INSTANCE *inst);
void GFInstance_SetLocalMatrix(GF_INSTANCE *inst, float *m[4]);
void GFInstance_AddChild(GF_INSTANCE *parent, GF_INSTANCE *child);
void GFInstance_Remove(GF_INSTANCE *inst);
void GFInstance_ChangeParent(GF_INSTANCE *inst, GF_INSTANCE *parent);
void GFInstance_SetEvalFunc(GF_INSTANCE *inst, gf_inst_evalfunc *func);
void GFInstance_SetDrawFunc(GF_INSTANCE *inst, gf_inst_drawfunc *func);
void GFInstance_SetFunc(GF_INSTANCE *inst, gf_inst_evalfunc *eval, gf_inst_drawfunc *draw);
void GFInstance_SetSortKeyMax(Float32 max);
void GFInstance_SetSortKeyMin(Float32 min);

#endif // GUNSUV_USA_LIBGF_GFINSTANCE_H
