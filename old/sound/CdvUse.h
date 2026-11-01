// STATUS: NOT STARTED

#ifndef SOUND_CDVUSE_H
#define SOUND_CDVUSE_H

cdvInit();
cdvClose();
cdvFlush();
cdvQueStop();
cdvQueStart();
cdvIsEoq();
cdvGetWriteQue();
cdvGetWorkingQue();
cdvGetError();
cdvGetReadPos();
cdvGetDiscNameSet();
cdvNameCheckSet();
cdvWaitWorkingSet();
cdvDiscReadySet();
cdvSyncSet();
cdvSeekSet();
cdvReadSet();
cdvReadIOPSet();
cdvCdStopSet();
cdvCdStandbySet();
cdvTrayOpenSet();
cdvTrayCloseWaitSet();
cdvDiscChangeSet();
cdvSearchFileSet();
cdvFReadSet();
cdvGetSearchNum();
cdvDelSearchDataSet();
cdvDelSearchDataAllSet();
cdvFileReadSet();
cdvGetFileStsSet();
cdvDiscNameChange();
cdvDiscNameChangeSet();
cdvFReadIOPSet();
cdvFileReadIOPSet();
cdvMpegPlaySet();
cdvMpegGetError();
cdvMain();
cdvErrInit();

#endif // SOUND_CDVUSE_H
