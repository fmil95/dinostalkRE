#include "common.h"

extern int gsOmakeManager[];

extern int D_0065298C[];
void gsOmakeInitManager()
{
    int* p = gsOmakeManager;
    int i = 0x1F;

    p[0] = 0;
    p += 0x20;
    do
    {
        *p = 0;
        p--;
    } while (--i >= 0);
}

void gsOmakeSetFlag(int a)
{
    gsOmakeManager[0] = a;
}

INCLUDE_ASM("asm/nonmatchings/omake/omake", gsOmakeSetArmsFlagAll);

void gsOmakeResetArmsFlag(int i, int m)
{
    D_0065298C[i] = ~m;
}
