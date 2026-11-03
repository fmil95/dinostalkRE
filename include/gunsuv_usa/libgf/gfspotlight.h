// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFSPOTLIGHT_H
#define GUNSUV_USA_LIBGF_GFSPOTLIGHT_H

#include "common.h"
#include <libvu0.h>

struct gf_inst;

struct gf_spot_light { // 0x10
	/* 0x0 */ struct { // 0x30
		/* 0x0 */ sceVu0FVECTOR paraPosPow;
		/* 0x10 */ sceVu0FVECTOR paraCol;
		/* 0x20 */ sceVu0FVECTOR paraVect;
	} lt[0];
	/* 0x0 */ qword *packet;
};

typedef struct gf_spot_light GF_SPOT_LIGHT;
extern GF_SPOT_LIGHT *gf_trans_spot_light;

GF_SPOT_LIGHT* GFSpotLight_Init(GF_SPOT_LIGHT *light);
void GFSpotLight_SetPos(GF_SPOT_LIGHT *light, Uint32 no, float *v0);
void GFSpotLight_SetColor(GF_SPOT_LIGHT *light, Uint32 no, float *c0);
void GFSpotLight_SetVector(GF_SPOT_LIGHT *light, Uint32 no, float *v0);
qword* GFSpotLight_MakePacket(GF_SPOT_LIGHT *light, qword *packbuf);
qword* GFSpotLight_Draw(qword *packet, GF_SPOT_LIGHT *light);
void GFSpotLight_SetShape(struct gf_inst *shape, GF_SPOT_LIGHT *light);

#endif // GUNSUV_USA_LIBGF_GFSPOTLIGHT_H
