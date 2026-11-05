#include "common.h"
#include "benjamin/kinematics.h"

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_ComputeJoint);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_JoinNullShape);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_CutNullShape);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_Matrix2Euler);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_OpenPmtAnimation);

static float ik_VectorSquareDistance(float* a, float* b)
{
    float ret;

    asm volatile(
        ".set noreorder\n"
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x0(%2)\n"
        "vsub.xyzw $vf6, $vf4, $vf5\n"
        "vmul.xyz $vf5, $vf6, $vf6\n"
        "vaddy.x $vf5, $vf5, $vf5y\n"
        "vaddz.x $vf5, $vf5, $vf5z\n"
        "qmfc2.ni %0, $vf5\n"
        ".set reorder\n"
        : "=r"(ret) : "r"(a), "r"(b));

    return ret;
}

static void ik_ApplyMatrix(float* out, float* m, float* v)
{
    asm volatile(
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x10(%1)\n"
        "lqc2 $vf6, 0x20(%1)\n"
        "lqc2 $vf7, 0x30(%1)\n"
        "lqc2 $vf8, 0x0(%2)\n"
        "vmulax.xyzw ACC, $vf4, $vf8x\n"
        "vmadday.xyzw ACC, $vf5, $vf8y\n"
        "vmaddaz.xyzw ACC, $vf6, $vf8z\n"
        "vmaddw.xyzw $vf9, $vf7, $vf0w\n"
        "sqc2 $vf9, 0x0(%0)\n"
        : : "r"(out), "r"(m), "r"(v) : "memory");
}

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_AxisAngle2Matrix);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_CheckRotateRestriction);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_UpdateMatrix);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_OffPmtAnimation);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_Interpolate2Anim);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_Interpolate2IK);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_MakeInterpolateMatrix);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_ComputeOneJoint);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_ComputeNullJoint);
