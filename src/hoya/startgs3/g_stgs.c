#include "common.h"
#include "hoya/startgs3/g_stgs.h"

extern int wait;
extern int stgsOldProcNo;
extern int gsNextProg;

extern int prgMan[];
void LetsGotoStartgs3(int a)
{
    stgsOldProcNo = a;
    gsNextProg = 0x12;
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", gsStageInit_STARTGS3);

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", gsStageExec_STARTGS3);

void gsStageEnd_STARTGS3(void) {
}

void InitStgsWait()
{
    wait = 0x10;
}

void MainStgsWait()
{
    if (wait == 0)
    {
        prgMan[0] = 2;
        prgMan[1] = 2;
    }
    else
    {
        wait--;
    }
}

void EndStgsWait(void) {
}
