#include "common.h"

extern void _gpClearWorldRecov();

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetBoundBox);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetBoundBox);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetNextMaterialBlock);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetNextGeometryBlock);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpInitWorldManager);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpStepWorldManagerOverHead_GV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerOverHead_GV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpStepWorldManagerOverHead_ODV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerOverHead_ODV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerGV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerODV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpSetWorldManagerMatrixGND);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerGND);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpAttachWorldDispOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerBACK);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldObjAnim);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerGND_LOOP);

void gpSetCollisionSkipGV(void* a, int b)
{
    STRUCT_OFFSET(a, 0xC8758, int) = b;
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpSetCollisionSkipODV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionSphere);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpSetCollisionTriangleInfo);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpModifyCollisionTriangle);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpModifyCollisionTriangle2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionTerms);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionTermsCHR);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionSphere);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionSphere2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionSphereGND);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetCollisionSphereOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionSphereOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionLine);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionLineGND);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionLine);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionLine2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionLineGND);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetCollisionLineOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionLineOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpSetMatrixXYZ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpSetMatrixZYX);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpStandardizeBoundBox);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpCompareBoundBox);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpFloat2Int);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpArcTan);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpArcTanHi);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpAddRotation);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpRotTransXYZ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpRotTransZYX);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpRotTransZXY);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpVector2RotZYX);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpVector2RotXYZ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetLength);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpVector2RotZYX_Hi);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCircleOnLine);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetNearTriangle);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetNearTriangle2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetNearTriangle2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetNearTriangle3);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetMaxVal);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetMinVal);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetCollisionObjectBox);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionObjectBox);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetCollisionObjectBox2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionObjectBox2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetNearObjectBox);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpClipShape);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpClipShape);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpClipWorldShape);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpClipWorldShape);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpClearWorldRecov);

void gpClearWorldRecov()
{
    _gpClearWorldRecov();
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpInstance_MakeRotMatrix);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpInstance_Eval2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpInstance_Eval);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetEyeComLine);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetEyeComLine);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetEyeComLineOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetEyeComLineOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetEyeComSquare);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetEyeComSquareOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetEyeComSquareOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionVertex);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionVertex);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionVertex2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionVertexGND);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetCollisionVertexOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionVertexOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetPodGeometryNum);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetPodGeometryNum);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpMakeWorldOdvGeomBound);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpMakeWorldOdvGeomBound);
