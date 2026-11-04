#include "air/a_evtthk.h"

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsEventMatrixThinkMain);

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsThinkMatrixDataCheck);

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsThinkMatrixDataCheck2);

int gsEventMatrixCmpDataINT(int a, int b, int mode)
{
    int r = 0;

    switch (mode)
    {
    case 0:
        r = a < b;
        break;
    case 1:
        r = b < a;
        break;
    case 2:
        r = a != b;
        break;
    case 3:
        r = a == b;
        break;
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsEventMatrixCmpDataFLOAT);

int gsGetRandINT(int prm0) 
{
    return ((rand() % 1000) * 8) % (prm0 + 1);
}

INCLUDE_ASM("asm/nonmatchings/air/a_evtthk", gsRotChange);
