#include "common.h"
#include "hoya/g_ezipu.h"
#include "hoya/title/ttlsub01.h"
#include "hoya/hoya.h"
#include "g_parts.h"
#include "gunsuv_usa/libgf/gfinstance.h"
#include "sound/g_sound.h"
#include "omake/omake.h"

extern int oldProcNo;
extern int gsNextProg;

extern int prgMan[];
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gTtlPrgInfo[];
extern char gNull_002c6740[];
extern u_char gsClearRGBA[];
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

int gsStageInit_TITLE(int p)
{
    char* n = gNull_002c6740;
    int* pm = prgMan;
    u_char* c;

    STRUCT_OFFSET(n, 0xCC, int) = 0;
    GFInstance_InitHead((GF_INSTANCE*)n);
    hyLoadPigTitle();
    gsSoundInitAll();
    gsSoundReadSe(0x1D);
    gsSoundReadWait();
    c = gsClearRGBA;
    c[1] = 0;
    c[3] = 0x80;
    c[2] = 0;
    c[0] = 0;
    pm[2] = 0;
    gsOmakeInitManager();

    switch (oldProcNo)
    {
    case 0xF:
        pm[0] = 1;
        pm[1] = 1;
        break;
    case 0x61:
        pm[0] = 4;
        pm[1] = 4;
        break;
    case 0x62:
        pm[0] = 1;
        pm[1] = 1;
        break;
    case 0x63:
        pm[0] = 2;
        pm[1] = 2;
        break;
    default:
        prgMan[0] = 3;
        prgMan[1] = 3;
        break;
    }

    gTtlPrgInfo[prgMan[0]].init();
    return p;
}

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
