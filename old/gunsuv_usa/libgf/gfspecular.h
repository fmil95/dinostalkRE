// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFSPECULAR_H
#define GUNSUV_USA_LIBGF_GFSPECULAR_H

struct gf_specular {
	sceVu0FVECTOR vect;
	sceVu0FVECTOR col;
	sceVu0FVECTOR other;
	qword *packet;
};

typedef gf_specular GF_SPECULAR;
extern GF_SPECULAR *gf_trans_specular;

GF_SPECULAR* GFSpecular_Init(GF_SPECULAR *specular);
qword* GFSpecular_MakePacket(GF_SPECULAR *specular, qword *packbuf);
qword* GFSpecular_Draw(GF_SPECULAR *specular, qword *packet);
void GFSpecular_SetVector(GF_SPECULAR *specular, float *vec);
void GFSpecular_SetColor(GF_SPECULAR *specular, float *color);
void GFSpecular_SetParam(GF_SPECULAR *specular, Float32 spec, Float32 diff, Float32 bright);

#endif // GUNSUV_USA_LIBGF_GFSPECULAR_H
