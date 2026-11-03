// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_PMT_H
#define GUNSUV_USA_LIBGF_PMT_H

#include "common.h"

struct pmt_header { // 0x10
	/* 0x0 */ Uint32 magic;
	/* 0x4 */ Uint32 version;
	/* 0x8 */ Sint32 shapeNum;
	/* 0xc */ Sint32 free;
};

typedef struct pmt_header PmtHEADER;

Sint32 GFPmt_IsPmtData(Uint32 *pmt);

#endif // GUNSUV_USA_LIBGF_PMT_H
