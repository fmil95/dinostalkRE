#include "main.h"

INCLUDE_ASM("asm/nonmatchings/main", main);

INCLUDE_ASM("asm/nonmatchings/main", SelectTest);

INCLUDE_ASM("asm/nonmatchings/main", InitSystem);

INCLUDE_ASM("asm/nonmatchings/main", InitSif);

INCLUDE_ASM("asm/nonmatchings/main", SetDefaultGsEnv);

static void EndSystem() 
{
    sceDevConsClose(gConsole);
    
    gsPad_End();
    
    MEM_EndAllocation();
}

void _gsMuteki_INIT() 
{
    
}

INCLUDE_ASM("asm/nonmatchings/main", _gsMuteki_EXEC);

void _gsMuteki_END() 
{

}

INCLUDE_ASM("asm/nonmatchings/main", _gsOmakePower_INIT);

INCLUDE_ASM("asm/nonmatchings/main", _gsOmakePower_EXEC);

void _gsOmakePower_END() 
{ 

}
