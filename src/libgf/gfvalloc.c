#include "gunsuv_usa/libgf/gfvalloc.h"

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

void GFVram_SetFrameBufferSize(Uint32 w, Uint32 h, Uint32 psm)
{
    gf_vramScreenInfo.frameBuffer.w = w;
    gf_vramScreenInfo.frameBuffer.h = h;
    gf_vramScreenInfo.frameBuffer.psm = psm;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_SetZBufferSize);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_SetScreenBufferSize);

GF_VRAM_SCREEN_INFO* GFVram_GetScreenInfo()
{
    return &gf_vramScreenInfo;
}
