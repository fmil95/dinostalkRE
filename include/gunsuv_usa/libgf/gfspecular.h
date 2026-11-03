// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFSPECULAR_H
#define GUNSUV_USA_LIBGF_GFSPECULAR_H

#include "common.h"

struct gf_specular { // 0x40
	/* 0x00 */ sceVu0FVECTOR vect;
	/* 0x10 */ sceVu0FVECTOR col;
	/* 0x20 */ sceVu0FVECTOR other;
	/* 0x30 */ qword *packet;
};

typedef struct gf_specular GF_SPECULAR;
extern GF_SPECULAR *gf_trans_specular;

GF_SPECULAR* GFSpecular_Init(GF_SPECULAR *specular);
qword* GFSpecular_MakePacket(GF_SPECULAR *specular, qword *packbuf);
qword* GFSpecular_Draw(GF_SPECULAR *specular, qword *packet);
void GFSpecular_SetVector(GF_SPECULAR *specular, float *vec);
void GFSpecular_SetColor(GF_SPECULAR *specular, float *color);
void GFSpecular_SetParam(GF_SPECULAR *specular, Float32 spec, Float32 diff, Float32 bright);

#endif // GUNSUV_USA_LIBGF_GFSPECULAR_H
