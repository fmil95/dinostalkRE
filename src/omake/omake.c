#include "common.h"

extern int gsOmakeManager[];

INCLUDE_ASM("asm/nonmatchings/omake/omake", gsOmakeInitManager);

void gsOmakeSetFlag(int a)
{
    gsOmakeManager[0] = a;
}

INCLUDE_ASM("asm/nonmatchings/omake/omake", gsOmakeSetArmsFlagAll);

INCLUDE_ASM("asm/nonmatchings/omake/omake", gsOmakeResetArmsFlag);
