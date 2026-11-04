// STATUS: NOT STARTED

#ifndef SOUND_CDVUSE_H
#define SOUND_CDVUSE_H

cdvInit();
int cdvClose();
cdvFlush();
cdvQueStop();
int cdvQueStart();
cdvIsEoq();
unsigned short cdvGetWriteQue();
int cdvGetWorkingQue();
unsigned short cdvGetError();
int cdvGetReadPos();
cdvGetDiscNameSet();
int cdvNameCheckSet();
cdvWaitWorkingSet();
int cdvDiscReadySet();
int cdvSyncSet();
cdvSeekSet();
cdvReadSet();
cdvReadIOPSet();
int cdvCdStopSet();
int cdvCdStandbySet();
int cdvTrayOpenSet();
cdvTrayCloseWaitSet();
int cdvDiscChangeSet(char* a);
cdvSearchFileSet();
cdvFReadSet();
int cdvGetSearchNum();
int cdvDelSearchDataSet();
int cdvDelSearchDataAllSet();
cdvFileReadSet();
cdvGetFileStsSet();
void cdvDiscNameChange(char* a);
cdvDiscNameChangeSet();
cdvFReadIOPSet();
cdvFileReadIOPSet();
cdvMpegPlaySet();
int cdvMpegGetError();
cdvMain();
void cdvErrInit();
#endif // SOUND_CDVUSE_H
