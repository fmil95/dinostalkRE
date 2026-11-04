// STATUS: NOT STARTED

#ifndef HOYA_MEM_CARD_MCDUSE_H
#define HOYA_MEM_CARD_MCDUSE_H

void mcdFlushQue();
mcdInit();
int mcdQuit();
int mcdCheckEoq(int n);
int mcdGetStepQue();
int mcdGetWriteQue();
int mcdGetQueCondition();
int mcdGetErrorFunc();
int mcdGetErrorCause();
mcdSetPause();
int mcdStartChk(int port, int slot);
int mcdEndChk();
int mcdGetChkType();
int mcdGetChkFree();
int mcdGetChkFormat();
mcdUsrFuncSet();
mcdErrProcSet();
mcdWaitSet();
int mcdCardInfoSet(int a, int b, int c, int d, int e, int f);
int mcdOpenSet(int a, int b, int c, int d, int e);
int mcdCloseSet(int a, int b);
int mcdSeekSet(int a, int b, int c, int d);
int mcdReadSet(int a, int b, int c, int d);
int mcdWriteSet(int a, int b, int c, int d);
int mcdFlushSet(int a, int b);
int mcdMkdirSet(int a, int b, int c, int d);
int mcdChDirSet(int a, int b, int c, int d, int e);
mcdGetDirSet();
mcdFileInfoSet();
int mcdDeleteSet(int a, int b, int c, int d);
int mcdFormatSet(int a, int b, int c);
int mcdUnformatSet(int a, int b, int c);
int mcdEntSpaceSet(int a, int b, int c, int d);
int mcdRenameSet(int a, int b, int c, int d, int e);
int mcdSlotMaxSet(int a, int b);
mcdMain();

#endif // HOYA_MEM_CARD_MCDUSE_H
