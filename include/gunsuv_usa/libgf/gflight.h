// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFLIGHT_H
#define GUNSUV_USA_LIBGF_GFLIGHT_H

#include "common.h"
#include <libvu0.h>

struct gf_inst;

struct gf_light { // 0x90
	/* 0x00 */ sceVu0FMATRIX paraVect;
	/* 0x40 */ sceVu0FMATRIX paraCol;
	/* 0x80 */ qword *packet;
};

typedef struct gf_light GF_LIGHT;
extern GF_LIGHT *gf_trans_light;

GF_LIGHT* GFLight_Init(GF_LIGHT *light);
void GFLight_SetVector(GF_LIGHT *light, float *v0, float *v1, float *v2);
void GFLight_SetColor(GF_LIGHT *light, float *c0, float *c1, float *c2, float *amb);
qword* GFLight_MakePacket(GF_LIGHT *light, qword *packbuf);
qword* GFLight_Draw(qword *packet, GF_LIGHT *light);
void GFLight_SetShape(struct gf_inst *shape, GF_LIGHT *light);

#endif // GUNSUV_USA_LIBGF_GFLIGHT_H
