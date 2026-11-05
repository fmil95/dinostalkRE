#include "common.h"
#include "hoya/continue/g_cnt.h"
#include "hoya/continue/cntsub1.h"

extern int prgMan[];
void LetsGotoContinueScene(void) {
}

int gsCONTINUE_Draw1(int a)
{
    return a;
}

void* gsCONTINUE_Draw2(void* p)
{
    if (prgMan[0] == 1)
    {
        p = Draw2dObject2Cnt(p);
    }

    return p;
}

INCLUDE_ASM("asm/nonmatchings/hoya/continue/g_cnt", gsStageInit_CONTINUE);

INCLUDE_ASM("asm/nonmatchings/hoya/continue/g_cnt", gsStageExec_CONTINUE);
