// STATUS: NOT STARTED

#include "timer.h"

int* gTimerCountRegs[4];
int gTimerMode[1];
char* gTimerModeRegs[4];

TIMER_InitTimer() {}

TIMER_SetTimer() {}

TIMER_StartTimer() {}

/* 100% match */
unsigned short TIMER_StopTimer(int arg0) 
{
    int* temp;
    
    temp = gTimerCountRegs[arg0];
    
    gTimerMode[arg0] &= ~0x80;
    
    *gTimerModeRegs[arg0] &= 0x7F;
    
    return *temp;
}

/* 100% match */
unsigned short TIMER_GetTimer(int arg0) 
{
    return *gTimerCountRegs[arg0];
}
