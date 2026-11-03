// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFSCENE_H
#define GUNSUV_USA_LIBGF_GFSCENE_H

#include "common.h"
#include "gunsuv_usa/libgf/gfinstance.h"
#include "gunsuv_usa/libgf/gffog.h"

struct gf_screen { // 0x40
	/* 0x00 */ Float32 screenDist;
	/* 0x04 */ Float32 xAspect;
	/* 0x08 */ Float32 yAspect;
	/* 0x0c */ Float32 gsXSize;
	/* 0x10 */ Float32 gsYSize;
	/* 0x14 */ Float32 zMini;
	/* 0x18 */ Float32 zMax;
	/* 0x1c */ Float32 nearZ;
	/* 0x20 */ Float32 farZ;
	/* 0x30 */ sceVu0FVECTOR clipVolume;
};

typedef struct gf_screen GF_SCREEN;

struct gf_scene { // 0x2f0
	/* 0x000 */ GF_INST_HEAD head;
	/* 0x100 */ sceVu0FMATRIX worldView;
	/* 0x140 */ sceVu0FMATRIX viewScreen;
	/* 0x180 */ sceVu0FMATRIX viewClip;
	/* 0x1c0 */ sceVu0FMATRIX clipScreen;
	/* 0x200 */ sceVu0FMATRIX worldScreen;
	/* 0x240 */ sceVu0FMATRIX worldClip;
	/* 0x280 */ sceVu0FVECTOR cameraPos;
	/* 0x290 */ GF_FOG fog;
	/* 0x2e0 */ qword *packet;
};

typedef struct gf_scene GF_INST_SCENE;
extern GF_INST_SCENE *gf_trans_scene;

GF_INST_SCENE* GFScene_MakeInstance(GF_INST_SCENE *scene, GF_INSTANCE *parent);
void GFScene_SetViewScreen(float *view[4], GF_SCREEN *screen);
void GFScene_SetViewClip(float *view[4], GF_SCREEN *screen);
void GFScene_SetClipScreen(float *clip[4], GF_SCREEN *screen);
void GFScene_SetScreen(GF_INST_SCENE *scene, GF_SCREEN *screen);
qword* GFScene_MakePacket(GF_INST_SCENE *scene, qword *packbuf);
void GFScene_SetWorldView(GF_INST_SCENE *scene, float *m[4]);
void GFScene_SetCameraPos(GF_INST_SCENE *scene, float *pos);
void GFScene_Eval(GF_INST_SCENE *scene);
qword* GFScene_Draw(qword *packet, GF_INST_SCENE *scene);

#endif // GUNSUV_USA_LIBGF_GFSCENE_H
