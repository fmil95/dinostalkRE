// STATUS: NOT STARTED

#ifndef SOUND_DECODER_H
#define SOUND_DECODER_H

videoDecCreate();
videoDecSetDecodeMode();
videoDecBeginPut();
videoDecEndPut();
videoDecReset();
videoDecDelete();
videoDecAbort();
videoDecGetState();
videoDecSetState();
videoDecPutTs();
videoDecInputCount();
videoDecInputSpaceCount();
videoDecFlush();
videoDecIsFlushed();
videoDecMain();
decBs0();
mpegError();
mpegNodata();
mpegStopDMA();
mpegRestartDMA();
mpegTS();
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

#endif // SOUND_DECODER_H
