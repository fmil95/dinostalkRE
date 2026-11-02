#include "air/a_evtthk.h"

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsEventMatrixThinkMain);

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsThinkMatrixDataCheck);

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsThinkMatrixDataCheck2);

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsEventMatrixCmpDataINT);

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsEventMatrixCmpDataFLOAT);

int gsGetRandINT(int prm0) 
{
    return ((rand() % 1000) * 8) % (prm0 + 1);
}

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsRotChange);
