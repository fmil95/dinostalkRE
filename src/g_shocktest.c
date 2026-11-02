#include "g_shocktest.h"

void G_SHOCKTEST_Init() 
{
    gsFrame = frame;
    
    GF_InitGraphicsFramework();
    
    gsShockInit();
    
    gsPause = 0;
    
    MEM_CheckViolation();
}

INCLUDE_ASM("asm/nonmatchings/g_shocktest", G_SHOCKTEST_Exec);

INCLUDE_ASM("asm/nonmatchings/g_shocktest", G_SHOCKTEST_End);
