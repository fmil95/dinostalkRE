// STATUS: NOT STARTED

#include "gfscene.h"

GF_INST_SCENE *gf_trans_scene = NULL;

GF_INST_SCENE* GFScene_MakeInstance(GF_INST_SCENE *scene, GF_INSTANCE *parent) {
	sceVu0FMATRIX unit;
}

void GFScene_SetViewScreen(float *view[4], GF_SCREEN *screen) {
	Float32 az;
	Float32 cz;
	sceVu0FMATRIX m;
	sceVu0FMATRIX mt;
}

void GFScene_SetViewClip(float *view[4], GF_SCREEN *screen) {
	Float32 gsx;
	Float32 gsy;
}

void GFScene_SetClipScreen(float *clip[4], GF_SCREEN *screen) {
	Float32 gsx;
	Float32 gsy;
}

void GFScene_SetScreen(GF_INST_SCENE *scene, GF_SCREEN *screen) {}

qword* GFScene_MakePacket(GF_INST_SCENE *scene, qword *packbuf) {}

void GFScene_SetWorldView(GF_INST_SCENE *scene, float *m[4]) {}

void GFScene_SetCameraPos(GF_INST_SCENE *scene, float *pos) {}

void GFScene_Eval(GF_INST_SCENE *scene) {}

qword* GFScene_Draw(qword *packet, GF_INST_SCENE *scene) {
	qword *cur;
	qword *src;
	Sint32 i;
}
