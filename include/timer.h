// STATUS: NOT STARTED

#ifndef TIMER_H
#define TIMER_H

#include "common.h"

int TIMER_InitTimer();
int TIMER_SetTimer();
int TIMER_StartTimer();
unsigned short TIMER_StopTimer(int prm0);
unsigned short TIMER_GetTimer(int prm0);

extern int* gTimerCountRegs[4];
extern int gTimerMode[1];
extern char* gTimerModeRegs[4];

#endif // TIMER_H
