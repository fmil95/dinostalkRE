#include "g_camera.h"

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

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraGetItem);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraSubLife);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraEntryDamageEffect);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsCameraDamageEffect);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsCameraDamageEffect_TREX);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraDamageEffect_TREX);

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

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraUseItem_INIT);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraUseItem_ENTRY);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraUseItem_EXEC);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraCountItem_Medicine);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraCountItem_Revicer);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraCountItem_Antidote);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraCountItem_Tachyon);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraSetPauseParam);

INCLUDE_ASM("asm/nonmatchings/g_camera", _gsCameraTraceTilt);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraTraceTilt);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraGetRaderDir_INIT);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsCameraGetRaderDir_EXEC);

INCLUDE_ASM("asm/nonmatchings/g_camera", gsManagementCamera2);
