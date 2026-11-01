// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFMICRO_H
#define GUNSUV_USA_LIBGF_GFMICRO_H

struct gf_micro {
	Uint32 *micro;
	qword *packet;
	Uint32 workSize;
};

typedef gf_micro GF_MICRO;
extern GF_MICRO *gf_trans_micro;

GF_MICRO* GFMicro_Init(GF_MICRO *micro);
qword* GFMicro_MakePacket(GF_MICRO *micro, qword *packbuf, Uint32 *dsmcode, Sint32 worksize);
qword* GFMicro_Draw(qword *packet, GF_MICRO *micro);

#endif // GUNSUV_USA_LIBGF_GFMICRO_H
