// STATUS: NOT STARTED

#include "test.h"
#include "gftex.h"
#include "fileio.h"

/* 100% match */
int TEST_LoadTexture(int arg0, int arg1)
{
    int temp;

    temp = GFTex_Add(FIO_ReadFile_Align(arg0, 64));
    
    if (arg1 != 0) 
    {
        GFTex_LoadImage(temp);
    }
    
    return temp;
}

TEST_EntryTexture() {}

TEST_Sync() {}

TEST_SetObjMatrix() {}

TEST_SetCameraMatrix() {}

TEST_MoveObject() {}

TEST_MoveCamera() {}

TEST_create_instance() {}

TEST_destroy_instshape() {}
