#include "common.h"

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_Update);

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_MallocMemory);

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_Lifeless);

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_SetTextureID);

int GFTrack_GetTextureID(void* p)
{
    return STRUCT_OFFSET(p, 0x8, int);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_SetStartRGBA);

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_SetEndRGBA);

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_SetStartST);

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_SetEndST);

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_SetStartPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_InitStartPos);

void GFTrack_AddFlag(void* a, int b)
{
    STRUCT_OFFSET(a, 0xC, int) = (STRUCT_OFFSET(a, 0xC, int) | b);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_EraseFlag);

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_Draw);

void GFTrack_Eval(void) {
}

INCLUDE_ASM("asm/nonmatchings/benjamin/track", GFTrack_MakeInstance);

void GFTrack_OffInstance(void* a)
{
    STRUCT_OFFSET(a, 0xD0, int) = (STRUCT_OFFSET(a, 0xD0, int) | 0x10);
}
