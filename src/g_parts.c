#include "common.h"
#include <libvu0.h>
#include "g_parts.h"
#include "mem.h"

extern void _gpClearWorldRecov();

extern void _gpGetPodGeometryNum();
extern int eval_time_00673fc8;
extern int eval_end_flag_00673fc4;
extern void gpInstance_Eval2();
extern int gpGetPodGeometryNum();
extern void _gpMakeWorldOdvGeomBound();
extern void* memset();
extern void sceVu0CopyMatrix();
extern int _gpGetCollObjBox_HitShape;
extern int gpCollBoxList[];
typedef struct { char pad[0x7B710]; u_int cnt[200]; int anim[1][8]; } GpWorldAnimS;
INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetBoundBox);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetBoundBox);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetNextMaterialBlock);

char* gpGetNextGeometryBlock(char* a, char* b)
{
    int f = STRUCT_OFFSET(a, 4, int);
    int n = 1;

    if (f & 1)
    {
        n = 2;
    }

    if (f & 2)
    {
        n++;
    }
    if (f & 4)
    {
        n++;
    }
    return b + n * STRUCT_OFFSET(b, 0, int) * 16 + 0x10;
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpInitWorldManager);

void gpStepWorldManagerOverHead_GV(void* a)
{
    STRUCT_OFFSET(a, 0xC6B30, int) = STRUCT_OFFSET(a, 0xC6B30, int) + 1;
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerOverHead_GV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpStepWorldManagerOverHead_ODV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerOverHead_ODV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerGV);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerODV);

void gpSetWorldManagerMatrixGND(char* a)
{
    sceVu0FMATRIX m;

    gpSetMatrixXYZ(m);
    sceVu0CopyMatrix(a, m);
    sceVu0CopyMatrix(a + 0x40, m);
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerGND);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpAttachWorldDispOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerBACK);

int gpEntryWorldObjAnim(char* w, int i, int v)
{
    GpWorldAnimS* p = (GpWorldAnimS*)w;
    u_int c = p->cnt[i];

    if (c < 8)
    {
        p->anim[i][c] = v;
        p->cnt[i] = c + 1;
        return 0;
    }

    return -1;
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpEntryWorldManagerGND_LOOP);

void gpSetCollisionSkipGV(void* a, int b)
{
    STRUCT_OFFSET(a, 0xC8758, int) = b;
}

void gpSetCollisionSkipODV(void* a, int b)
{
    STRUCT_OFFSET(a, 0xC875C, int) = b;
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionSphere);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpSetCollisionTriangleInfo);

void gpModifyCollisionTriangle(char* a, char* b)
{
    char v[16];

    memset(v, 0, 16);
    gpModifyCollisionTriangle2(a, b, v);
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpModifyCollisionTriangle2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionTerms);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionTermsCHR);

int gpGetCollisionSphere(int a0, int a1, int a2)
{
    GP_COLL_TMP tmp;

    tmp = D_00673400;
    return gpGetCollisionSphere2(a0, a1, a2, &tmp);
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionSphere2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionSphereGND);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetCollisionSphereOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionSphereOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionLine);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionLineGND);

int gpGetCollisionLine(int a0, int a1, int a2, int a3)
{
    GP_COLL_TMP tmp;

    tmp = D_00673400;
    return gpGetCollisionLine2(a0, a1, a2, a3, &tmp);
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionLine2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionLineGND);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetCollisionLineOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionLineOBJ);

void gpSetMatrixXYZ(sceVu0FVECTOR* m, float* rot, float* trans, float* scale)
{
    sceVu0UnitMatrix(m);
    sceVu0ScaleVector(m[0], m[0], scale[0]);
    sceVu0ScaleVector(m[1], m[1], scale[1]);
    sceVu0ScaleVector(m[2], m[2], scale[2]);
    sceVu0RotMatrixX(m, m, rot[0]);
    sceVu0RotMatrixY(m, m, rot[1]);
    sceVu0RotMatrixZ(m, m, rot[2]);
    sceVu0TransMatrix(m, m, trans);
}

