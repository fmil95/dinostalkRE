// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFSPRITE_H
#define GUNSUV_USA_LIBGF_GFSPRITE_H

#include "common.h"
#include "gunsuv_usa/libgf/gfinstance.h"
#include "gunsuv_usa/libgf/gfmicro.h"
#include "gunsuv_usa/libgf/gflight.h"

struct gf_sprite { // 0x130
	/* 0x000 */ GF_INST_HEAD head;
	/* 0x100 */ GF_MICRO *micro;
	/* 0x104 */ GF_LIGHT *light;
	/* 0x108 */ Float32 col[4];
	/* 0x118 */ Uint32 texIdx;
	/* 0x11c */ Uint32 prim;
	/* 0x120 */ Uint32 flag;
};

typedef struct gf_sprite GF_INST_SPRITE;
extern Float32 test_data[0];

void GFSprite_MakeInstance(GF_INST_SPRITE *inst);
void GFSprite_Eval(GF_INST_SPRITE *inst);
qword* GFSprite_Draw(qword *packet, GF_INST_SPRITE *inst);

#endif // GUNSUV_USA_LIBGF_GFSPRITE_H
