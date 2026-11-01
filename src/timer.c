#include "common.h"

int* gTimerCountRegs[4];

INCLUDE_ASM("asm/nonmatchings/timer", TIMER_InitTimer);

INCLUDE_ASM("asm/nonmatchings/timer", TIMER_SetTimer);

INCLUDE_ASM("asm/nonmatchings/timer", TIMER_StartTimer);

INCLUDE_ASM("asm/nonmatchings/timer", TIMER_StopTimer);

unsigned short TIMER_GetTimer(int prm0) 
{
    return *gTimerCountRegs[prm0];
}
