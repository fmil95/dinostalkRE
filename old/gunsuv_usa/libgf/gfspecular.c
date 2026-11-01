// STATUS: NOT STARTED

#include "gfspecular.h"

GF_SPECULAR *gf_trans_specular = NULL;

GF_SPECULAR* GFSpecular_Init(GF_SPECULAR *specular) {
	static sceVu0FVECTOR zero = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
}

qword* GFSpecular_MakePacket(GF_SPECULAR *specular, qword *packbuf) {}

qword* GFSpecular_Draw(GF_SPECULAR *specular, qword *packet) {}

void GFSpecular_SetVector(GF_SPECULAR *specular, float *vec) {}

void GFSpecular_SetColor(GF_SPECULAR *specular, float *color) {}

void GFSpecular_SetParam(GF_SPECULAR *specular, Float32 spec, Float32 diff, Float32 bright) {}
