#include "common.h"
#include "hoya/g_ezipu.h"
#include "hoya/title/ttlsub01.h"
#include "hoya/hoya.h"
#include "g_parts.h"
#include "gunsuv_usa/libgf/gfinstance.h"

extern int oldProcNo;
extern int gsNextProg;

extern int prgMan[];
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gTtlPrgInfo[];
extern char gNull_002c6740[];
void LetsGotoTitle(int a)
{
    if (a != -1)
    {
        oldProcNo = a;
    }

    gsNextProg = 8;
}

void LetsGotoStart(int a)
{
    if (a != -1)
    {
        oldProcNo = 0x62;
    }

    gsNextProg = 8;
}

void LetsGotoDaisakusen(void) {
}

void LetsGotoOpening(int a)
{
    if (a != -1)
    {
        oldProcNo = 0x63;
    }

    gsNextProg = 8;
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", gsStageInit_TITLE);

void gsStageExec_TITLE()
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
        gTtlPrgInfo[pm[1]].main();
    }
    else
    {
        gTtlPrgInfo[pm[1]].end();
        gTtlPrgInfo[pm[0]].init();
        pm[1] = pm[0];
    }
}

void gsStageEnd_TITLE(void) {
}

int gsTITLE_Draw1(int a)
{
    return a;
}

int gsTITLE_Draw2(int p)
{
    if (prgMan[0] == 1)
    {
        p = Draw2dObject2(gsEzIpuDraw(p, 0, 0, 0x200, 0x200));
    }

    return p;
}
