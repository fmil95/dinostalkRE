#include "common.h"

extern int s_volume;
extern void audioDecResume();
extern void sceMpegSetDecodeMode();
extern void viBufBeginPut();
extern void viBufEndPut();
extern void viBufCount();

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecCreate);

void videoDecSetDecodeMode()
{
    sceMpegSetDecodeMode();
}

void videoDecBeginPut(void* a)
{
    viBufBeginPut((char*)a + 0x48);
}

void videoDecEndPut(void* a)
{
    viBufEndPut((char*)a + 0x48);
}

void videoDecReset(void* p)
{
    STRUCT_OFFSET(p, 0xA8, int) = 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecDelete);

void videoDecAbort(void* a)
{
    STRUCT_OFFSET(a, 0xA8, int) = 1;
}

int videoDecGetState(void* p)
{
    return STRUCT_OFFSET(p, 0xA8, int);
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecSetState);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecPutTs);

void videoDecInputCount(void* a)
{
    viBufCount((char*)a + 0x48);
}

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

void audioDecStart()
{
    audioDecResume();
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecReset);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecBeginPut);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecEndPut);

int audioDecIsPreset(void* a)
{
    return ((STRUCT_OFFSET(a, 0x54, int) < STRUCT_OFFSET(a, 0x48, int)) ^ 0x1);
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecSendToIOP);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", iopGetArea);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", ConvertMONO);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", sendToIOP2area);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", sendToIOP);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", pushMasterVolume);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", popMasterVolume);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", changeMasterVolume);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", changeInputVolume);
