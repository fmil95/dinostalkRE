// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFINSTANCE_H
#define GUNSUV_USA_LIBGF_GFINSTANCE_H

#include "common.h"
#include <libvu0.h>

//typedef void (*gf_inst_evalfunc)(/* parameters unknown */);
//typedef qword* (*gf_inst_drawfunc)(/* parameters unknown */);

/*struct gf_inst_head {
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
};*/

/*typedef gf_inst_head GF_INSTANCE;
extern Float32 gf_sortKeyMax;
extern Float32 gf_sortKeyMin;
extern gf_inst_evalfunc gf_default_shape_evalfunc[0];
extern gf_inst_drawfunc gf_default_shape_drawfunc[0];
extern Uint32 gf_drawpolynum;
extern GF_INSTANCE *gf_drawOt[1001];
extern GF_INSTANCE *gf_drawOtPtr[1001];*/

typedef enum {
	GF_INST_TYPE_NULL = 0,
	GF_INST_TYPE_OBJECT = 1,
	GF_INST_TYPE_SHAPE = 2,
	GF_INST_TYPE_SPRITE = 3,
	GF_INST_TYPE_SCENE = 4,
	GF_INST_TYPE_FOG = 5,
	GF_INST_TYPE_USER = 6
} GF_INST_TYPE;

typedef void (*gf_inst_evalfunc)(/* parameters unknown */);
typedef qword* (*gf_inst_drawfunc)(/* parameters unknown */);

struct gf_inst_head { // 0x100
	/* 0x00 */ sceVu0FMATRIX localMatrix;
	/* 0x40 */ sceVu0FMATRIX worldMatrix;
	/* 0x80 */ sceVu0FMATRIX lightMatrix;
	/* 0xc0 */ struct gf_inst_head *parent;
	/* 0xc4 */ struct gf_inst_head *bros;
	/* 0xc8 */ struct gf_inst_head *child;
	/* 0xcc */ GF_INST_TYPE type;
	/* 0xd0 */ Uint32 flag;
	/* 0xd4 */ Float32 sortKey;
	/* 0xd8 */ gf_inst_evalfunc *evalFunc;
	/* 0xdc */ gf_inst_drawfunc *drawFunc;
	/* 0xe0 */ struct gf_inst_head *before;
	/* 0xe4 */ struct gf_inst_head *next;
	/* 0xe8 */ struct gf_inst_head *beforeGroup;
	/* 0xec */ struct gf_inst_head *groupEnd;
	/* 0xf0 */ void *user;
};

typedef struct gf_inst_head GF_INST_HEAD;
typedef struct gf_inst_head GF_INSTANCE;
typedef struct gf_inst_head GF_INST_NULL;

void GFInstance_Eval(GF_INSTANCE *inst);
void GFInstance_Start();
void GFInstance_End();
qword* GFInstance_Draw(qword *packet);
void GFInstance_InitHead(GF_INSTANCE *inst);
void GFInstance_SetLocalMatrix(GF_INSTANCE* inst, sceVu0FMATRIX m);
void GFInstance_AddChild(GF_INSTANCE *parent, GF_INSTANCE *child);
void GFInstance_Remove(GF_INSTANCE *inst);
void GFInstance_ChangeParent(GF_INSTANCE *inst, GF_INSTANCE *parent);
void GFInstance_SetEvalFunc(GF_INSTANCE *inst, gf_inst_evalfunc *func);
void GFInstance_SetDrawFunc(GF_INSTANCE *inst, gf_inst_drawfunc *func);
void GFInstance_SetFunc(GF_INSTANCE *inst, gf_inst_evalfunc *eval, gf_inst_drawfunc *draw);
void GFInstance_SetSortKeyMax(Float32 max);
void GFInstance_SetSortKeyMin(Float32 min);

extern gf_inst_evalfunc* gf_default_evalfunc[];
extern gf_inst_drawfunc* gf_default_drawfunc[];
extern gf_inst_drawfunc gf_string_drawfunc;
extern gf_inst_evalfunc gf_string_evalfunc;
extern GF_INSTANCE* gf_drawOt[1001];
extern GF_INSTANCE* gf_drawOtPtr[1001];

#endif // GUNSUV_USA_LIBGF_GFINSTANCE_H
