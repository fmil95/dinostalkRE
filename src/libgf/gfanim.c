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

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", GFAnim_SetCallbackFunction);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_CalcPosition);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_MatToQuat);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_QuaternionToMatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_NormalizeQuaternion);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_InterpolateVector);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_Vu0CopyQuat);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_Vu0InnerProduct);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_InterpolateQuat);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_Sinf);

INCLUDE_ASM("asm/nonmatchings/libgf/gfanim", gfAnim_Arccosf);
