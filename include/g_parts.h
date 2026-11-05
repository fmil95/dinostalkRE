// STATUS: NOT STARTED

#ifndef G_PARTS_H
#define G_PARTS_H

typedef struct { // 0x8
	/* 0x0 */ int unk0;
	/* 0x4 */ int unk4;
} GP_COLL_TMP;

extern GP_COLL_TMP D_00673400;

_gpGetBoundBox();
gpGetBoundBox();
gpGetNextMaterialBlock();
char* gpGetNextGeometryBlock(char* a, char* b);
void gpInitWorldManager();
void gpStepWorldManagerOverHead_GV(void* a);
gpEntryWorldManagerOverHead_GV();
gpStepWorldManagerOverHead_ODV();
gpEntryWorldManagerOverHead_ODV();
gpEntryWorldManagerGV();
gpEntryWorldManagerODV();
void gpSetWorldManagerMatrixGND(char* a);
gpEntryWorldManagerGND();
gpEntryWorldManagerOBJ();
gpAttachWorldDispOBJ();
gpEntryWorldManagerBACK();
gpEntryWorldObjAnim();
gpEntryWorldManagerGND_LOOP();
void gpSetCollisionSkipGV(void* a, int b);
void gpSetCollisionSkipODV(void* a, int b);
gpJudgeCollisionSphere();
gpSetCollisionTriangleInfo();
void gpModifyCollisionTriangle(char* a, char* b);
void gpModifyCollisionTriangle2();
gpJudgeCollisionTerms();
gpJudgeCollisionTermsCHR();
int gpGetCollisionSphere(int a0, int a1, int a2);
int gpGetCollisionSphere2();
gpGetCollisionSphereGND();
gpGetCollisionSphereOBJ();
gpJudgeCollisionLine();
gpJudgeCollisionLineGND();
int gpGetCollisionLine(int a0, int a1, int a2, int a3);
int gpGetCollisionLine2();
gpGetCollisionLineGND();
gpGetCollisionLineOBJ();
void gpSetMatrixXYZ();
gpSetMatrixZYX();
gpStandardizeBoundBox();
gpCompareBoundBox();
gpFloat2Int();
gpArcTan();
gpArcTanHi();
gpAddRotation();
gpRotTransXYZ();
gpRotTransZYX();
gpRotTransZXY();
gpVector2RotZYX();
gpVector2RotXYZ();
gpGetLength();
gpVector2RotZYX_Hi();
gpJudgeCircleOnLine();
gpGetNearTriangle();
_gpGetNearTriangle2();
gpGetNearTriangle2();
gpGetNearTriangle3();
gpGetMaxVal();
gpGetMinVal();
_gpGetCollisionObjectBox();
gpGetCollisionObjectBox();
_gpGetCollisionObjectBox2();
gpGetCollisionObjectBox2();
gpGetNearObjectBox();
gpClipShape();
gpClipWorldShape();
void gpClearWorldRecov();
gpInstance_MakeRotMatrix();
void gpInstance_Eval(int a);
gpGetEyeComLine();
_gpGetEyeComLine();
gpGetEyeComLineOBJ();
gpGetEyeComSquareOBJ();
gpJudgeCollisionVertex();
int gpGetCollisionVertex(int a0, int a1, int a2);
int gpGetCollisionVertex2();
gpGetCollisionVertexGND();
gpGetCollisionVertexOBJ();
void* gpMakeWorldOdvGeomBound(char* a);
#endif // G_PARTS_H
