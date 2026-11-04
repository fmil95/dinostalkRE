#include "common.h"
#include <libvu0.h>
extern void GFTrack_Lifeless();

extern void* GFTex_GetDb();
extern void* gf_default_track_drawfunc[];
extern void* gf_default_track_evalfunc[];
extern void GFInstance_InitHead();
INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_Update);

void GFTrack_MallocMemory(void* a, int b, int c)
{
    STRUCT_OFFSET(a, 0x0, int) = b;
    STRUCT_OFFSET(a, 0x4, int) = c;
    STRUCT_OFFSET(a, 0xC, int) = 0;
    STRUCT_OFFSET(a, 0xC0, int) = 0;
    GFTrack_Lifeless(a);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_Lifeless);

void GFTrack_SetTextureID(void* t, int id)
{
    if (id == -3 || GFTex_GetDb(id) != NULL)
    {
        STRUCT_OFFSET(t, 0x8, int) = id;
    }
}

int GFTrack_GetTextureID(void* p)
{
    return STRUCT_OFFSET(p, 0x8, int);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_SetStartRGBA);

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_SetEndRGBA);

void GFTrack_SetStartST(void* t, sceVu0FVECTOR a, sceVu0FVECTOR b)
{
    sceVu0CopyVector((float*)((char*)t + 0x80), a);
    sceVu0CopyVector((float*)((char*)t + 0x90), b);
    STRUCT_OFFSET(t, 0xC, int) |= 0x10;
}

void GFTrack_SetEndST(void* t, sceVu0FVECTOR a, sceVu0FVECTOR b)
{
    sceVu0CopyVector((float*)((char*)t + 0xA0), a);
    sceVu0CopyVector((float*)((char*)t + 0xB0), b);
    STRUCT_OFFSET(t, 0xC, int) |= 0x10;
}

void GFTrack_SetStartPos(void* t, sceVu0FVECTOR a, sceVu0FVECTOR b)
{
    sceVu0CopyVector((float*)((char*)t + 0x60), a);
    sceVu0CopyVector((float*)((char*)t + 0x70), b);
    STRUCT_OFFSET(t, 0xC, int) |= 0x8;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_InitStartPos);

void GFTrack_AddFlag(void* a, int b)
{
    STRUCT_OFFSET(a, 0xC, int) = (STRUCT_OFFSET(a, 0xC, int) | b);
}

void GFTrack_EraseFlag(void* a, int b)
{
    STRUCT_OFFSET(a, 0xC, int) = (STRUCT_OFFSET(a, 0xC, int) & ~b);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_Draw);

void GFTrack_Eval(void) {
}

void GFTrack_MakeInstance(void* t)
{
    STRUCT_OFFSET(t, 0xCC, int) = 0x400;
    GFInstance_InitHead(t);
    STRUCT_OFFSET(t, 0xDC, void**) = gf_default_track_drawfunc;
    STRUCT_OFFSET(t, 0xD8, void**) = gf_default_track_evalfunc;
    STRUCT_OFFSET(t, 0x104, int) = 0;
    STRUCT_OFFSET(t, 0x100, int) = 0;
    STRUCT_OFFSET(t, 0xD0, int) = 0x10;
}

void GFTrack_OffInstance(void* a)
{
    STRUCT_OFFSET(a, 0xD0, int) = (STRUCT_OFFSET(a, 0xD0, int) | 0x10);
}
