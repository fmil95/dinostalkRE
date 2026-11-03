#include "sound/mainmpeg.h"

#define min(x, y) (((x) > (y)) ? (y) : (x))

extern int frame_cnt;
extern char err_sts;
extern int GS_Send_Flg;
extern int mono_flg;
extern int isWithAudio;
extern int UserProg;
extern char init_flg;
extern char audioDec[];
extern void audioDecSendToIOP();
extern char videoDec[];
extern char readBuf[];
extern char infile[];
extern void readMpeg();

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegInit);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", PortSlotCheck);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSkipSet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSkipSetAll);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSkipReset);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSkipResetAll);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegPadUseSet);

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

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegPlayEnd);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", PlayMpeg);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readMpeg);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", isAudioOK);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", initAll);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", termAll);

void defMain()
{
    readMpeg(videoDec, readBuf, infile);
}

int ResetMpeg()
{
    init_flg = 0;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", strFileOpen);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", strFileClose);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", strFileRead);

void proceedAudio()
{
    audioDecSendToIOP(audioDec);
}

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", videoCallback);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", pcmCallback);

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
