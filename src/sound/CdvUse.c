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
extern int cdvDiscNameChangeSet();
extern int cdvGetDiscNameSet();
extern int cdvNameCheckSet();
extern long StopCnt;
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

int cdvQueStart()
{
    if (StopFlg == 0)
    {
        return -1;
    }
    StopFlg = 0;
    StopCnt = 0;
    return 0;
}

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

int cdvGetBufNameSet()
{
    u_short w;
    u_short m;

    if (cdvIsEoq(1))
    {
        return -1;
    }
    w = WriteQue;
    m = MaxQue;
    STRUCT_OFFSET(Cdv_Que, w * 40, short) = 13;
    WriteQue = (w + 1) % (m + 1);
    return WriteQue;
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvGetBufName);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvCheckDiscName);

int cdvNameCheckSet()
{
    u_short w;
    u_short m;

    if (cdvIsEoq(1))
    {
        return -1;
    }
    w = WriteQue;
    m = MaxQue;
    STRUCT_OFFSET(Cdv_Que, w * 40, short) = 0x16;
    WriteQue = (w + 1) % (m + 1);
    return WriteQue;
}

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

int cdvCdStopSet()
{
    u_short w;
    u_short m;

    if (cdvIsEoq(2))
    {
        return -1;
    }
    cdvDiscReadySet();
    w = WriteQue;
    m = MaxQue;
    STRUCT_OFFSET(Cdv_Que, w * 40, short) = 7;
    WriteQue = (w + 1) % (m + 1);
    return WriteQue;
}

int cdvCdStandbySet()
{
    u_short w;
    u_short m;

    if (cdvIsEoq(2))
    {
        return -1;
    }
    cdvDiscReadySet();
    w = WriteQue;
    m = MaxQue;
    STRUCT_OFFSET(Cdv_Que, w * 40, short) = 8;
    WriteQue = (w + 1) % (m + 1);
    return WriteQue;
}

int cdvTrayOpenSet()
{
    u_short w;
    u_short m;

    if (cdvIsEoq(3))
    {
        return -1;
    }
    cdvCdStopSet();
    w = WriteQue;
    m = MaxQue;
    STRUCT_OFFSET(Cdv_Que, w * 40, short) = 11;
    WriteQue = (w + 1) % (m + 1);
    return WriteQue;
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvTrayCloseWaitSet);

int cdvDiscChangeSet(char* a)
{
    if (cdvIsEoq(0xB))
    {
        return -1;
    }
    cdvTrayOpenSet();
    cdvTrayCloseWaitSet();
    cdvDiscNameChangeSet(a);
    cdvGetDiscNameSet();
    cdvNameCheckSet();
    return WriteQue;
}

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

int cdvDelSearchDataSet()
{
    u_short w;
    u_short m;

    if (cdvIsEoq(1))
    {
        return -1;
    }
    w = WriteQue;
    m = MaxQue;
    STRUCT_OFFSET(Cdv_Que, w * 40, short) = 15;
    WriteQue = (w + 1) % (m + 1);
    return WriteQue;
}

void cdvDelSearchDataAll()
{
    FileQueClear(1);
}

int cdvDelSearchDataAllSet()
{
    u_short w;
    u_short m;

    if (cdvIsEoq(1))
    {
        return -1;
    }
    w = WriteQue;
    m = MaxQue;
    STRUCT_OFFSET(Cdv_Que, w * 40, short) = 16;
    WriteQue = (w + 1) % (m + 1);
    return WriteQue;
}

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

INCLUDE_RODATA("asm/nonmatchings/sound/CdvUse", D_0066CBC0);

INCLUDE_RODATA("asm/nonmatchings/sound/CdvUse", D_0066CBD0);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvMain);

int GetSecByte(u_char m)
{
    int r;

    switch (m)
    {
    case 0:
        r = 0x800;
        break;
    case 1:
        r = 0x918;
        break;
    case 2:
        r = 0x924;
        break;
    default:
        r = 0x800;
        break;
    }
    return r;
}

void ReadDataCreate(int a, int b, int c, int d, int e)
{
    s_lsn = a;
    s_sectors = b;
    s_buf = c;
    s_mode = d;
    s_que = e;
}

INCLUDE_RODATA("asm/nonmatchings/sound/CdvUse", D_0066CC58);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvTrapError);

void cdvErrInit()
{
    mpeg_err = 0;
}
