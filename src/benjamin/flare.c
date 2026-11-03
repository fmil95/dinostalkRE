#include "common.h"

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_Update);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetStartPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetEndPos);

void GFFlare_SetColorRate(void* p, float v)
{
    STRUCT_OFFSET(p, 0x138, float) = v;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetTextureID);

void GFFlare_SetPosScale(void* p, float v)
{
    STRUCT_OFFSET(p, 0x20, float) = v;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetSize);

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
