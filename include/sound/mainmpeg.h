// STATUS: NOT STARTED

#ifndef SOUND_MAINMPEG_H
#define SOUND_MAINMPEG_H

#include "common.h"

#define READ_UNIT_SIZE (64 * 1024)

struct read_buf { // 0x10
	/* 0x0 */ u_char *data;
	/* 0x4 */ int put;
	/* 0x8 */ int count;
	/* 0xc */ int size;
};

typedef struct read_buf ReadBuf;

extern int N_Read_Unit;

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
