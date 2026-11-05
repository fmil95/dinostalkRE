#include "common.h"
#include "hoya/g_ezipu.h"
#include "hoya/title/ttlsub01.h"

extern int oldProcNo;
extern int gsNextProg;

extern int prgMan[];
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

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", gsStageExec_TITLE);

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
