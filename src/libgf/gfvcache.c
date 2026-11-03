#include "common.h"

extern void gfCache_GetCellByGuid();

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_SetInfoAddr);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_Flush);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_GetPresetTransPos);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_ClearAllCell);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_GetUnusedCell);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_Alloc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_SearchAllocPos);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_Alloc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_PseudoAlloc);

void GFCache_IsOn()
{
    gfCache_GetCellByGuid();
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_GetCellByGuid);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_ChangeScore);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_Invalidate);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_DefragCell);
