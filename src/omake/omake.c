#include "common.h"

extern int gsOmakeManager[];

extern int D_0065298C[];
INCLUDE_ASM("asm/nonmatchings/omake/omake", gsOmakeInitManager);

void gsOmakeSetFlag(int a)
{
    gsOmakeManager[0] = a;
}

INCLUDE_ASM("asm/nonmatchings/omake/omake", gsOmakeSetArmsFlagAll);

void gsOmakeResetArmsFlag(int i, int m)
{
    D_0065298C[i] = ~m;
}
