#include "common.h"

extern int s_volume;
extern void audioDecResume();
extern void sceMpegSetDecodeMode();
extern void viBufBeginPut();
extern void viBufEndPut();
extern void viBufCount();
extern char D_00652728[];
extern int viBufRestartDMA();
extern int viBufStopDMA();
extern int RotateThreadReadyQueue();
extern int viBufAddDMA();
extern int remoteSema;
extern int remoteSema;
extern void WaitSema();
extern void sceSdRemote();
extern void sceSdRemote();
extern void SignalSema();
extern int s_vol_l0;
extern int s_vol_r0;
extern int s_vol_l1;
extern int s_vol_r1;

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

int mpegNodata()
{
    RotateThreadReadyQueue(2);
    viBufAddDMA(D_00652728);
    return 1;
}

int mpegStopDMA()
{
    viBufStopDMA(D_00652728);
    return 1;
}

int mpegRestartDMA()
{
    viBufRestartDMA(D_00652728);
    return 1;
}

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

void popMasterVolume()
{
    WaitSema(remoteSema);
    sceSdRemote(1, (0 | 0x8020), 0x980, s_vol_l0);
    sceSdRemote(1, (0 | 0x8020), 0xa80, s_vol_r0);
    sceSdRemote(1, (0 | 0x8020), 0x981, s_vol_l1);
    sceSdRemote(1, (0 | 0x8020), 0xa81, s_vol_r1);
    SignalSema(remoteSema);
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", changeMasterVolume);

void changeInputVolume(int a)
{
    WaitSema(remoteSema);
    sceSdRemote(1, (0 | 0x8010), 0xf80, a);
    sceSdRemote(1, (0 | 0x8010), 0x1080, a);
    SignalSema(remoteSema);
}