void gpSetMatrixZYX(sceVu0FVECTOR* m, float* rot, float* trans, float* scale)
{
    sceVu0UnitMatrix(m);
    sceVu0ScaleVector(m[0], m[0], scale[0]);
    sceVu0ScaleVector(m[1], m[1], scale[1]);
    sceVu0ScaleVector(m[2], m[2], scale[2]);
    sceVu0RotMatrixZ(m, m, rot[2]);
    sceVu0RotMatrixY(m, m, rot[1]);
    sceVu0RotMatrixX(m, m, rot[0]);
    sceVu0TransMatrix(m, m, trans);
}

void gpStandardizeBoundBox(float* a, float* b)
{
    asm volatile(
        "lqc2 $vf4, 0x0(%0)\n"
        "lqc2 $vf5, 0x0(%1)\n"
        "vmax.xyzw $vf6, $vf4, $vf5\n"
        "vmini.xyzw $vf7, $vf4, $vf5\n"
        "sqc2 $vf6, 0x0(%0)\n"
        "sqc2 $vf7, 0x0(%1)\n"
        : : "r"(a), "r"(b) : "memory");
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpCompareBoundBox);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpFloat2Int);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpArcTan);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpArcTanHi);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpAddRotation);

void gpRotTransXYZ(float* v0, float* v1, float* rot)
{
    sceVu0FMATRIX m;

    sceVu0UnitMatrix(m);
    sceVu0RotMatrixX(m, m, rot[0]);
    sceVu0RotMatrixY(m, m, rot[1]);
    sceVu0RotMatrixZ(m, m, rot[2]);
    sceVu0ApplyMatrix(v0, m, v1);
}

void gpRotTransZYX(float* v0, float* v1, float* rot)
{
    sceVu0FMATRIX m;

    sceVu0UnitMatrix(m);
    sceVu0RotMatrixZ(m, m, rot[2]);
    sceVu0RotMatrixY(m, m, rot[1]);
    sceVu0RotMatrixX(m, m, rot[0]);
    sceVu0ApplyMatrix(v0, m, v1);
}

void gpRotTransZXY(float* v0, float* v1, float* rot)
{
    sceVu0FMATRIX m;

    sceVu0UnitMatrix(m);
    sceVu0RotMatrixZ(m, m, rot[2]);
    sceVu0RotMatrixX(m, m, rot[0]);
    sceVu0RotMatrixY(m, m, rot[1]);
    sceVu0ApplyMatrix(v0, m, v1);
}

void gpVector2RotZYX(float* r, float* v)
{
    sceVu0FVECTOR t;
    float y;
    float rz;
    float ry;

    sceVu0CopyVector(t, v);
    y = t[1];
    t[3] = 1.0f;
    t[1] = 0.0f;
    rz = gpArcTan(y, gpGetLength(t));
    ry = gpArcTan(t[2], t[0]);
    r[0] = 0.0f;
    r[1] = -ry;
    r[2] = rz;
    r[3] = 1.0f;
}

void gpVector2RotXYZ(float* r, float* v)
{
    sceVu0FVECTOR t;
    float y;
    float rz;
    float ry;

    sceVu0CopyVector(t, v);
    y = t[1];
    t[3] = 1.0f;
    t[1] = 0.0f;
    rz = gpArcTan(y, gpGetLength(t));
    ry = gpArcTan(t[2], t[0]);
    r[0] = rz;
    r[1] = -ry;
    r[2] = 0.0f;
    r[3] = 1.0f;
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetLength);

void gpVector2RotZYX_Hi(float* r, float* v)
{
    sceVu0FVECTOR t;
    float y;
    float rz;
    float ry;

    sceVu0CopyVector(t, v);
    y = t[1];
    t[3] = 1.0f;
    t[1] = 0.0f;
    rz = gpArcTanHi(y, gpGetLength(t));
    ry = gpArcTanHi(t[2], t[0]);
    r[0] = 0.0f;
    r[1] = -ry;
    r[2] = rz;
    r[3] = 1.0f;
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCircleOnLine);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetNearTriangle);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetNearTriangle2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetNearTriangle2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetNearTriangle3);

