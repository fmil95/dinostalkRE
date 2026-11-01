// STATUS: NOT STARTED

#include "gffog.h"

GF_FOG *gf_trans_fog = NULL;

GF_FOG* GFFog_Init(GF_FOG *fog) {}

qword* GFFog_MakePacket(GF_FOG *fog, qword *packbuf) {}

qword* GFFog_Draw(GF_FOG *fog, qword *packet) {
	qword *cur;
}

Float32 GFFog_SetNear(GF_FOG *fog, Float32 near) {}

Float32 GFFog_SetFar(GF_FOG *fog, Float32 far) {}

Float32 GFFog_SetMin(GF_FOG *fog, Float32 min) {}

Float32 GFFog_SetMax(GF_FOG *fog, Float32 max) {}

void GFFog_SetParam(GF_FOG *fog, Float32 min, Float32 max, Float32 near, Float32 far) {}
