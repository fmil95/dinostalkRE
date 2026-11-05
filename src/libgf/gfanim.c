#include "gunsuv_usa/libgf/gfanim.h"

extern void gfAnim_Attach(GF_INST_OBJECT* obj, PmtHEADER* anim, Uint32 flag);

extern sceVu0FVECTOR D_00655CB0; // gfAnim_Sinf static s225 in STAB, data still in asm
INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_InterpolateQuaternion);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_VectorToMatrix);

void GFAnim_Attach(GF_INST_OBJECT* obj, PmtHEADER* anim)
{
    gfAnim_Attach(obj, anim, 0);
}

void GFAnim_HotAttach(GF_INST_OBJECT* obj, PmtHEADER* anim)
{
    gfAnim_Attach(obj, anim, 4);
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_Attach);

void GFAnim_ScaleMatrix(float *out_mat[4], float *in_mat[4], float *scale)
{
    sceVu0ScaleVector((float*)out_mat, (float*)in_mat, scale[0]);
    sceVu0ScaleVector((float*)out_mat + 4, (float*)in_mat + 4, scale[1]);
    sceVu0ScaleVector((float*)out_mat + 8, (float*)in_mat + 8, scale[2]);
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_CalcMyMatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_calcmatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_Eval);

void GFAnim_SetSpeed(GF_INST_OBJECT* obj, Float32 speed)
{
    obj->speedAnim = speed;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_Forward);

Uint32 GFAnim_ShapeFlagCheck(GF_INST_OBJECT* obj, Uint32 flag2)
{
    Uint32 flag;
    Sint32 i;
    GF_INST_SHAPE* shape;

    flag = 0xFFFFFFFF;
    shape = obj->shape;

    for (i = 0; i < obj->nShape; i++, shape++)
    {
        if (shape->keyHead != NULL)
        {
            flag &= shape->flagAnim;
        }
    }

    return flag;
}

Uint32 GFAnim_ShapeFlagSet(GF_INST_OBJECT* obj, Uint32 setFlag)
{
    Sint32 i;
    GF_INST_SHAPE* shape;

    shape = obj->shape;

    for (i = 0; i < obj->nShape; i++, shape++)
    {
        shape->flagAnim |= setFlag;
    }

    return setFlag;
}

Uint32 GFAnim_ShapeFlagClear(GF_INST_OBJECT* obj, Uint32 setFlag)
{
    Sint32 i;
    GF_INST_SHAPE* shape;

    shape = obj->shape;

    for (i = 0; i < obj->nShape; i++, shape++)
    {
        shape->flagAnim &= ~setFlag;
    }

    return setFlag;
}

void GFAnim_SetNextAnimation(GF_INST_OBJECT* object, PmtHEADER* nextanim, Uint32 flag, Sint32 time)
{
    object->compAllTimeAnim = time;
    object->compCurTimeAnim = 0;
    object->compNextAnim    = nextanim;
    object->flagAnim        = (object->flagAnim & ~0xFF) | (flag & 0xFF);

    gfAnim_Attach(object, nextanim, 3);
}

void GFAnim_SetCallbackFunction(GF_INST_OBJECT* object, GF_CallBackFunction function)
{
    object->func = function;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_CalcPosition);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_MatToQuat);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_QuaternionToMatrix);

static void gfAnim_NormalizeQuaternion(Float32 *v0, Float32 *v1)
{
    asm volatile(
        ".set noreorder\n"
        "lqc2 $vf4, 0x0(%1)\n"
        "vmul.xyzw $vf5, $vf4, $vf4\n"
        "vaddy.x $vf5, $vf5, $vf5y\n"
        "vaddz.x $vf5, $vf5, $vf5z\n"
        "vaddw.x $vf5, $vf5, $vf5w\n"
        "vsqrt Q, $vf5x\n"
        "vwaitq\n"
        "vaddq.x $vf5, $vf0, Q\n"
        "vnop\n"
        "vnop\n"
        "vdiv Q, $vf0w, $vf5x\n"
        "vsub.xyzw $vf6, $vf0, $vf0\n"
        "vwaitq\n"
        "vmulq.xyzw $vf6, $vf4, Q\n"
        "sqc2 $vf6, 0x0(%0)\n"
        ".set reorder\n"
        : : "r"(v0), "r"(v1) : "memory");
}

