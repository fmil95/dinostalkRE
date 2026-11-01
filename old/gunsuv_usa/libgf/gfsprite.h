// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFSPRITE_H
#define GUNSUV_USA_LIBGF_GFSPRITE_H

struct gf_sprite {
	GF_INST_HEAD head;
	GF_MICRO *micro;
	GF_LIGHT *light;
	Float32 col[4];
	Uint32 texIdx;
	Uint32 prim;
	Uint32 flag;
};

typedef gf_sprite GF_INST_SPRITE;
extern Float32 test_data[0];

void GFSprite_MakeInstance(GF_INST_SPRITE *inst);
void GFSprite_Eval(GF_INST_SPRITE *inst);
qword* GFSprite_Draw(qword *packet, GF_INST_SPRITE *inst);

#endif // GUNSUV_USA_LIBGF_GFSPRITE_H
