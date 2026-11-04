#include "sound/mainmpeg.h"
extern char audio_dec_flg;
#define UncAddr(p) ((void*)(((u_int)(p) & 0x0FFFFFFF) | 0x20000000))
static int copy2area(u_char* pd0, int d0, u_char* pd1, int d1, u_char* ps0, int s0, u_char* ps1, int s1);

#define min(x, y) (((x) > (y)) ? (y) : (x))

extern int sceCdDiskReady(int mode);
extern void* sceSifAllocIopHeap(int size);
extern int sceCdStInit(u_int bufmax, u_int bankmax, u_int iop_bufaddr);
extern int sceCdSearchFile(sceCdlFILE* fp, const char* name);
extern int sceCdStStart(u_int lbn, sceCdRMode* mode);
extern int start_sec;
extern int sceCdStRead(u_int sectors, u_int* buf, u_int mode, u_int* err);
extern int printf();
extern char D_0066CD88[];

extern int frame_cnt;
extern int writerest;
extern char abort_flg;
extern PadSkip pad_00857400[];
extern char err_sts;
extern int GS_Send_Flg;
extern int mono_flg;
extern int isWithAudio;
extern int UserProg;
extern char init_flg;
extern AudioDec audioDec;
extern VideoDec videoDec;
extern ReadBuf readBuf;
extern StrFile infile;

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

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", PlayMpeg);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readMpeg);

int isAudioOK()
{
    return isWithAudio ? audioDecIsPreset(&audioDec) : 1;
}

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", initAll);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", termAll);

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
