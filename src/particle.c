#include "common.h"

extern void sceVu0CopyVector();
extern void sceVu0CopyVectorXYZ();
extern void sceVu0UnitMatrix();
extern void sceVu0RotMatrix();

INCLUDE_ASM("asm/nonmatchings/particle", gf_MyRand);

INCLUDE_ASM("asm/nonmatchings/particle", gf_MyRandRange);

INCLUDE_ASM("asm/nonmatchings/particle", gf_MyRandRangeV);

INCLUDE_ASM("asm/nonmatchings/particle", gf_GetDistance);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_Update);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_Kill);

INCLUDE_ASM("asm/nonmatchings/particle", gf_UpdateAllParticle);

INCLUDE_ASM("asm/nonmatchings/particle", gf_CreateSingleParticle);

INCLUDE_ASM("asm/nonmatchings/particle", gf_ParticleInitAnimData);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_MallocMemory);

void GFParticle_SetAnimTbl(void* p, int v)
{
    STRUCT_OFFSET(p, 0xFC, int) = v;
}

void GFParticle_SetAnimTexInfoTbl(void* p, int v)
{
    STRUCT_OFFSET(p, 0xF8, int) = v;
}

int GFParticle_GetSize(void* p)
{
    return STRUCT_OFFSET(p, 0xEC, int);
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_Lifeless);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetStartRGBA);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetEndRGBA);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetRGBAVar);

void GFParticle_SetStatus(void* p, int v)
{
    STRUCT_OFFSET(p, 0xE8, int) = v;
}

void GFParticle_AddStatus(void* a, int b)
{
    STRUCT_OFFSET(a, 0xE8, int) = (STRUCT_OFFSET(a, 0xE8, int) | b);
}

void GFParticle_EraseStatus(void* a, int b)
{
    STRUCT_OFFSET(a, 0xE8, int) = (STRUCT_OFFSET(a, 0xE8, int) & ~b);
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_InitPosition);

void GFParticle_SetPosition()
{
    sceVu0CopyVector();
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetPositionFunction);

void GFParticle_SetGravity(void* a)
{
    sceVu0CopyVectorXYZ((char*)a + 0x50);
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetSize);

void GFParticle_SetSpeed(void* a, float x, float y)
{
    STRUCT_OFFSET(a, 0xC8, float) = x;
    STRUCT_OFFSET(a, 0xCC, float) = y;
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetSeparateAngle);

void GFParticle_SetLife(void* a, float x, float y)
{
    STRUCT_OFFSET(a, 0xD0, float) = x;
    STRUCT_OFFSET(a, 0xD4, float) = y;
}

void GFParticle_SetCreateSpeed(void* a, float x, float y)
{
    STRUCT_OFFSET(a, 0xA4, float) = x;
    STRUCT_OFFSET(a, 0xA8, float) = y;
    STRUCT_OFFSET(a, 0xAC, int) = 0;
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetTextureID);

int GFParticle_GetTextureID(void* p)
{
    return STRUCT_OFFSET(p, 0xA0, int);
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetAttractRate);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetCollidePlane);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetTail);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetCreateRange);

void GFParticle_SetAttractPos(void* a)
{
    sceVu0CopyVectorXYZ((char*)a + 0x90);
}

void GFParticle_SetAlphaType(void* p, int v)
{
    STRUCT_OFFSET(p, 0x140, int) = v;
}

void GFParticle_SetDirection(int a, int b)
{
    sceVu0UnitMatrix((char*)a + 0x100, b);
    sceVu0RotMatrix((char*)a + 0x100, (char*)a + 0x100, b);
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_Draw);

void GFParticle_Eval(void) {
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_MakeInstance);

void GFParticle_OffInstance(void* a)
{
    STRUCT_OFFSET(a, 0xD0, int) = (STRUCT_OFFSET(a, 0xD0, int) & -17);
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_Vu0RandomInit);

void GFParticle_SetExecFunction(void* p, int v)
{
    STRUCT_OFFSET(p, 0x148, int) = v;
}

void GFParticle_SetMulVelocity(void* p, float v)
{
    STRUCT_OFFSET(p, 0x144, float) = v;
}
