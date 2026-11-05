// STATUS: NOT STARTED

#ifndef SOUND_CDVUSE_H
#define SOUND_CDVUSE_H

cdvInit();
int cdvClose();
cdvFlush();
int cdvQueStop(long n);
int cdvQueStart();
int cdvIsEoq(int n);
unsigned short cdvGetWriteQue();
int cdvGetWorkingQue();
unsigned short cdvGetError();
int cdvGetReadPos();
int cdvGetDiscNameSet();
int cdvNameCheckSet();
int cdvWaitWorkingSet(long v);
int cdvDiscReadySet();
int cdvSyncSet();
cdvSeekSet();
cdvReadSet();
cdvReadIOPSet();
int cdvCdStopSet();
int cdvCdStandbySet();
int cdvTrayOpenSet();
int cdvTrayCloseWaitSet();
int cdvDiscChangeSet(char* a);
cdvSearchFileSet();
cdvFReadSet();
int cdvGetSearchNum();
int cdvDelSearchDataSet();
int cdvDelSearchDataAllSet();
cdvFileReadSet();
cdvGetFileStsSet();
void cdvDiscNameChange(char* a);
int cdvDiscNameChangeSet(char* a);
cdvFReadIOPSet();
cdvFileReadIOPSet();
int cdvMpegPlaySet();
int cdvMpegGetError();
cdvMain();
void cdvErrInit();
#endif // SOUND_CDVUSE_H
