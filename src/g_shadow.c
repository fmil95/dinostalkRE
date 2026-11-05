#include "common.h"
#include "g_shadow.h"

extern float gpShadowFarZ;
extern float gpShadowMaxAlpha;
extern float D_0068D8E4[];
extern float D_002AF960[];
extern char gpShadowLightVector[];
extern void sceVu0Normalize();

extern int* gpShadowBefore;
extern int* gpShadowBegin;
INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_Init);

void gpShadow_InitShadow(int* s)
{
    int* b = gpShadowBefore;

    s[7] = 0;
    ((float*)s)[2] = 4.0f;
    s[0] = 0;
    s[3] = 0;
    s[4] = 0;
    s[6] = 0;
    s[5] = 0;
    s[1] = 0;

    if (b)
    {
        b[7] = (int)s;
    }
    else
    {
        gpShadowBegin = s;
    }

    gpShadowBefore = s;
}

void gpShadow_SetSortKey(float x)
{
    D_0068D8E4[0] = x;
}

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_MakePreset);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_MakeShapePacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_MakeVertexPacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_GifPacketMask);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_GifPacketShadow);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_GifPacketCover);

void gpShadow_Eval()
{
    gpShadowFarZ = D_002AF960[0];
}

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_AddPacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_Draw);

void gpShadow_SetObject(void* p, int v)
{
    STRUCT_OFFSET(p, 0x18, int) = v;
}

void gpShadow_Visible(void* p, int v)
{
    STRUCT_OFFSET(p, 0x0, int) = v;
}

void gpShadow_SetVolumeLength(void* p, float v)
{
    STRUCT_OFFSET(p, 0x8, float) = v;
}

void gpShadow_ReSetScreenFarZ(float v)
{
    gpShadowFarZ = v;
}

void gpShadow_SetMaxAlpha(float v)
{
    gpShadowMaxAlpha = v;
}

void gpShadow_SetLightVector(int a)
{
    sceVu0Normalize(gpShadowLightVector, a);
}

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_InitPacket);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_CalcParam);

static int gpShadow_CheckClip(float* v, float* m)
{
    int ret;

    asm volatile(
        ".set noreorder\n"
        "lqc2 $vf4, 0x0(%2)\n"
        "lqc2 $vf5, 0x10(%2)\n"
        "lqc2 $vf6, 0x20(%2)\n"
        "lqc2 $vf7, 0x30(%2)\n"
        "lqc2 $vf8, 0x0(%1)\n"
        "ctc2.ni $0, $vi18\n"
        "vmulax.xyzw ACC, $vf4, $vf8x\n"
        "vmadday.xyzw ACC, $vf5, $vf8y\n"
        "vmaddaz.xyzw ACC, $vf6, $vf8z\n"
        "vmaddw.xyzw $vf9, $vf7, $vf0w\n"
        "vclipw.xyz $vf9, $vf9w\n"
        "vnop\n"
        "vnop\n"
        "vnop\n"
        "cfc2.ni %0, $vi18\n"
        "nop\n"
        "andi %0, %0, 0x3F\n"
        "beqz %0, 1f\n"
        "nop\n"
        "addi %0, $0, 0x1\n"
        "1:\n"
        ".set reorder\n"
        : "=r"(ret) : "r"(v), "r"(m));

    return ret;
}

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_DrawParam);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_AllMatrixTransfer);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_Start);

INCLUDE_ASM("asm/nonmatchings/g_shadow", gpShadow_End);
