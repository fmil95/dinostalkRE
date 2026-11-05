#include "common.h"
#include "hoya/pause/g_pause.h"

extern int pauseManager[];
extern int gsExtProgNext;
extern int gsNextProg;
void LetsGotoPauseScene(int n)
{
    int* pm = pauseManager;

    if (n != -1)
    {
        *pm = n;
    }

    if ((u_int)n < 8)
    {
        gsExtProgNext = 0;
    }
    else
    {
        gsNextProg = 13;
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseItemSet);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseInfosClear);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseCreateObjectPacket);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseItemObjectSet);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseMakeItemInfo);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseItemSetItems);

int gsPAUSE_Draw1(int a)
{
    return a;
}

int gsPAUSE_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", gsStageInit_PAUSE);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", gsMoveCamera2);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", gsStageExec_PAUSE);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", gsStageInit_PAUSE_STAGE);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", gsStageExec_PAUSE_STAGE);
