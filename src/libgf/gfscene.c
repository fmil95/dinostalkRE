#include "common.h"

extern void GFFog_MakePacket();
extern void sceVu0CopyVector();

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

void GFScene_SetCameraPos(void* a)
{
    sceVu0CopyVector((char*)a + 0x280);
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_Eval);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_Draw);
