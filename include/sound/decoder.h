// STATUS: NOT STARTED

#ifndef SOUND_DECODER_H
#define SOUND_DECODER_H

#include "common.h"
#include "sound/buf.h"

typedef int sceMpegCbType;

typedef struct { // 0x48
	/* 0x00 */ int width;
	/* 0x04 */ int height;
	/* 0x08 */ int frameCount;
	/* 0x10 */ long pts;
	/* 0x18 */ long dts;
	/* 0x20 */ u_long flags;
	/* 0x28 */ long pts2nd;
	/* 0x30 */ long dts2nd;
	/* 0x38 */ u_long flags2nd;
	/* 0x40 */ void *sys;
} sceMpeg;

typedef struct {
	sceMpegCbType type;
	char *errMessage;
} sceMpegCbDataError;

typedef struct {
	sceMpegCbType type;
	long pts;
	long dts;
} sceMpegCbDataTimeStamp;

typedef struct {
	sceMpegCbType type;
	u_char *header;
	u_char *data;
	u_int len;
	long pts;
	long dts;
} sceMpegCbDataStr;

typedef union {
	sceMpegCbType type;
	sceMpegCbDataError error;
	sceMpegCbDataTimeStamp ts;
	sceMpegCbDataStr str;
} sceMpegCbData;

int sceMpegDelete(sceMpeg *mp);
int sceMpegIsRefBuffEmpty(sceMpeg *mp);
void sceMpegSetDecodeMode(sceMpeg *mp, int ni, int np, int nb);

#define VD_STATE_NORMAL 0
#define VD_STATE_ABORT  1
#define VD_STATE_FLUSH  2
#define VD_STATE_END    3

typedef struct { // 0xb8
	/* 0x00 */ sceMpeg mpeg;
	/* 0x48 */ ViBuf vibuf;
	/* 0xa8 */ u_int state;
	/* 0xac */ int sema;
	/* 0xb0 */ int hid_endimage;
	/* 0xb4 */ int hid_vblank;
} VideoDec;

void videoDecSetDecodeMode(VideoDec *vd, int ni, int np, int nb);
void videoDecBeginPut(VideoDec *vd, u_char **ptr0, int *len0, u_char **ptr1, int *len1);
void videoDecEndPut(VideoDec *vd, int size);
void videoDecReset(VideoDec *vd);
int videoDecDelete(VideoDec *vd);
void videoDecAbort(VideoDec *vd);
u_int videoDecGetState(VideoDec *vd);
u_int videoDecSetState(VideoDec *vd, u_int state);
int videoDecPutTs(VideoDec *vd, long pts_val, long dts_val, u_char *start, int len);
int videoDecInputCount(VideoDec *vd);
int videoDecInputSpaceCount(VideoDec *vd);
int videoDecIsFlushed(VideoDec *vd);
int mpegError(sceMpeg *mp, sceMpegCbDataError *cberror, void *anyData);
int mpegNodata(sceMpeg *mp, sceMpegCbData *cbdata, void *anyData);
int mpegStopDMA(sceMpeg *mp, sceMpegCbData *cbdata, void *anyData);
int mpegRestartDMA(sceMpeg *mp, sceMpegCbData *cbdata, void *anyData);
int mpegTS(sceMpeg *mp, sceMpegCbDataTimeStamp *cbts, void *anyData);

/*
videoDecCreate();
videoDecFlush();
videoDecMain();
decBs0();
cdvMpegChgVolume();
audioDecCreate();
audioDecDelete();
audioDecPause();
audioDecResume();
audioDecStart();
audioDecReset();
audioDecBeginPut();
audioDecEndPut();
audioDecIsPreset();
audioDecSendToIOP();
changeMasterVolume();
*/

#endif // SOUND_DECODER_H
