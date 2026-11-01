// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFPACK_H
#define GUNSUV_USA_LIBGF_GFPACK_H

struct gf_packet {
	qword *top;
	qword *cur;
	Sint32 size;
};

typedef gf_packet GF_PACKET;
void GFPack_InitBuf(GF_PACKET *pm, qword *p, Sint32 size);
void GFPack_ResetBuf(GF_PACKET *pm);
qword* GFPacket_Add(qword *cur, qword *packet);
void GFPacket_KickDma(qword *p);

#endif // GUNSUV_USA_LIBGF_GFPACK_H
