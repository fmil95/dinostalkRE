#include "common.h"

INCLUDE_ASM("asm/nonmatchings/test", TEST_LoadTexture);

INCLUDE_ASM("asm/nonmatchings/test", TEST_EntryTexture);

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
