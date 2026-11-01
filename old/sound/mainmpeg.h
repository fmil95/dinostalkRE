// STATUS: NOT STARTED

#ifndef SOUND_MAINMPEG_H
#define SOUND_MAINMPEG_H

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
readBufCreate();
readBufDelete();
readBufBeginPut();
readBufEndPut();
readBufBeginGet();
readBufEndGet();
cdvMpegUserProgSet();
cdvMpegUserProgDelete();
cdvMpegSendModeSet();

#endif // SOUND_MAINMPEG_H
