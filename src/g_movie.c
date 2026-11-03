#include "common.h"

extern void sceGsResetGraph();

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_Init);

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_SetSkipKey);

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_Play);

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_Exec);

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_End);

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_SetStartCol);

INCLUDE_ASM("asm/nonmatchings/g_movie", gsMovie_SetEndCol);

INCLUDE_ASM("asm/nonmatchings/g_movie", MpegFunc);

INCLUDE_ASM("asm/nonmatchings/g_movie", movieTest_init);

void movieTest_end()
{
    sceGsResetGraph(0, 1, 2, 1);
}

INCLUDE_ASM("asm/nonmatchings/g_movie", movieTest);
