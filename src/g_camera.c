#include "g_camera.h"

typedef struct { int a; int b; } CamUseItemS;
extern CamUseItemS _camera_use_item[];
extern int _cam_use_item_cnt;
INCLUDE_ASM("asm/nonmatchings/g_camera", gsSetCameraMatrix);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraCalcRotMatrix);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraCalcRotMatrix_COMPEL);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsMoveCamera);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsInitCamera);

void gsCameraSetParam_START_GAME() 
{
    gsCamera.unk1A4 = 0;
    
    gsCamera.unkF4 = 5.0f;
    
    gsArmsTypeTbl.unk0 = 1;
    gsArmsTypeTbl.unk4 = 2;
    gsArmsTypeTbl.unk8 = 4;
    gsArmsTypeTbl.unkC = 4;
    
    gsCamera.unk230 = 0;
    gsCamera.unk234 = 0;
    gsCamera.unk240 = 0;
    gsCamera.unk244 = 0;
    gsCamera.unk250 = 0;
    gsCamera.unk254 = 0;
    gsCamera.unk258 = 0;
    gsCamera.unk260 = 0;
    gsCamera.unk25C = 0;
    gsCamera.unk264 = 0;
    gsCamera.unk268 = 0;
    gsCamera.unk26C = 0;
}

void gsCameraSetParam_AFTER_STAGE() 
{
    if (gsCurProg != 3) 
    {
        gsCamera.unk1A4 = 0;
    }
    
    if (gsCurProg == 3) 
    {
        hyReflectResultData();
    }
    
    if (gsGunGetReloadBullet(2) <= 0) 
    {
        gsArmsTypeTbl.unk8 = 21;
    }
    
    if (gsGunGetReloadBullet(3) <= 0) 
    {
        gsArmsTypeTbl.unkC = 21;
    }
}

void gsCameraSetParam_FROM_CONTINUE() 
{
    gsCamera.unkF4 = 5.0f;
}

INCLUDE_ASM("asm/nonmatchings/g_camera", gsManagementCamera);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsManagementCamera_COMPEL);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsGetCameraRot);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsGetCameraRot_COMPEL);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsGetCameraVct);

INCLUDE_ASM("asm/nonmatchings/g_camera", _getPartsTrans_BDINO);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraGetDinoCollision);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraGetDinoCollision_COMPEL);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsSetCameraMove);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsSetCameraMove_COMPEL);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsGetCollisionWorld);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsGetCollisionWorld);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsGetCameraTilt);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsGetCameraAmp);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsCameraGetItem);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664D10);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664D20);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664D30);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664D48);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664D50);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664D58);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664D60);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraGetItem);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraSubLife);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraEntryDamageEffect);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsCameraDamageEffect);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsCameraDamageEffect_TREX);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraDamageEffect_TREX);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664DE0);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664DF0);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664E00);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664E10);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664E20);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664E30);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664E40);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664E50);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664E60);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664E70);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664E80);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664E90);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraDamageEffect);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraShock_ENTRY);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraShock_EXEC);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraShock_RESET);

INCLUDE_ASM("asm/nonmatchings/g_camera", _searchTarget_GetPos);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraSearchTarget);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraSearchTargetM);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraSearchTargetH);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraTraceTarget);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraDemoSearch);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraPutGND);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraPutGND_COMPEL);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsInitCocpit);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsPutCocpit);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsMoveSight);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsSetBashMark);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsPutBashMark);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsChangeArms);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsPutScope_INIT);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsPutScope);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsPutScope_MemH);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsPutScope_MemV);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsPutScope_Font);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsPutScope);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsGetCameraRot_SCP);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsGetCameraZoom);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsPutCinesco);

int gsCameraUseItem_INIT()
{
    int i;

    _cam_use_item_cnt = 0;

    for (i = 0; i < 16; i++)
    {
        _camera_use_item[i].a = -1;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraUseItem_ENTRY);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraUseItem_EXEC);

int gsCameraCountItem_Medicine()
{
    gsCamera.unk258++;

    if (gsCamera.unk258 >= 100)
    {
        gsCamera.unk258 = 99;
    }

    if (gsCamera.unk258 < 0)
    {
        gsCamera.unk258 = 0;
    }
}

int gsCameraCountItem_Revicer()
{
    gsCamera.unk25C++;

    if (gsCamera.unk25C >= 100)
    {
        gsCamera.unk25C = 99;
    }

    if (gsCamera.unk25C < 0)
    {
        gsCamera.unk25C = 0;
    }
}

int gsCameraCountItem_Antidote()
{
    gsCamera.unk260++;

    if (gsCamera.unk260 >= 100)
    {
        gsCamera.unk260 = 99;
    }

    if (gsCamera.unk260 < 0)
    {
        gsCamera.unk260 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraCountItem_Tachyon);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraSetPauseParam);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsCameraTraceTilt);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664F08);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664F18);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664F28);

INCLUDE_RODATA("asm/nonmatchings/g_camera", D_00664F48);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraTraceTilt);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraGetRaderDir_INIT);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraGetRaderDir_EXEC);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsManagementCamera2);
