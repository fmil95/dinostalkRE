// STATUS: NOT STARTED

#ifndef SOUND_BUF_H
#define SOUND_BUF_H

#include "common.h"

#define VIBUF_ELM_SIZE 2048
#define VIBUF_SIZE     256
#define VIBUF_TS_SIZE  (VIBUF_SIZE * 2)

typedef struct { // 0x18
	/* 0x00 */ long pts;
	/* 0x08 */ long dts;
	/* 0x10 */ int pos;
	/* 0x14 */ int len;
} TimeStamp;

typedef struct { // 0x24
	/* 0x00 */ u_int d4madr;
	/* 0x04 */ u_int d4tadr;
	/* 0x08 */ u_int d4qwc;
	/* 0x0c */ u_int d4chcr;
	/* 0x10 */ u_int d3madr;
	/* 0x14 */ u_int d3qwc;
	/* 0x18 */ u_int d3chcr;
	/* 0x1c */ u_int ipubp;
	/* 0x20 */ u_int ipuctrl;
} ViDmaEnv;

typedef struct { // 0x60
	/* 0x00 */ u_long128 *data;
	/* 0x04 */ u_long128 *tag;
	/* 0x08 */ int n;
	/* 0x0c */ int dmaStart;
	/* 0x10 */ int dmaN;
	/* 0x14 */ int readBytes;
	/* 0x18 */ int buffSize;
	/* 0x1c */ ViDmaEnv env;
	/* 0x40 */ int sema;
	/* 0x44 */ int isActive;
	/* 0x48 */ long totalBytes;
	/* 0x50 */ TimeStamp *ts;
	/* 0x54 */ int n_ts;
	/* 0x58 */ int count_ts;
	/* 0x5c */ int wt_ts;
} ViBuf;

typedef union {
	u_long128 q;
	u_long l[2];
	u_int i[4];
	u_short s[8];
	u_char c[16];
} QWORD;

int getFIFOindex(ViBuf *f, void *addr);
void setD3_CHCR(u_int val);
void setD4_CHCR(u_int val);
void scTag2(QWORD *q, void *addr, u_int id, u_int qwc);
int viBufCreate(ViBuf *f, u_long128 *data, u_long128 *tag, int size, TimeStamp *ts, int n_ts);
int viBufReset(ViBuf *f);
void viBufBeginPut(ViBuf *f, u_char **ptr0, int *len0, u_char **ptr1, int *len1);
void viBufEndPut(ViBuf *f, int size);
int viBufAddDMA(ViBuf *f);
int viBufStopDMA(ViBuf *f);
int viBufRestartDMA(ViBuf *f);
int viBufDelete(ViBuf *f);
int viBufIsActive(ViBuf *f);
int viBufCount(ViBuf *f);
void viBufFlush(ViBuf *f);

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

viBufModifyPts();
viBufPutTs();
viBufGetTs();

#endif // SOUND_BUF_H
