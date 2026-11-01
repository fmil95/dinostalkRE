#include "common.h"

INCLUDE_ASM("asm/nonmatchings/test", TEST_LoadTexture);

int TEST_EntryTexture(unsigned int* pig, int prm1) 
{
    int idx;

    idx = GFTex_Add(pig);
    
    if (prm1 != 0)
    {
        GFTex_LoadImage(idx);
    }
    
    return idx;
}

INCLUDE_ASM("asm/nonmatchings/test", TEST_Sync);

INCLUDE_ASM("asm/nonmatchings/test", TEST_SetObjMatrix);

INCLUDE_ASM("asm/nonmatchings/test", TEST_SetCameraMatrix);

INCLUDE_ASM("asm/nonmatchings/test", TEST_MoveObject);

INCLUDE_ASM("asm/nonmatchings/test", TEST_MoveCamera);

INCLUDE_ASM("asm/nonmatchings/test", TEST_create_instance);

void TEST_destroy_instshape() 
{
    MEM_Free();
}
