// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFFOG_H
#define GUNSUV_USA_LIBGF_GFFOG_H

#include "common.h"

struct gf_fog { // 0x50
	/* 0x00 */ Float32 min;
	/* 0x04 */ Float32 max;
	/* 0x08 */ Float32 near;
	/* 0x0c */ Float32 far;
	/* 0x10 */ Uint8 col[4];
	/* 0x20 */ sceVu0FVECTOR fogA;
	/* 0x30 */ sceVu0FVECTOR fogB;
	/* 0x40 */ qword *packet;
};

typedef struct gf_fog GF_FOG;
extern GF_FOG *gf_trans_fog;

GF_FOG* GFFog_Init(GF_FOG *fog);
qword* GFFog_MakePacket(GF_FOG *fog, qword *packbuf);
qword* GFFog_Draw(GF_FOG *fog, qword *packet);
Float32 GFFog_SetNear(GF_FOG *fog, Float32 near);
Float32 GFFog_SetFar(GF_FOG *fog, Float32 far);
Float32 GFFog_SetMin(GF_FOG *fog, Float32 min);
Float32 GFFog_SetMax(GF_FOG *fog, Float32 max);
void GFFog_SetParam(GF_FOG *fog, Float32 min, Float32 max, Float32 near, Float32 far);

#endif // GUNSUV_USA_LIBGF_GFFOG_H
