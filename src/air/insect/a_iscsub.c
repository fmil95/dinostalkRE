#include "common.h"
#include "air/insect/a_iscsub.h"
#include <libvu0.h>

INCLUDE_ASM("asm/nonmatchings/air/insect/a_iscsub", gsGetPurPosRot);

void gsIscRotToVector(float* v, float* rot)
{
    sceVu0FMATRIX m;

    sceVu0UnitMatrix(m);
    sceVu0RotMatrixY(m, m, rot[1]);
    sceVu0ApplyMatrix(v, m, v);
}

INCLUDE_ASM("asm/nonmatchings/air/insect/a_iscsub", gsIscGetPurPosRot);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_iscsub", gsInsectBreakVeSet);