float gpGetMaxVal(float a, float b)
{
    float ret;

    asm volatile(
        ".set noreorder\n"
        "mfc1 $2, %1\n"
        "mfc1 $3, %2\n"
        "qmtc2.ni $2, $vf4\n"
        "qmtc2.ni $3, $vf5\n"
        "vmax.x $vf6, $vf4, $vf5\n"
        "qmfc2.ni $2, $vf6\n"
        "mtc1 $2, %0\n"
        ".set reorder\n"
        : "=f"(ret) : "f"(a), "f"(b) : "$2", "$3");

    return ret;
}

float gpGetMinVal(float a, float b)
{
    float ret;

    asm volatile(
        ".set noreorder\n"
        "mfc1 $2, %1\n"
        "mfc1 $3, %2\n"
        "qmtc2.ni $2, $vf4\n"
        "qmtc2.ni $3, $vf5\n"
        "vmini.x $vf6, $vf4, $vf5\n"
        "qmfc2.ni $2, $vf6\n"
        "mtc1 $2, %0\n"
        ".set reorder\n"
        : "=f"(ret) : "f"(a), "f"(b) : "$2", "$3");

    return ret;
}

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetCollisionObjectBox);

int gpGetCollisionObjectBox(int obj, float* a, float* b, float r)
{
    sceVu0FVECTOR v;
    int s;

    sceVu0SubVector(v, b, a);
    v[3] = 1.0f;

    if (sceVu0InnerProduct(v, v) > 0.0f)
    {
        s = STRUCT_OFFSET(obj, 0x11C, int);
        _gpGetCollObjBox_HitShape = -1;
        gpCollBoxList[0] = 0;
        _gpGetCollisionObjectBox(s, obj, a, b, r);
        return _gpGetCollObjBox_HitShape;
    }

    return -1;
}

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetCollisionObjectBox2);

int gpGetCollisionObjectBox2(int obj, float* a, float* b, float r)
{
    sceVu0FVECTOR v;
    int s;

    sceVu0SubVector(v, b, a);
    v[3] = 1.0f;

    if (sceVu0InnerProduct(v, v) > 0.0f)
    {
        s = STRUCT_OFFSET(obj, 0x11C, int);
        _gpGetCollObjBox_HitShape = -1;
        gpCollBoxList[0] = 0;
        _gpGetCollisionObjectBox2(s, obj, a, b, r);
        return _gpGetCollObjBox_HitShape;
    }

    return -1;
}

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

void gpInstance_Eval(int a)
{
    eval_time_00673fc8 = 0;
    do
    {
        eval_end_flag_00673fc4 = 1;
        gpInstance_Eval2(a);
        eval_time_00673fc8++;
    } while (eval_end_flag_00673fc4 == 0);
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetEyeComLine);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetEyeComLine);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetEyeComLineOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetEyeComLineOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetEyeComSquare);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetEyeComSquareOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetEyeComSquareOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpJudgeCollisionVertex);

int gpGetCollisionVertex(int a0, int a1, int a2)
{
    GP_COLL_TMP tmp;

    tmp = D_00673400;
    return gpGetCollisionVertex2(a0, a1, a2, &tmp);
}

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionVertex2);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionVertexGND);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetCollisionVertexOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", gpGetCollisionVertexOBJ);

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpGetPodGeometryNum);

int gpGetPodGeometryNum(char* a)
{
    int r = 0;
    char* p = STRUCT_OFFSET(a, 0, char*);

    _gpGetPodGeometryNum(p, STRUCT_OFFSET(p, 0xC, int), &r);
    return r;
}

INCLUDE_ASM("asm/nonmatchings/g_parts", _gpMakeWorldOdvGeomBound);

void* gpMakeWorldOdvGeomBound(char* a)
{
    char* p = STRUCT_OFFSET(a, 0, char*);
    void* m;
    int n = gpGetPodGeometryNum(a);

    m = MEM_MallocAlign(n << 5, 0x40, "g_parts.c", 0x1789);
    _gpMakeWorldOdvGeomBound(p, STRUCT_OFFSET(p, 0xC, int), m);
    return m;
}
