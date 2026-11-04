#include "sound/mainmpeg.h"
#include "sound/disp.h"

#define min(x, y) (((x) > (y)) ? (y) : (x))
#define UncAddr(p) ((void*)(((u_int)(p) & 0x0FFFFFFF) | 0x20000000))

extern int sceCdDiskReady(int mode);
extern void* sceSifAllocIopHeap(int size);
extern int sceCdStInit(u_int bufmax, u_int bankmax, u_int iop_bufaddr);
extern int sceCdSearchFile(sceCdlFILE* fp, const char* name);
extern int sceCdStStart(u_int lbn, sceCdRMode* mode);
extern int sceCdStRead(u_int sectors, u_int* buf, u_int mode, u_int* err);
extern int printf();
extern int TerminateThread();
extern int DeleteThread();
extern int DisableDmac();
extern int EnableDmac();
extern int RemoveDmacHandler();
extern int sceGsSyncVCallback();
extern void dispDelete();

extern char D_0066CD88[];

extern int start_sec;
extern int frame_cnt;
extern int writerest;
extern char abort_flg;
extern char audio_dec_flg;
extern char err_sts;
extern char init_flg;
extern int GS_Send_Flg;
extern int mono_flg;
extern int isWithAudio;
extern int UserProg;
extern int videoDecTh;
extern int defaultTh;
extern int userTh;
extern int dma_flg;
extern int save_func;
extern PadSkip pad_00857400[];
extern Display display;
extern VoBuf voBuf;
extern AudioDec audioDec;
extern VideoDec videoDec;
extern ReadBuf readBuf;
extern StrFile infile;

struct ThreadParam { int status; void* entry; void* stack; int stackSize; void* gpReg; int initPriority; int currentPriority; u_int attr; u_int option; int waitType; int waitId; int wakeupCount; };
struct SemaParam { int count; int maxCount; int initCount; int waitThreads; int attr; int option; };

extern int CreateSema();
extern int DeleteSema();
extern int GetThreadId();
extern int ReferThreadStatus();
extern int ChangeThreadPriority();
extern int RotateThreadReadyQueue();
extern int StartThread();
extern int sceGsSyncPath();
extern int remoteSema;
extern int mpeg_sts;
extern int myTh;
extern int initAll(char* bsfilename, int w, int h, char flag);
extern void termAll();

static int copy2area(u_char* pd0, int d0, u_char* pd1, int d1, u_char* ps0, int s0, u_char* ps1, int s1);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegInit);

int PortSlotCheck(int port, int slot)
{
    if (port < 2 && slot < 4)
    {
        return 0;
    }

    return 1;
}

void cdvMpegSkipSet(int port, int slot, u_short mask, int flag)
{
    if (PortSlotCheck(port, slot))
    {
        return;
    }

    if (flag)
    {
        pad_00857400[port * 4 + slot].skip |= mask;
    }
    else
    {
        pad_00857400[port * 4 + slot].skip &= ~mask;
    }
}

void cdvMpegSkipSetAll(u_short mask, int flag)
{
    int port;
    int slot;

    for (port = 0; port < 2; port++)
    {
        for (slot = 0; slot < 4; slot++)
        {
            cdvMpegSkipSet(port, slot, mask, flag);
        }
    }
}

void cdvMpegSkipReset(int port, int slot)
{
    if (PortSlotCheck(port, slot) == 0)
    {
        pad_00857400[port * 4 + slot].skip = 0;
    }
}

void cdvMpegSkipResetAll()
{
    int port;
    int slot;

    for (port = 0; port < 2; port++)
    {
        for (slot = 0; slot < 4; slot++)
        {
            cdvMpegSkipReset(port, slot);
        }
    }
}

void cdvMpegPadUseSet(int port, int slot, int use)
{
    if (PortSlotCheck(port, slot) == 0)
    {
        pad_00857400[port * 4 + slot].use = use;

        if (use)
        {
            pad_00857400[port * 4 + slot].skip = 0;
        }
    }
}

