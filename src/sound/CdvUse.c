#include "common.h"

extern int mpeg_err;
extern unsigned short ErrorNum;
extern int Read_Pos;
extern unsigned short WriteQue;
extern void FileQueClear();
extern int search_num;
extern int search_que;
extern int search_prg;
extern int search_ptr;

extern int s_lsn;
extern int s_sectors;
extern int s_buf;
extern int s_mode;
extern short s_que;
extern int Cdv_Que;
extern void sceCdInit();
extern void ResetMpeg();
extern char defbuf[];
extern char StopFlg;
extern u_short StepQue;
extern u_short MaxQue;
extern int cdvIsEoq();
extern int cdvTrayOpenSet();
extern int cdvTrayCloseWaitSet();
extern void cdvDiscNameChangeSet();
extern int cdvGetDiscNameSet();
extern int cdvNameCheckSet();
INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvCallBack);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvInit);

int cdvClose()
{
    if (Cdv_Que == 0)
    {
        return -1;
    }

    Cdv_Que = 0;
    sceCdInit(5);
    ResetMpeg();

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvFlush);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvQueStop);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvQueStart);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvIsEoq);

unsigned short cdvGetWriteQue()
{
    return WriteQue;
}

int cdvGetWorkingQue()
{
    if (StopFlg)
    {
        return 0x18;
    }

    return STRUCT_OFFSET(Cdv_Que, StepQue * 40, short);
}

unsigned short cdvGetError()
{
    return ErrorNum;
}

int cdvGetReadPos()
{
    return Read_Pos;
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvGetDiscNameSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvGetBufNameSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvGetBufName);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvCheckDiscName);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvNameCheckSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvWaitWorkingSet);

int cdvDiscReadySet()
{
    u_short w;
    u_short m;

    if (cdvIsEoq(1))
    {
        return -1;
    }
    w = WriteQue;
    m = MaxQue;
    STRUCT_OFFSET(Cdv_Que, w * 40, short) = 9;
    WriteQue = (w + 1) % (m + 1);
    return WriteQue;
}

int cdvSyncSet()
{
    u_short w;
    u_short m;

    if (cdvIsEoq(1))
    {
        return -1;
    }
    w = WriteQue;
    m = MaxQue;
    STRUCT_OFFSET(Cdv_Que, w * 40, short) = 1;
    WriteQue = (w + 1) % (m + 1);
    return WriteQue;
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvSeekSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvReadSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvReadIOPSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvCdStopSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvCdStandbySet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvTrayOpenSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvTrayCloseWaitSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDiscChangeSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvSearchFileSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvFReadSet);

void FileQueClear(int a)
{
    search_num = 0;
    search_ptr = 0;
    if (a == 0)
    {
        search_que = 0;
        search_prg = 0;
    }
}

int cdvGetSearchNum()
{
    return (0x14 - ((search_num + search_que) - search_prg));
}

int cdvDelSearchData()
{
    if (search_num == 0)
    {
        return -1;
    }

    search_num--;
    search_ptr = (search_ptr + 1) % 20;

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDelSearchDataSet);

void cdvDelSearchDataAll()
{
    FileQueClear(1);
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDelSearchDataAllSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvFileReadSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvGetFileStsSet);

void cdvDiscNameChange(char* a)
{
    int i;

    for (i = 0; i < 9; i++)
    {
        defbuf[i] = a[i];
    }

    defbuf[9] = 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDiscNameChangeSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvFReadIOPSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvFileReadIOPSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvMpegPlaySet);

int cdvMpegGetError()
{
    return mpeg_err;
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvMain);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", GetSecByte);

void ReadDataCreate(int a, int b, int c, int d, int e)
{
    s_lsn = a;
    s_sectors = b;
    s_buf = c;
    s_mode = d;
    s_que = e;
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvTrapError);

void cdvErrInit()
{
    mpeg_err = 0;
}
