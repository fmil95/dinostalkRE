#include "common.h"

extern int nameManager[];
extern int gsNextProg;
void LetsGotoNameScene(int a)
{
    nameManager[2] = 0;

    if (a != -1)
    {
        nameManager[0] = a;
    }

    gsNextProg = 0x10;
}

void LetsGotoNameEntryScene(int a)
{
    nameManager[2] = 1;

    if (a != -1)
    {
        nameManager[0] = a;
    }

    gsNextProg = 0x10;
}

int gsNAME_Draw1(int a)
{
    return a;
}

int gsNAME_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/name/g_name", gsStageInit_NAME);

INCLUDE_ASM("asm/nonmatchings/hoya/name/g_name", gsStageExec_NAME);
