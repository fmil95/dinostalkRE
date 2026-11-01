// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFSCENE_H
#define GUNSUV_USA_LIBGF_GFSCENE_H

struct gf_screen {
	Float32 screenDist;
	Float32 xAspect;
	Float32 yAspect;
	Float32 gsXSize;
	Float32 gsYSize;
	Float32 zMini;
	Float32 zMax;
	Float32 nearZ;
	Float32 farZ;
	sceVu0FVECTOR clipVolume;
};

typedef gf_screen GF_SCREEN;

struct gf_scene {
	GF_INST_HEAD head;
	sceVu0FMATRIX worldView;
	sceVu0FMATRIX viewScreen;
	sceVu0FMATRIX viewClip;
	sceVu0FMATRIX clipScreen;
	sceVu0FMATRIX worldScreen;
	sceVu0FMATRIX worldClip;
	sceVu0FVECTOR cameraPos;
	GF_FOG fog;
	qword *packet;
};

typedef gf_scene GF_INST_SCENE;
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
