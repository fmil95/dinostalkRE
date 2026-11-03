#include "common.h"

extern int mpeg_err;
extern unsigned short ErrorNum;
extern int Read_Pos;
extern unsigned short WriteQue;

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvCallBack);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvInit);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvClose);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvFlush);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvQueStop);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvQueStart);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvIsEoq);

unsigned short cdvGetWriteQue()
{
    return WriteQue;
}

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvGetWorkingQue);

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

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDiscReadySet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvSyncSet);

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

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", FileQueClear);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvGetSearchNum);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDelSearchData);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDelSearchDataSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDelSearchDataAll);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDelSearchDataAllSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvFileReadSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvGetFileStsSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDiscNameChange);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvDiscNameChangeSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvFReadIOPSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvFileReadIOPSet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvMpegPlaySet);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvMpegGetError);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvMain);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", GetSecByte);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", ReadDataCreate);

INCLUDE_ASM("asm/nonmatchings/sound/CdvUse", cdvTrapError);

void cdvErrInit()
{
    mpeg_err = 0;
}
