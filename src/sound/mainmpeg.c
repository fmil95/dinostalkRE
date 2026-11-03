#include "common.h"

extern int frame_cnt;
extern char err_sts;
extern int GS_Send_Flg;
extern int mono_flg;
extern int isWithAudio;
extern int UserProg;
extern char init_flg;
extern int N_Read_Unit;
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

void readBufCreate(void* a)
{
    STRUCT_OFFSET(a, 0xC, int) = (N_Read_Unit << 16);
    STRUCT_OFFSET(a, 0x8, int) = 0;
    STRUCT_OFFSET(a, 0x4, int) = 0;
}

void readBufDelete(void* a)
{
    STRUCT_OFFSET(a, 0x4, int) = 0;
    STRUCT_OFFSET(a, 0x8, int) = 0;
    STRUCT_OFFSET(a, 0xC, int) = 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readBufBeginPut);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readBufEndPut);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readBufBeginGet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readBufEndGet);

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
