#include "common.h"

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_Update);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetStartPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetEndPos);

void GFFlare_SetColorRate(void* p, float v)
{
    STRUCT_OFFSET(p, 0x138, float) = v;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetTextureID);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetPosScale);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetSize);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetSibling);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetRGBA);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_SetSTWH);

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_Draw);

void GFFlare_Eval(void) {
}

INCLUDE_ASM("asm/nonmatchings/benjamin/flare", GFFlare_MakeInstance);
