#include "gunsuv_usa/libgf/gfvcache.h"

extern GF_CACHE_HEAD* gfInfoHead_00674cd8;
extern GF_CACHE_CELL* gfInfo_00674cdc;

static GF_CACHE_CELL* gfCache_GetCellByGuid(Uint32* guid);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_SetInfoAddr);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_Flush);

Uint16 GFCache_GetPresetTransPos()
{
    return gfInfoHead_00674cd8->preset_pos;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_ClearAllCell);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_GetUnusedCell);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_Alloc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_SearchAllocPos);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_Alloc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_PseudoAlloc);

GF_CACHE_CELL* GFCache_IsOn(Uint32* guid)
{
    return gfCache_GetCellByGuid(guid);
}

static GF_CACHE_CELL* gfCache_GetCellByGuid(Uint32* guid)
{
    GF_CACHE_CELL* p;

    for (p = gfInfo_00674cdc; p != NULL; p = p->next)
    {
        if (p->used_flag != 0 && p->guid == *guid)
        {
            return p;
        }
    }

    return NULL;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_ChangeScore);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_Invalidate);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_DefragCell);
