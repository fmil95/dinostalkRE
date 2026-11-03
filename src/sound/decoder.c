#include "common.h"

extern int s_volume;

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecCreate);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecSetDecodeMode);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecBeginPut);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecEndPut);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecReset);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecDelete);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecAbort);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecGetState);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecSetState);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecPutTs);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecInputCount);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecInputSpaceCount);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecFlush);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecIsFlushed);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecMain);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", decBs0);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", mpegError);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", mpegNodata);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", mpegStopDMA);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", mpegRestartDMA);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", mpegTS);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", cpy2area);

void cdvMpegChgVolume(int v)
{
    s_volume = v;
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecCreate);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecDelete);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecPause);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecResume);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecStart);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecReset);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecBeginPut);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecEndPut);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecIsPreset);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecSendToIOP);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", iopGetArea);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", ConvertMONO);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", sendToIOP2area);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", sendToIOP);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", pushMasterVolume);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", popMasterVolume);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", changeMasterVolume);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", changeInputVolume);
