// STATUS: NOT STARTED

#include "gfpointlight.h"

GF_POINT_LIGHT *gf_trans_point_light = NULL;

GF_POINT_LIGHT* GFPointLight_Init(GF_POINT_LIGHT *light) {}

void GFPointLight_SetPos(GF_POINT_LIGHT *light, Uint32 no, float *v0) {}

void GFPointLight_SetColor(GF_POINT_LIGHT *light, Uint32 no, float *c0) {}

qword* GFPointLight_MakePacket(GF_POINT_LIGHT *light, qword *packbuf) {}

qword* GFPointLight_Draw(qword *packet, GF_POINT_LIGHT *light) {}

void GFPointLight_SetShape(GF_INST_SHAPE *shape, GF_POINT_LIGHT *light) {}
