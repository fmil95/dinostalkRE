// STATUS: NOT STARTED

#ifndef HOYA_COCKPIT_G_OTHER_H
#define HOYA_COCKPIT_G_OTHER_H

gsCOCKPIT_InitLockOn();
gsCOCKPIT_CheckLockOn();
PutLockOn();
void gsTimerInit();
gsTimerSetTime();
void gsTimerGetTime(void* p);
gsTimerSetFrame();
int gsTimerGetFrame();
int gsTimerGetPathTime();
void gsTimerCntTime(int a);
void gsTimerPauseTime(int a);
void gsTimerPauseTimeEx(int a);
void gsTimerPassDirecTime(int a);
void gsTimerCntroler();
gsCOCKPIT_InitTime();
gsCOCKPIT_InitTime2();
void gsCOCKPIT_PutTime(int a);
#endif // HOYA_COCKPIT_G_OTHER_H
