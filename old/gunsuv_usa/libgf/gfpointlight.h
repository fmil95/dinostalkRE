// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFPOINTLIGHT_H
#define GUNSUV_USA_LIBGF_GFPOINTLIGHT_H

struct gf_point_light {
	struct {
		sceVu0FVECTOR paraPosPow;
		sceVu0FVECTOR paraCol;
	} lt[0];
	qword *packet;
};

typedef gf_point_light GF_POINT_LIGHT;
extern GF_POINT_LIGHT *gf_trans_point_light;

GF_POINT_LIGHT* GFPointLight_Init(GF_POINT_LIGHT *light);
void GFPointLight_SetPos(GF_POINT_LIGHT *light, Uint32 no, float *v0);
void GFPointLight_SetColor(GF_POINT_LIGHT *light, Uint32 no, float *c0);
qword* GFPointLight_MakePacket(GF_POINT_LIGHT *light, qword *packbuf);
qword* GFPointLight_Draw(qword *packet, GF_POINT_LIGHT *light);
void GFPointLight_SetShape(GF_INST_SHAPE *shape, GF_POINT_LIGHT *light);

#endif // GUNSUV_USA_LIBGF_GFPOINTLIGHT_H
