// STATUS: NOT STARTED

#include "a_evtthk.h"

gsEventMatrixThinkMain() {}

gsThinkMatrixDataCheck() {}

gsThinkMatrixDataCheck2() {}

gsEventMatrixCmpDataINT() {}

gsEventMatrixCmpDataFLOAT() {}

/* 100% match */
int gsGetRandINT(int arg0) 
{
    return ((rand() % 1000) * 8) % (arg0 + 1);
}

gsRotChange() {}
