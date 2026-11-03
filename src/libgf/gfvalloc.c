#include "common.h"

extern char gf_vramScreenInfo[];

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_SetInfoAddr);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_ClearAllCell);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_GetUnusedCell);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_AddFreeArea);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_Alloc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_SearchArea);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_PseudoAlloc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_Free);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_PsmToFlag);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_ChangeArea);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_SearchCellByPos);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_DefragCell);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_FreeAll);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_PrintAllocationStatus);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_SetFrameBufferSize);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_SetZBufferSize);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_SetScreenBufferSize);

void* GFVram_GetScreenInfo()
{
    return gf_vramScreenInfo;
}
