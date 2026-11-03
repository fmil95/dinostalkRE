// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFPACK_H
#define GUNSUV_USA_LIBGF_GFPACK_H

#include "common.h"

struct gf_packet { // 0xc
	/* 0x0 */ qword *top;
	/* 0x4 */ qword *cur;
	/* 0x8 */ Sint32 size;
};

typedef struct gf_packet GF_PACKET;
void GFPack_InitBuf(GF_PACKET *pm, qword *p, Sint32 size);
void GFPack_ResetBuf(GF_PACKET *pm);
qword* GFPacket_Add(qword *cur, qword *packet);
void GFPacket_KickDma(qword *p);

#endif // GUNSUV_USA_LIBGF_GFPACK_H
