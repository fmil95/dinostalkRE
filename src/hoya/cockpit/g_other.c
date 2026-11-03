#include "common.h"

extern int D_005DE6A8[];
extern int D_005DE6A4[];

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsCOCKPIT_InitLockOn);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsCOCKPIT_CheckLockOn);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", PutLockOn);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsTimerPassTime);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsTimerInit);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsTimerSetTime);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsTimerGetTime);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsTimerSetFrame);

int gsTimerGetFrame()
{
    return D_005DE6A8[0];
}

int gsTimerGetPathTime()
{
    return D_005DE6A4[0];
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsTimerCntTime);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsTimerPauseTime);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsTimerPauseTimeEx);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsTimerPassDirecTime);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsTimerCntroler);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsCOCKPIT_InitTime);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsCOCKPIT_InitTime2);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", PutTimeTime);

void PutTimeFixChar(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_other", gsCOCKPIT_PutTime);