void cdvMpegRestoreSet(char v)
{
    err_sts = v;
}

void cdvMpegSoundSet(int v)
{
    isWithAudio = v;
}

void cdvMpegSoundSMSet(int v)
{
    mono_flg = v;
}

int cdvMpegGetFrameCount()
{
    return frame_cnt;
}

void cdvMpegPlayEnd()
{
    if (writerest > 0x40000)
    {
        abort_flg = 1;
    }
}

extern char D_0066CC90[];
extern char D_0066CCA0[];
extern char D_0066CCB8[];
extern int sceGsSyncV();

int PlayMpeg(char* name, int w, int h, char flag)
{
    struct ThreadParam st;
    struct SemaParam sema;
    int ret;
    int pri;

    if (init_flg)
    {
        sema.initCount = 1;
        sema.maxCount = 1;
        remoteSema = CreateSema(&sema);

        mpeg_sts = 0;
        defaultTh = 0;
        videoDecTh = 0;
        userTh = 0;
        abort_flg = 0;
        audio_dec_flg = 0;
        frame_cnt = 0;

        ret = initAll(name, w, h, flag);
        printf(D_0066CC90, ret);

        if (ret == 0)
        {
            myTh = GetThreadId();
            ReferThreadStatus(myTh, &st);
            pri = st.currentPriority;
            ChangeThreadPriority(myTh, 1);
            StartThread(defaultTh, 0);
            StartThread(videoDecTh, &videoDec);
            ChangeThreadPriority(myTh, 3);
            RotateThreadReadyQueue(2);
            printf(D_0066CCA0, ReferThreadStatus(defaultTh, 0));
            sceGsSyncPath(0, 0);
            sceGsSyncV(0);
            ChangeThreadPriority(myTh, pri);
        }

        printf(D_0066CC90, ret);
        termAll();
        printf(D_0066CCB8, ret);
        DeleteSema(remoteSema);

        if (ret == 0 && abort_flg)
        {
            return abort_flg + 0x128;
        }

        return ret;
    }

    return 0x120;
}

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readMpeg);

int isAudioOK()
{
    return isWithAudio ? audioDecIsPreset(&audioDec) : 1;
}

extern void* sceGsGetGParam();
extern int sceGsSyncV(int mode);
extern int sceGsSyncVCallback();
extern int dispCreate(Display* d, int fb_w, int fb_h);
extern void dispClear(Display* d, u_int val);
extern void sceMpegInit();
extern void sceSdRemoteInit();
extern int sceMpegAddStrCallback();
extern int CreateThread();
extern int StartThread();
extern int AddDmacHandler();
extern int videoCallback(sceMpeg* mp, sceMpegCbDataStr* str, void* data);
extern int pcmCallback(sceMpeg* mp, sceMpegCbDataStr* str, void* data);
extern int vblankHandler(int val);
extern int handler_endimage(int val);
extern void defMain();
extern void UserThread();
extern char defStack[];
extern char videoDecStack[];
extern char userStack[];
extern int _gp;
extern u_char* mpegWork;
extern u_long128* viBufData;
extern u_long128* viBufTag;
extern int Vibuf_Size;
extern TimeStamp* timeStamp;
extern int t_Size;
extern u_char* audioBuff;
extern int sd_Size;
extern VoData* voBufData;
extern VoTag* voBufTag;
extern int N_Vobuf;

