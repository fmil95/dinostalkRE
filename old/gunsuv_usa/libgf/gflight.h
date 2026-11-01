// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFLIGHT_H
#define GUNSUV_USA_LIBGF_GFLIGHT_H

struct gf_light {
	sceVu0FMATRIX paraVect;
	sceVu0FMATRIX paraCol;
	qword *packet;
};

typedef gf_light GF_LIGHT;
extern GF_LIGHT *gf_trans_light;

GF_LIGHT* GFLight_Init(GF_LIGHT *light);
void GFLight_SetVector(GF_LIGHT *light, float *v0, float *v1, float *v2);
void GFLight_SetColor(GF_LIGHT *light, float *c0, float *c1, float *c2, float *amb);
qword* GFLight_MakePacket(GF_LIGHT *light, qword *packbuf);
qword* GFLight_Draw(qword *packet, GF_LIGHT *light);
void GFLight_SetShape(GF_INST_SHAPE *shape, GF_LIGHT *light);

#endif // GUNSUV_USA_LIBGF_GFLIGHT_H
