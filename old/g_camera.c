// STATUS: NOT STARTED

#include "g_camera.h"
#include "g_gun.h"
#include "hyopen.h"
#include "frozen_types.h"

Unknown1 gsArmsTypeTbl;

Camera gsCamera;

int gsCurProg;

gsSetCameraMatrix() {}

gsCameraCalcRotMatrix() {}

gsCameraCalcRotMatrix_COMPEL() {}

gsMoveCamera() {}

gsInitCamera() {}

/* 100% match */
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

/* 100% match */
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

/* 100% match */
void gsCameraSetParam_FROM_CONTINUE() 
{
    gsCamera.unkF4 = 5.0f;
}

gsManagementCamera() {}

gsManagementCamera_COMPEL() {}

gsGetCameraRot() {}

gsGetCameraRot_COMPEL() {}

gsGetCameraVct() {}

static _getPartsTrans_BDINO() {}

gsCameraGetDinoCollision() {}

gsCameraGetDinoCollision_COMPEL() {}

gsSetCameraMove() {}

gsSetCameraMove_COMPEL() {}

_gsGetCollisionWorld() {}

gsGetCollisionWorld() {}

gsGetCameraTilt() {}

gsGetCameraAmp() {}

static _gsCameraGetItem() {}

gsCameraGetItem() {}

static gsCameraSubLife() {}

gsCameraEntryDamageEffect() {}

static _gsCameraDamageEffect() {}

static _gsCameraDamageEffect_TREX() {}

static gsCameraDamageEffect_TREX() {}

gsCameraDamageEffect() {}

gsCameraShock_ENTRY() {}

gsCameraShock_EXEC() {}

gsCameraShock_RESET() {}

static _searchTarget_GetPos() {}

gsCameraSearchTarget() {}

gsCameraSearchTargetM() {}

gsCameraSearchTargetH() {}

gsCameraTraceTarget() {}

gsCameraDemoSearch() {}

gsCameraPutGND() {}

gsCameraPutGND_COMPEL() {}

gsInitCocpit() {}

gsPutCocpit() {}

gsMoveSight() {}

gsSetBashMark() {}

gsPutBashMark() {}

gsChangeArms() {}

gsPutScope_INIT() {}

static _gsPutScope() {}

static _gsPutScope_MemH() {}

static _gsPutScope_MemV() {}

static _gsPutScope_Font() {}

gsPutScope() {}

gsGetCameraRot_SCP() {}

gsGetCameraZoom() {}

gsPutCinesco() {}

gsCameraUseItem_INIT() {}

gsCameraUseItem_ENTRY() {}

gsCameraUseItem_EXEC() {}

gsCameraCountItem_Medicine() {}

gsCameraCountItem_Revicer() {}

gsCameraCountItem_Antidote() {}

gsCameraCountItem_Tachyon() {}

gsCameraSetPauseParam() {}

static _gsCameraTraceTilt() {}

gsCameraTraceTilt() {}

gsCameraGetRaderDir_INIT() {}

gsCameraGetRaderDir_EXEC() {}

gsManagementCamera2() {}