int initAll(char* bsfilename, int w, int h, char flag)
{
    struct ThreadParam th_param;
    int ret;
    int* gp;

    dma_flg = 1;

    gp = sceGsGetGParam();
    sceGsSyncV(0);
    save_func = gp[2];
    sceGsSyncVCallback(0);

    if (dispCreate(&display, w, h))
    {
        return 0x121;
    }

    dispClear(&display, 0x80000000);

    *(volatile u_int*)0x1000E000 = *(volatile u_int*)0x1000E000 | 0x3;
    *(volatile u_int*)0x1000E010 = 0x4;

    readBufCreate(&readBuf);

    sceMpegInit();
    videoDecCreate(&videoDec, mpegWork, 0x50368, viBufData, viBufTag, Vibuf_Size, timeStamp, t_Size);

    sceSdRemoteInit();

    if (audioDecCreate(&audioDec, audioBuff, sd_Size << 10, 0x3000))
    {
        return 0x122;
    }

    sceMpegAddStrCallback(&videoDec.mpeg, 0, 0, (sceMpegCallback)videoCallback, &readBuf);

    if (isWithAudio)
    {
        sceMpegAddStrCallback(&videoDec.mpeg, 2, 0, (sceMpegCallback)pcmCallback, &readBuf);
    }

    {
        VoData* vd = UncAddr(voBufData);
        voBufCreate(&voBuf, vd, voBufTag, N_Vobuf);
    }

    th_param.entry = defMain;
    th_param.stack = defStack;
    th_param.stackSize = 0x800;
    th_param.initPriority = 2;
    th_param.gpReg = &_gp;
    th_param.option = 0;
    defaultTh = CreateThread(&th_param);

    th_param.entry = videoDecMain;
    th_param.stack = videoDecStack;
    th_param.stackSize = 0x4000;
    th_param.initPriority = 2;
    th_param.gpReg = &_gp;
    th_param.option = 0;
    videoDecTh = CreateThread(&th_param);

    if (UserProg)
    {
        th_param.entry = UserThread;
        th_param.stack = userStack;
        th_param.stackSize = 0x4000;
        th_param.initPriority = 1;
        th_param.gpReg = &_gp;
        th_param.option = 0;
        userTh = CreateThread(&th_param);
        StartThread(userTh, 0);
    }

    while (ret = strFileOpen(&infile, bsfilename))
    {
        switch (ret)
        {
        case 1:
            return 0x123;
        case 3:
            return 0x124;
        case 2:
            return 0x125;
        case 4:
            return 0x126;
        }
    }

    sceGsSyncVCallback(vblankHandler);

    videoDec.hid_endimage = AddDmacHandler(2, handler_endimage, 0);

    if (videoDec.hid_endimage == -1)
    {
        return 0x128;
    }

    dma_flg = EnableDmac(2);

    return 0;
}


void termAll()
{
    readBufDelete(&readBuf);
    voBufDelete(&voBuf);

    if (videoDecTh)
    {
        TerminateThread(videoDecTh);
        DeleteThread(videoDecTh);
        videoDecTh = 0;
    }

    if (defaultTh)
    {
        TerminateThread(defaultTh);
        DeleteThread(defaultTh);
        defaultTh = 0;
    }

    if (userTh)
    {
        TerminateThread(userTh);
        DeleteThread(userTh);
        userTh = 0;
    }

    DisableDmac(2);
    RemoveDmacHandler(2, videoDec.hid_endimage);

    if (!dma_flg)
    {
        EnableDmac(2);
    }

    sceGsSyncVCallback(save_func);

    videoDecDelete(&videoDec);

    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);
    audioDecPause(&audioDec);

    audioDecDelete(&audioDec);

    dispDelete(&display);

    strFileClose(&infile);
}


void defMain()
{
    readMpeg(&videoDec, &readBuf, &infile);
}

int ResetMpeg()
{
    init_flg = 0;
    return 0;
}

