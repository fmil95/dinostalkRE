// STATUS: NOT STARTED

#include "a_evtflg.h"

gsEventFlagOnOffCheck() {}

gsEventFlagOn() {}

gsEventFlagOff() {}

gsEventFlagCtrlOfSwitchLine() {}

/* 100% match */ 
void gsEvtFlag255Clear()
{
    int i;
    
    for (i = 0; i < 256; i++) 
    {
        gsEventFlagOff(i);
    } 
}
