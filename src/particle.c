#include "common.h"

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

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_AddStatus);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_EraseStatus);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_InitPosition);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetPosition);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetPositionFunction);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetGravity);

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

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetAttractPos);

void GFParticle_SetAlphaType(void* p, int v)
{
    STRUCT_OFFSET(p, 0x140, int) = v;
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetDirection);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_Draw);

void GFParticle_Eval(void) {
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_MakeInstance);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_OffInstance);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_Vu0RandomInit);

void GFParticle_SetExecFunction(void* p, int v)
{
    STRUCT_OFFSET(p, 0x148, int) = v;
}

void GFParticle_SetMulVelocity(void* p, float v)
{
    STRUCT_OFFSET(p, 0x144, float) = v;
}
