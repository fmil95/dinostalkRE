// STATUS: NOT STARTED

#ifndef HOYA_MEM_CARD_MCDUSE_H
#define HOYA_MEM_CARD_MCDUSE_H

mcdFlushQue();
mcdInit();
mcdQuit();
mcdCheckEoq();
mcdGetStepQue();
mcdGetWriteQue();
mcdGetQueCondition();
mcdGetErrorFunc();
mcdGetErrorCause();
mcdSetPause();
mcdStartChk();
mcdEndChk();
mcdGetChkType();
mcdGetChkFree();
mcdGetChkFormat();
mcdUsrFuncSet();
mcdErrProcSet();
mcdWaitSet();
mcdCardInfoSet();
mcdOpenSet();
mcdCloseSet();
mcdSeekSet();
mcdReadSet();
mcdWriteSet();
mcdFlushSet();
mcdMkdirSet();
mcdChDirSet();
mcdGetDirSet();
mcdFileInfoSet();
mcdDeleteSet();
mcdFormatSet();
mcdUnformatSet();
mcdEntSpaceSet();
mcdRenameSet();
mcdSlotMaxSet();
mcdMain();

#endif // HOYA_MEM_CARD_MCDUSE_H
