// STATUS: NOT STARTED

#ifndef G_CAMERA_H
#define G_CAMERA_H

#include "common.h"
#include "frozen_types.h"

int gsSetCameraMatrix();
void gsCameraCalcRotMatrix();
int gsCameraCalcRotMatrix_COMPEL();
int gsMoveCamera();
int gsInitCamera();
void gsCameraSetParam_START_GAME();
void gsCameraSetParam_AFTER_STAGE();
void gsCameraSetParam_FROM_CONTINUE();
int gsManagementCamera();
int gsManagementCamera_COMPEL();
int gsGetCameraRot();
int gsGetCameraRot_COMPEL();
int gsGetCameraVct();
int gsCameraGetDinoCollision();
int gsCameraGetDinoCollision_COMPEL();
int gsSetCameraMove();
int gsSetCameraMove_COMPEL();
int _gsGetCollisionWorld();
int gsGetCollisionWorld();
int gsGetCameraTilt();
int gsGetCameraAmp();
int gsCameraGetItem();
int gsCameraEntryDamageEffect(Camera* c, int type, float* v, float f);
int gsCameraDamageEffect();
int gsCameraShock_ENTRY();
int gsCameraShock_EXEC();
int gsCameraShock_RESET();
int gsCameraSearchTarget();
int gsCameraSearchTargetM();
int gsCameraSearchTargetH();
int gsCameraTraceTarget();
int gsCameraDemoSearch();
int gsCameraPutGND();
int gsCameraPutGND_COMPEL();
int gsInitCocpit();
int gsPutCocpit();
int gsMoveSight();
int gsSetBashMark();
int gsPutBashMark();
int gsChangeArms();
int gsPutScope_INIT();
int gsPutScope();
int gsGetCameraRot_SCP();
int gsGetCameraZoom();
int gsPutCinesco();
int gsCameraUseItem_INIT();
int gsCameraUseItem_ENTRY();
int gsCameraUseItem_EXEC();
int gsCameraCountItem_Medicine();
int gsCameraCountItem_Revicer();
int gsCameraCountItem_Antidote();
int gsCameraCountItem_Tachyon();
int gsCameraSetPauseParam();
int gsCameraTraceTilt();
int gsCameraGetRaderDir_INIT();
int gsCameraGetRaderDir_EXEC();
int gsManagementCamera2();

extern Camera gsCamera;
extern Unknown1 gsArmsTypeTbl;
extern int gsCurProg;

#endif // G_CAMERA_H
