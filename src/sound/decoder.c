#include "sound/decoder.h"

#define min(x, y) (((x) > (y)) ? (y) : (x))

extern VideoDec videoDec;
extern VoBuf voBuf;
extern int decBs0(VideoDec* vd);
extern void* memcpy(void* dst, const void* src, unsigned int n);
extern int printf();
extern char D_00673DE0[];
extern int RotateThreadReadyQueue();
extern int s_volume;
extern int RotateThreadReadyQueue();
extern int remoteSema;
extern void WaitSema();
extern int sceSdRemote();
extern void SignalSema();
extern int s_vol_l0;
extern int s_vol_r0;
extern int s_vol_l1;
extern int s_vol_r1;
extern char _0_buf[];
extern int sceSifAllocIopHeap();
extern int sceSifFreeIopHeap();
extern void* memset(void* dst, int c, unsigned int n);

static int sendToIOP(int dst, u_char* src, int size);
void pushMasterVolume();
void popMasterVolume();
static void changeMasterVolume(u_int val);
void changeInputVolume(int a);

int videoDecCreate(VideoDec* vd, u_char* mpegWork, int mpegWorkSize, u_long128* data, u_long128* tag, int tagSize, TimeStamp* pts, int n_pts)
{
    sceMpegCreate(&vd->mpeg, mpegWork, mpegWorkSize);

    sceMpegAddCallback(&vd->mpeg, sceMpegCbError, (sceMpegCallback)mpegError, NULL);
    sceMpegAddCallback(&vd->mpeg, sceMpegCbNodata, mpegNodata, NULL);
    sceMpegAddCallback(&vd->mpeg, sceMpegCbStopDMA, mpegStopDMA, NULL);
    sceMpegAddCallback(&vd->mpeg, sceMpegCbRestartDMA, mpegRestartDMA, NULL);
    sceMpegAddCallback(&vd->mpeg, sceMpegCbTimeStamp, (sceMpegCallback)mpegTS, NULL);

    videoDecReset(vd);

    viBufCreate(&vd->vibuf, data, tag, tagSize, pts, n_pts);

    return 0;
}

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

void videoDecMain(VideoDec* vd)
{
    viBufReset(&vd->vibuf);

    voBufReset(&voBuf);

    decBs0(vd);

    while (voBuf.count)
    {
    }

    videoDecSetState(vd, VD_STATE_END);
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", decBs0);

int mpegError(sceMpeg* mp, sceMpegCbDataError* cberror, void* anyData)
{
    printf(D_00673DE0, cberror->errMessage);

    return 1;
}

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

int mpegTS(sceMpeg* mp, sceMpegCbDataTimeStamp* cbts, void* anyData)
{
    TimeStamp ts;

    viBufGetTs(&videoDec.vibuf, &ts);
    cbts->pts = ts.pts;
    cbts->dts = ts.dts;

    return 1;
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", cpy2area);

void cdvMpegChgVolume(int v)
{
    s_volume = v;
}

int audioDecCreate(AudioDec* ad, u_char* buff, int buffSize, int iopBuffSize)
{
    ad->data = buff;
    ad->size = buffSize;
    ad->state = AU_STATE_INIT;
    ad->hdrCount = 0;
    ad->put = 0;
    ad->count = 0;
    ad->totalBytes = 0;
    ad->totalBytesSent = 0;

    ad->iopBuffSize = iopBuffSize;
    ad->iopLastPos = 0;
    ad->iopPausePos = 0;

    ad->iopBuff = sceSifAllocIopHeap(iopBuffSize);

    if (ad->iopBuff < 0)
    {
        return 1;
    }

    ad->iopZero = sceSifAllocIopHeap(0x800);

    if (ad->iopZero < 0)
    {
        return 1;
    }

    memset(_0_buf, 0, 0x800);
    sendToIOP(ad->iopZero, _0_buf, 0x800);

    pushMasterVolume();
    changeMasterVolume(s_volume);

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecDelete);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecPause);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecResume);

void audioDecStart(AudioDec* ad)
{
    audioDecResume(ad);
}

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecReset);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecBeginPut);

INCLUDE_ASM("asm/nonmatchings/sound/decoder", audioDecEndPut);

int audioDecIsPreset(AudioDec* ad)
{
    return ad->totalBytesSent >= ad->iopBuffSize;
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
