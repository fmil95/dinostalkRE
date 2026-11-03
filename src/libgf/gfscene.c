#include "common.h"

extern void GFFog_MakePacket();

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_MakeInstance);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetViewScreen);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetViewClip);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetClipScreen);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetScreen);

void GFScene_MakePacket(void* a)
{
    GFFog_MakePacket((char*)a + 0x290);
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetWorldView);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetCameraPos);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_Eval);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_Draw);
