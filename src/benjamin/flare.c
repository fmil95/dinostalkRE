#include "common.h"

extern void sceVu0CopyVector();

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_Update);

void GFFlare_SetStartPos(void* a)
{
    sceVu0CopyVector((char*)a + 0x110);
}

void GFFlare_SetEndPos(void* a)
{
    sceVu0CopyVector((char*)a + 0x120);
}

void GFFlare_SetColorRate(void* p, float v)
{
    STRUCT_OFFSET(p, 0x138, float) = v;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetTextureID);

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
