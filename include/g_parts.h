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
int gpEntryWorldObjAnim(char* w, int i, int v);
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
void gpSetMatrixZYX();
void gpStandardizeBoundBox(float* a, float* b);
int gpCompareBoundBox(float* a, float* b, float* c, float* d);
gpFloat2Int();
float gpArcTan(float y, float x);
float gpArcTanHi(float y, float x);
gpAddRotation();
void gpRotTransXYZ(float* v0, float* v1, float* rot);
void gpRotTransZYX(float* v0, float* v1, float* rot);
void gpRotTransZXY(float* v0, float* v1, float* rot);
void gpVector2RotZYX(float* r, float* v);
void gpVector2RotXYZ(float* r, float* v);
float gpGetLength(float* v);
void gpVector2RotZYX_Hi(float* r, float* v);
gpJudgeCircleOnLine();
gpGetNearTriangle();
_gpGetNearTriangle2();
gpGetNearTriangle2();
gpGetNearTriangle3();
float gpGetMaxVal(float a, float b);
float gpGetMinVal(float a, float b);
void _gpGetCollisionObjectBox(int shape, int obj, float* a, float* b, float r);
int gpGetCollisionObjectBox(int obj, float* a, float* b, float r);
void _gpGetCollisionObjectBox2(int shape, int obj, float* a, float* b, float r);
int gpGetCollisionObjectBox2(int obj, float* a, float* b, float r);
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
