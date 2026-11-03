// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFMICRO_H
#define GUNSUV_USA_LIBGF_GFMICRO_H

#include "common.h"

struct gf_micro { // 0xc
	/* 0x0 */ Uint32 *micro;
	/* 0x4 */ qword *packet;
	/* 0x8 */ Uint32 workSize;
};

typedef struct gf_micro GF_MICRO;
extern GF_MICRO *gf_trans_micro;

GF_MICRO* GFMicro_Init(GF_MICRO *micro);
qword* GFMicro_MakePacket(GF_MICRO *micro, qword *packbuf, Uint32 *dsmcode, Sint32 worksize);
qword* GFMicro_Draw(qword *packet, GF_MICRO *micro);

#endif // GUNSUV_USA_LIBGF_GFMICRO_H
