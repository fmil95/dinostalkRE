#include "common.h"

INCLUDE_ASM("asm/nonmatchings/air/a_evtflg", gsEventFlagOnOffCheck);

INCLUDE_ASM("asm/nonmatchings/air/a_evtflg", gsEventFlagOn);

void gsEventFlagOff(int);
INCLUDE_ASM("asm/nonmatchings/air/a_evtflg", gsEventFlagOff);

INCLUDE_ASM("asm/nonmatchings/air/a_evtflg", gsEventFlagCtrlOfSwitchLine);

void gsEvtFlag255Clear()
{
    int i;
    
    for (i = 0; i < 256; i++) 
    {
        gsEventFlagOff(i);
    } 
}
