#include "common.h"
#include "air/air.h"

extern float D_002AF960[];
extern int _st9_situation;
float gsGetFixFarZ(int st)
{
    float r = D_002AF960[0];

    if (st == 8 && _st9_situation == 2)
    {
        r = 40.0f;
    }

    return r;
}

INCLUDE_ASM("asm/nonmatchings/air/air", gsWorldTexAnimation);
