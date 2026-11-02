#include "timer.h"

INCLUDE_ASM("asm/nonmatchings/timer", TIMER_InitTimer);

INCLUDE_ASM("asm/nonmatchings/timer", TIMER_SetTimer);

INCLUDE_ASM("asm/nonmatchings/timer", TIMER_StartTimer);

unsigned short TIMER_StopTimer(int prm0) 
{
    int* ret;
    
    ret = gTimerCountRegs[prm0];
    
    gTimerMode[prm0]      &= ~0x80;
    *gTimerModeRegs[prm0] &=  0x7F;
    
    return *ret;
}

unsigned short TIMER_GetTimer(int prm0) 
{
    return *gTimerCountRegs[prm0];
}
