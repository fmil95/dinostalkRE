// STATUS: NOT STARTED

#include "gflight.h"

GF_LIGHT *gf_trans_light = NULL;

GF_LIGHT* GFLight_Init(GF_LIGHT *light) {
	sceVu0FMATRIX unit;
	static sceVu0FVECTOR zero = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
}

void GFLight_SetVector(GF_LIGHT *light, float *v0, float *v1, float *v2) {}

void GFLight_SetColor(GF_LIGHT *light, float *c0, float *c1, float *c2, float *amb) {}

qword* GFLight_MakePacket(GF_LIGHT *light, qword *packbuf) {}

qword* GFLight_Draw(qword *packet, GF_LIGHT *light) {
	qword *cur;
	qword *src;
	Sint32 i;
}

void GFLight_SetShape(GF_INST_SHAPE *shape, GF_LIGHT *light) {}
