#include "gunsuv_usa/libgf/gfanim.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_InterpolateQuaternion);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_VectorToMatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_Attach);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_HotAttach);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_Attach);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_ScaleMatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_CalcMyMatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_calcmatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_Eval);

void GFAnim_SetSpeed(GF_INST_OBJECT* obj, Float32 speed)
{
    obj->speedAnim = speed;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_Forward);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_ShapeFlagCheck);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_ShapeFlagSet);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_ShapeFlagClear);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_SetNextAnimation);

void GFAnim_SetCallbackFunction(GF_INST_OBJECT* object, GF_CallBackFunction function)
{
    object->func = function;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_CalcPosition);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_MatToQuat);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_QuaternionToMatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_NormalizeQuaternion);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_InterpolateVector);

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

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_InterpolateQuat);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_Sinf);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_Arccosf);
