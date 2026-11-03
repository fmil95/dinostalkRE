// STATUS: NOT STARTED

#ifndef SOUND_BUF_H
#define SOUND_BUF_H

#include "common.h"

#define VOBUF_STATUS_EMPTY   0
#define VOBUF_STATUS_TOPDONE 1
#define VOBUF_STATUS_FULL    2

typedef struct { // 0x46000
	/* 0x00000 */ u_char v[0x46000];
} VoData;

typedef struct { // 0xe040
	/* 0x0000 */ int status;
	/* 0x0004 */ int dummy[15];
	/* 0x0040 */ u_int v[2][7168];
} VoTag;

typedef struct { // 0x14
	/* 0x00 */ VoData *data;
	/* 0x04 */ VoTag *tag;
	/* 0x08 */ volatile int write;
	/* 0x0c */ volatile int count;
	/* 0x10 */ int size;
} VoBuf;

int voBufCreate(VoBuf *f, VoData *data, VoTag *tag, int size);
void voBufDelete(VoBuf *f);
int voBufReset(VoBuf *f);
int voBufIsFull(VoBuf *f);
void voBufIncCount(VoBuf *f);
VoData* voBufGetData(VoBuf *f);
int voBufIsEmpty(VoBuf *f);
VoTag* voBufGetTag(VoBuf *f);
VoData* voBufGetAddr(VoBuf *f);
void voBufDecCount(VoBuf *f);

getFIFOindex();
setD3_CHCR();
setD4_CHCR();
scTag2();
viBufCreate();
viBufReset();
viBufBeginPut();
viBufEndPut();
viBufAddDMA();
viBufStopDMA();
viBufRestartDMA();
viBufDelete();
viBufIsActive();
viBufCount();
viBufFlush();
viBufModifyPts();
viBufPutTs();
viBufGetTs();

#endif // SOUND_BUF_H