static void gfAnim_InterpolateVector(float* v0, float* v1, float* v2, Float32 t, Sint32 is_rot)
{
    asm volatile(
        ".set noreorder\n"
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x0(%2)\n"
        "mfc1 $8, %3\n"
        "qmtc2.ni $8, $vf6\n"
        "vsub.xyzw $vf7, $vf5, $vf4\n"
        "vmulx.xyzw $vf7, $vf7, $vf6x\n"
        "vadd.xyzw $vf9, $vf7, $vf4\n"
        "sqc2 $vf9, 0x0(%0)\n"
        ".set reorder\n"
        : : "r"(v0), "r"(v1), "r"(v2), "f"(t) : "$8", "memory");
}

static void gfAnim_Vu0CopyQuat(Float32* v0, Float32* v1)
{
    asm volatile(
        ".set noreorder\n"
        "lq $6, 0x0(%1)\n"
        "sq $6, 0x0(%0)\n"
        ".set reorder\n"
        : : "r"(v0), "r"(v1) : "$6", "memory");
}

static Float32 gfAnim_Vu0InnerProduct(Float32* v0, Float32* v1)
{
    Float32 ret;

    asm volatile(
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x0(%2)\n"
        "vmul.xyzw $vf5, $vf4, $vf5\n"
        "vaddy.x $vf5, $vf5, $vf5y\n"
        "vaddz.x $vf5, $vf5, $vf5z\n"
        "vaddw.x $vf5, $vf5, $vf5w\n"
        "qmfc2.ni %0, $vf5\n"
        : "=r"(ret) : "r"(v0), "r"(v1));

    return ret;
}

static void gfAnim_InterpolateQuat(Float32* v0, Float32* v1, Float32* v2, Float32 sin_0, Float32 sin_1)
{
    asm volatile(
        ".set noreorder\n"
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x0(%2)\n"
        "mfc1 $8, %3\n"
        "qmtc2.ni $8, $vf6\n"
        "mfc1 $9, %4\n"
        "qmtc2.ni $9, $vf7\n"
        "vmulx.xyzw $vf4, $vf4, $vf6x\n"
        "vmulx.xyzw $vf5, $vf5, $vf7x\n"
        "vadd.xyzw $vf9, $vf4, $vf5\n"
        "sqc2 $vf9, 0x0(%0)\n"
        ".set reorder\n"
        : : "r"(v0), "r"(v1), "r"(v2), "f"(sin_0), "f"(sin_1) : "$8", "$9", "memory");
}

static Float32 gfAnim_Sinf(Float32 ratio)
{
    Float32 x2;
    sceVu0FVECTOR x329;

    x2 = ratio * ratio;
    x329[0] = ratio * x2;
    x329[1] = x329[0] * x2;
    x329[2] = x329[1] * x2;
    x329[3] = x329[2] * x2;

    asm volatile(
        ".set noreorder\n"
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x0(%2)\n"
        "vmul.xyzw $vf5, $vf4, $vf5\n"
        "vaddy.x $vf5, $vf5, $vf5y\n"
        "vaddz.x $vf5, $vf5, $vf5z\n"
        "vaddw.x $vf5, $vf5, $vf5w\n"
        "qmfc2.ni $2, $vf5\n"
        "mtc1 $2, %0\n"
        "nop\n"
        ".set reorder\n"
        : "=f"(x2) : "r"(x329), "r"(D_00655CB0) : "$2");

    return x2 + ratio;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_Arccosf);
