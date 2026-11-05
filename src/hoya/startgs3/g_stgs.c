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
extern u_char gsClearRGBA[];
void LetsGotoStartgs3(int a)
{
    stgsOldProcNo = a;
    gsNextProg = 0x12;
}

int gsStageInit_STARTGS3(int p)
{
    char* n = gNull_002c6740;
    u_char* c;
    int* pm;

    STRUCT_OFFSET(n, 0xCC, int) = 0;
    GFInstance_InitHead((GF_INSTANCE*)n);
    c = gsClearRGBA;
    pm = prgMan;
    c[1] = 0;
    c[3] = 0x80;
    c[2] = 0;
    c[0] = 0;
    pm[2] = 0;

    switch (stgsOldProcNo)
    {
    case 10:
        pm[0] = 3;
        pm[1] = 3;
        break;
    case 14:
        pm[0] = 2;
        pm[1] = 2;
        break;
    default:
        prgMan[1] = 1;
        prgMan[0] = 1;
        break;
    }

    gStgsPrgInfo[prgMan[0]].init();
    return p;
}

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
