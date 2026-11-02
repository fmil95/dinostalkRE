// STATUS: NOT STARTED

#ifndef TIMER_H
#define TIMER_H

#include "common.h"

TIMER_InitTimer();
TIMER_SetTimer();
TIMER_StartTimer();
unsigned short TIMER_StopTimer(int arg0);
unsigned short TIMER_GetTimer(int arg0);

extern int* gTimerCountRegs[4];
extern int gTimerMode[1];
extern char* gTimerModeRegs[4];

#endif // TIMER_H
