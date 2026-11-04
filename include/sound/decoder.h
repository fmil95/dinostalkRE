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

typedef int (*sceMpegCallback)(sceMpeg *mp, sceMpegCbData *cbdata, void *anyData);

#define sceMpegCbError       0
#define sceMpegCbNodata      1
#define sceMpegCbStopDMA     2
#define sceMpegCbRestartDMA  3
#define sceMpegCbTimeStamp   5

int sceMpegCreate(sceMpeg *mp, u_char *work_area, int work_area_size);
int sceMpegAddCallback(sceMpeg *mp, sceMpegCbType type, sceMpegCallback cb, void *anyData);
int sceMpegDelete(sceMpeg *mp);
int sceMpegIsRefBuffEmpty(sceMpeg *mp);
void sceMpegSetDecodeMode(sceMpeg *mp, int ni, int np, int nb);

#define AU_STATE_INIT   0
#define AU_STATE_PRESET 1
#define AU_STATE_PLAY   2
#define AU_STATE_PAUSE  3

#define AU_HDR_SIZE 40

typedef struct { // 0x20
	/* 0x00 */ char id[4];
	/* 0x04 */ int size;
	/* 0x08 */ int type;
	/* 0x0c */ int rate;
	/* 0x10 */ int ch;
	/* 0x14 */ int interSize;
	/* 0x18 */ int loopStart;
	/* 0x1c */ int loopEnd;
} SpuStreamHeader;

typedef struct { // 0x8
	/* 0x0 */ char id[4];
	/* 0x4 */ int size;
} SpuStreamBody;

typedef struct { // 0x5c
	/* 0x00 */ int state;
	/* 0x04 */ SpuStreamHeader sshd;
	/* 0x24 */ SpuStreamBody ssbd;
	/* 0x2c */ int hdrCount;
	/* 0x30 */ u_char *data;
	/* 0x34 */ int put;
	/* 0x38 */ int count;
	/* 0x3c */ int size;
	/* 0x40 */ int totalBytes;
	/* 0x44 */ int iopBuff;
	/* 0x48 */ int iopBuffSize;
	/* 0x4c */ int iopLastPos;
	/* 0x50 */ int iopPausePos;
	/* 0x54 */ int totalBytesSent;
	/* 0x58 */ int iopZero;
} AudioDec;

int audioDecCreate(AudioDec *ad, u_char *buff, int buffSize, int iopBuffSize);
int audioDecDelete(AudioDec *ad);
int audioDecPause(AudioDec *ad);
int audioDecResume(AudioDec *ad);
int audioDecReset(AudioDec *ad);
void audioDecBeginPut(AudioDec *ad, u_char **ptr0, int *len0, u_char **ptr1, int *len1);
void audioDecEndPut(AudioDec *ad, int size);
int audioDecIsPreset(AudioDec *ad);

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

int videoDecCreate(VideoDec *vd, u_char *mpegWork, int mpegWorkSize, u_long128 *data, u_long128 *tag, int tagSize, TimeStamp *pts, int n_pts);
void videoDecMain(VideoDec *vd);
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
audioDecStart();
audioDecSendToIOP();
changeMasterVolume();
*/

#endif // SOUND_DECODER_H
