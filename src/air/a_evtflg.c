#include "common.h"

extern int Event_Flag[];
extern int Flag_OffBit[];
extern int Flag_CheckOnBit[];
int gsEventFlagOnOffCheck(int n)
{
    int b = n % 32;

    return (Event_Flag[n >> 5] & Flag_CheckOnBit[b]) > 0u;
}

void gsEventFlagOn(int n)
{
    int w = n / 32;
    int b = n % 32;

    Event_Flag[n >> 5] |= Flag_CheckOnBit[b];
}

void gsEventFlagOff(int);
void gsEventFlagOff(int n)
{
    int w = n / 32;
    int b = n % 32;

    Event_Flag[n >> 5] &= Flag_OffBit[b];
}

INCLUDE_ASM("asm/nonmatchings/air/a_evtflg", gsEventFlagCtrlOfSwitchLine);

void gsEvtFlag255Clear()
{
    int i;
    
    for (i = 0; i < 256; i++) 
    {
        gsEventFlagOff(i);
    } 
}
