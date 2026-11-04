#include "common.h"

extern void sceVu0CopyVector();
extern void sceVu0CopyVectorXYZ();
extern void sceVu0UnitMatrix();
extern void sceVu0RotMatrix();

extern void* GFTex_GetDb();
INCLUDE_ASM("asm/nonmatchings/particle", gf_MyRand);

INCLUDE_ASM("asm/nonmatchings/particle", gf_MyRandRange);

INCLUDE_ASM("asm/nonmatchings/particle", gf_MyRandRangeV);

INCLUDE_ASM("asm/nonmatchings/particle", gf_GetDistance);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_Update);

void GFParticle_Kill(char* a)
{
    u_int i;
    char* p = STRUCT_OFFSET(a, 0xF0, char*);

    for (i = 0; i < STRUCT_OFFSET(a, 0xEC, u_int); i++, p += 0x70)
    {
        STRUCT_OFFSET(p, 0x58, int) = -1;
    }
}

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

void GFParticle_InitPosition(void* a, int b)
{
    sceVu0CopyVector(a, b);
    sceVu0CopyVector((char*)a + 0x10, b);
    STRUCT_OFFSET(a, 0xE8, int) = (STRUCT_OFFSET(a, 0xE8, int) & -9);
}

void GFParticle_SetPosition()
{
    sceVu0CopyVector();
}

void GFParticle_SetPositionFunction(char* a, int f)
{
    STRUCT_OFFSET(a, 0xF4, int) = f;
    if (f)
    {
        STRUCT_OFFSET(a, 0xE8, int) |= 8;
    }
    else
    {
        STRUCT_OFFSET(a, 0xE8, int) &= ~8;
    }
}

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

void GFParticle_SetTextureID(char* a, int b)
{
    if (b == 0xFFFFFFF || GFTex_GetDb(b) != 0)
    {
        STRUCT_OFFSET(a, 0xA0, int) = b;
    }
}

int GFParticle_GetTextureID(void* p)
{
    return STRUCT_OFFSET(p, 0xA0, int);
}

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetAttractRate);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetCollidePlane);

INCLUDE_ASM("asm/nonmatchings/particle", GFParticle_SetTail);

void GFParticle_SetCreateRange(char* a, void* b, void* c)
{
    sceVu0CopyVector(a + 0x70, b);
    sceVu0CopyVector(a + 0x80, c);
}

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
INCLUDE_RODATA("asm/nonmatchings/particle", D_00664700);

INCLUDE_RODATA("asm/nonmatchings/particle", D_00664708);

INCLUDE_RODATA("asm/nonmatchings/particle", jtbl_00664710);

INCLUDE_RODATA("asm/nonmatchings/particle", jtbl_00664730);

INCLUDE_RODATA("asm/nonmatchings/particle", D_00664750);

INCLUDE_RODATA("asm/nonmatchings/particle", D_00664770);

INCLUDE_RODATA("asm/nonmatchings/particle", D_00664790);

INCLUDE_RODATA("asm/nonmatchings/particle", D_006647B0);

INCLUDE_RODATA("asm/nonmatchings/particle", D_006647D0);

INCLUDE_RODATA("asm/nonmatchings/particle", D_006647F0);

INCLUDE_RODATA("asm/nonmatchings/particle", D_00664810);

INCLUDE_RODATA("asm/nonmatchings/particle", D_00664830);

INCLUDE_RODATA("asm/nonmatchings/particle", D_00664850);

