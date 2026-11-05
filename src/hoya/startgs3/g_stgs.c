#include "common.h"
#include "hoya/startgs3/g_stgs.h"
#include "hoya/hoya.h"
#include "g_parts.h"
#include "gunsuv_usa/libgf/gfinstance.h"

extern int wait;
extern int stgsOldProcNo;
extern int gsNextProg;

extern int prgMan[];
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gStgsPrgInfo[];
extern char gNull_002c6740[];
void LetsGotoStartgs3(int a)
{
    stgsOldProcNo = a;
    gsNextProg = 0x12;
}

INCLUDE_ASM("asm/nonmatchings/hoya/startgs3/g_stgs", gsStageInit_STARTGS3);

void gsStageExec_STARTGS3()
{
    int* pm;

    KeyStateUpdate(0);
    GunStateUpdate();
    GFInstance_Start();
    gpInstance_Eval(gNull_002c6740);
    GFInstance_End();

    pm = prgMan;

    if (pm[0] == pm[1])
    {
        gStgsPrgInfo[pm[1]].main();
    }
    else
    {
        gStgsPrgInfo[pm[1]].end();
        gStgsPrgInfo[pm[0]].init();
        pm[1] = pm[0];
    }
}

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
