// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFPOINTLIGHT_H
#define GUNSUV_USA_LIBGF_GFPOINTLIGHT_H

#include "common.h"
#include <libvu0.h>

struct gf_inst;

struct gf_point_light { // 0x10
	/* 0x0 */ struct { // 0x20
		/* 0x0 */ sceVu0FVECTOR paraPosPow;
		/* 0x10 */ sceVu0FVECTOR paraCol;
	} lt[0];
	/* 0x0 */ qword *packet;
};

typedef struct gf_point_light GF_POINT_LIGHT;
extern GF_POINT_LIGHT *gf_trans_point_light;

GF_POINT_LIGHT* GFPointLight_Init(GF_POINT_LIGHT *light);
void GFPointLight_SetPos(GF_POINT_LIGHT *light, Uint32 no, float *v0);
void GFPointLight_SetColor(GF_POINT_LIGHT *light, Uint32 no, float *c0);
qword* GFPointLight_MakePacket(GF_POINT_LIGHT *light, qword *packbuf);
qword* GFPointLight_Draw(qword *packet, GF_POINT_LIGHT *light);
void GFPointLight_SetShape(struct gf_inst *shape, GF_POINT_LIGHT *light);

#endif // GUNSUV_USA_LIBGF_GFPOINTLIGHT_H
