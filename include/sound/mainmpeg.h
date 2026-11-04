// STATUS: NOT STARTED

#ifndef SOUND_MAINMPEG_H
#define SOUND_MAINMPEG_H

#include "common.h"
#include "sound/decoder.h"

#define READ_UNIT_SIZE (64 * 1024)

struct read_buf { // 0x10
	/* 0x0 */ u_char *data;
	/* 0x4 */ int put;
	/* 0x8 */ int count;
	/* 0xc */ int size;
};

typedef struct read_buf ReadBuf;

typedef struct { // 0x24
	/* 0x00 */ u_int lsn;
	/* 0x04 */ u_int size;
	/* 0x08 */ char name[16];
	/* 0x18 */ u_char date[8];
	/* 0x20 */ u_char pad[4];
} sceCdlFILE;

typedef struct { // 0x3
	/* 0x0 */ u_char trycount;
	/* 0x1 */ u_char spindlctrl;
	/* 0x2 */ u_char datapattern;
} sceCdRMode;

typedef struct { // 0x34
	/* 0x00 */ int isOnCD;
	/* 0x04 */ int size;
	/* 0x08 */ sceCdlFILE fp;
	/* 0x2c */ u_char *iopBuf;
	/* 0x30 */ int fd;
} StrFile;

extern int N_Read_Unit;

int strFileOpen(StrFile *file, char *filename);
int readMpeg(VideoDec *vd, ReadBuf *rb, StrFile *file);

void readBufCreate(ReadBuf *b);
void readBufDelete(ReadBuf *b);
int readBufBeginPut(ReadBuf *b, u_char **ptr);
int readBufEndPut(ReadBuf *b, int size);
int readBufBeginGet(ReadBuf *b, u_char **ptr);
int readBufEndGet(ReadBuf *b, int size);

/*
cdvMpegInit();
cdvMpegSkipSet();
cdvMpegSkipSetAll();
cdvMpegSkipReset();
cdvMpegSkipResetAll();
cdvMpegPadUseSet();
cdvMpegRestoreSet();
cdvMpegSoundSet();
cdvMpegSoundSMSet();
cdvMpegGetFrameCount();
cdvMpegPlayEnd();
PlayMpeg();
ResetMpeg();
proceedAudio();
videoCallback();
pcmCallback();
cdvMpegUserProgSet();
cdvMpegUserProgDelete();
cdvMpegSendModeSet();
*/

#endif // SOUND_MAINMPEG_H
