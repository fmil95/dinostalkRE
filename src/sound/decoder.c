#include "sound/decoder.h"

extern VideoDec videoDec;
extern int printf();
extern char D_00673DE0[];
extern int RotateThreadReadyQueue();
extern int s_volume;
extern void audioDecResume();
extern int RotateThreadReadyQueue();
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

void videoDecSetDecodeMode(VideoDec* vd, int ni, int np, int nb)
{
    sceMpegSetDecodeMode(&vd->mpeg, ni, np, nb);
}

void videoDecBeginPut(VideoDec* vd, u_char** ptr0, int* len0, u_char** ptr1, int* len1)
{
    viBufBeginPut(&vd->vibuf, ptr0, len0, ptr1, len1);
}

void videoDecEndPut(VideoDec* vd, int size)
{
    viBufEndPut(&vd->vibuf, size);
}

void videoDecReset(VideoDec* vd)
{
    vd->state = VD_STATE_NORMAL;
}

int videoDecDelete(VideoDec* vd)
{
    viBufDelete(&vd->vibuf);
    sceMpegDelete(&vd->mpeg);

    vd->state = 0;
    vd->sema = 0;
    vd->hid_endimage = 0;

    return 1;
}

void videoDecAbort(VideoDec* vd)
{
    vd->state = VD_STATE_ABORT;
}

u_int videoDecGetState(VideoDec* vd)
{
    return vd->state;
}

u_int videoDecSetState(VideoDec* vd, u_int state)
{
    u_int old = vd->state;

    vd->state = state;

    return old;
}

int videoDecPutTs(VideoDec* vd, long pts_val, long dts_val, u_char* start, int len)
{
    TimeStamp ts;

    ts.pts = pts_val;
    ts.dts = dts_val;
    ts.pos = start - (u_char*)vd->vibuf.data;
    ts.len = len;

    return viBufPutTs(&videoDec.vibuf, &ts);
}

int videoDecInputCount(VideoDec* vd)
{
    return viBufCount(&vd->vibuf);
}

int videoDecInputSpaceCount(VideoDec* vd)
{
    u_char* ptr0;
    u_char* ptr1;
    int len0, len1;

    videoDecBeginPut(vd, &ptr0, &len0, &ptr1, &len1);

    return len0 + len1;
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecFlush);

int videoDecIsFlushed(VideoDec* vd)
{
    return (videoDecInputCount(vd) == 0) && sceMpegIsRefBuffEmpty(&vd->mpeg);
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", videoDecMain);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", decBs0);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", mpegError);

int mpegNodata(sceMpeg* mp, sceMpegCbData* cbdata, void* anyData)
{
    RotateThreadReadyQueue(2);
    viBufAddDMA(&videoDec.vibuf);

    return 1;
}

int mpegStopDMA(sceMpeg* mp, sceMpegCbData* cbdata, void* anyData)
{
    viBufStopDMA(&videoDec.vibuf);

    return 1;
}

int mpegRestartDMA(sceMpeg* mp, sceMpegCbData* cbdata, void* anyData)
{
    viBufRestartDMA(&videoDec.vibuf);

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
