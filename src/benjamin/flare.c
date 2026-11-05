#include "common.h"
#include "benjamin/flare.h"
#include <libvu0.h>


extern void* GFTex_GetDb();
INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_Update);

void GFFlare_SetStartPos(char* f, float* v)
{
    sceVu0CopyVector((float*)(f + 0x110), v);
}

void GFFlare_SetEndPos(char* f, float* v)
{
    sceVu0CopyVector((float*)(f + 0x120), v);
}

void GFFlare_SetColorRate(void* p, float v)
{
    STRUCT_OFFSET(p, 0x138, float) = v;
}

void GFFlare_SetTextureID(char* a, int b)
{
    if (b == 0xFFFFFFF || GFTex_GetDb(b) != 0)
    {
        STRUCT_OFFSET(a, 0x28, int) = b;
    }
}

void GFFlare_SetPosScale(void* p, float v)
{
    STRUCT_OFFSET(p, 0x20, float) = v;
}

void GFFlare_SetSize(void* p, float v)
{
    STRUCT_OFFSET(p, 0x24, float) = v;
}

void GFFlare_SetSibling(void* p, int v)
{
    STRUCT_OFFSET(p, 0x2C, int) = v;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetRGBA);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetSTWH);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_Draw);

void GFFlare_Eval(void) {
}

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_MakeInstance);