int strFileOpen(StrFile* file, char* filename)
{
    sceCdRMode mode;

    sceCdDiskReady(0);

    file->iopBuf = sceSifAllocIopHeap(0x28010);

    if (file->iopBuf == NULL)
    {
        return 1;
    }

    if (!sceCdStInit(0x50, 5, ((u_int)file->iopBuf + 15) / 16 * 16))
    {
        return 2;
    }

    if (!sceCdSearchFile(&file->fp, filename))
    {
        return 3;
    }

    file->size = file->fp.size;

    mode.trycount = 0;
    mode.spindlctrl = 0;
    mode.datapattern = 0;

    start_sec = file->fp.lsn;

    if (!sceCdStStart(file->fp.lsn, &mode))
    {
        return 4;
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", strFileClose);

int strFileRead(StrFile* file, void* buff, int size)
{
    int count;
    u_int err;

    count = sceCdStRead(size >> 11, (u_int*)buff, 1, &err);
    count <<= 11;

    if (err)
    {
        printf(D_0066CD88, err);
    }

    return count;
}

void proceedAudio()
{
    audioDecSendToIOP(&audioDec);
}

int videoCallback(sceMpeg* mp, sceMpegCbDataStr* str, void* data)
{
    ReadBuf* rb = (ReadBuf*)data;
    u_char* ps0 = str->data;
    u_char* ps1 = rb->data;
    int s0 = min(rb->data + rb->size - str->data, str->len);
    int s1 = str->len - s0;
    u_char* pd0;
    u_char* pd1;
    u_char* pd0Unc;
    u_char* pd1Unc;
    int d0, d1;
    int len;

    videoDecBeginPut(&videoDec, &pd0, &d0, &pd1, &d1);
    pd0Unc = (u_char*)UncAddr(pd0);
    pd1Unc = (u_char*)UncAddr(pd1);

    len = copy2area(pd0Unc, d0, pd1Unc, d1, ps0, s0, ps1, s1);

    if (len > 0)
    {
        videoDecPutTs(&videoDec, str->pts, str->dts, pd0, len);
    }

    videoDecEndPut(&videoDec, len);

    return (len > 0) ? 1 : 0;
}

int pcmCallback(sceMpeg* mp, sceMpegCbDataStr* str, void* data)
{
    ReadBuf* rb = (ReadBuf*)data;
    u_char* ps0 = str->data;
    u_char* ps1 = rb->data;
    int s0;
    int s1;
    u_char* pd0;
    u_char* pd1;
    int d0, d1;
    int len;
    int ret;

    ps0 = str->data + 4;

    if (ps0 >= rb->data + rb->size)
    {
        ps0 -= rb->size;
    }

    len = str->len - 4;

    ps1 = rb->data;
    s0 = min(rb->data + rb->size - ps0, len);
    s1 = len - s0;

    audio_dec_flg = 1;

    audioDecBeginPut(&audioDec, &pd0, &d0, &pd1, &d1);
    ret = copy2area(pd0, d0, pd1, d1, ps0, s0, ps1, s1);

    audioDecEndPut(&audioDec, ret);

    return (ret > 0) ? 1 : 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", copy2area);

void readBufCreate(ReadBuf* b)
{
    b->put = 0;
    b->count = 0;
    b->size = N_Read_Unit * READ_UNIT_SIZE;
}

void readBufDelete(ReadBuf* b)
{
    b->put = 0;
    b->count = 0;
    b->size = 0;
}

int readBufBeginPut(ReadBuf* b, u_char** ptr)
{
    int size = b->size - b->count;

    if (size)
    {
        *ptr = b->data + b->put;
    }

    return size;
}

int readBufEndPut(ReadBuf* b, int size)
{
    int size_ok = min(b->size - b->count, size);

    b->put = (b->put + size_ok) % b->size;
    b->count += size_ok;

    return size_ok;
}

int readBufBeginGet(ReadBuf* b, u_char** ptr)
{
    if (b->count)
    {
        *ptr = b->data + (b->put - b->count + b->size) % b->size;
    }

    return b->count;
}

int readBufEndGet(ReadBuf* b, int size)
{
    int size_ok = min(b->count, size);

    b->count -= size_ok;

    return size_ok;
}

void cdvMpegUserProgSet(int v)
{
    UserProg = v;
}

void cdvMpegUserProgDelete()
{
    UserProg = 0;
}

void cdvMpegSendModeSet(int v)
{
    GS_Send_Flg = v;
}

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", UserThread);
