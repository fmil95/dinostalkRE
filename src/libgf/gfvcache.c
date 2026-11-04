#include "gunsuv_usa/libgf/gfvcache.h"

extern GF_CACHE_HEAD* gfInfoHead_00674cd8;
extern GF_CACHE_CELL* gfInfo_00674cdc;

static GF_CACHE_CELL* gfCache_GetCellByGuid(Uint32* guid);

extern Uint32* gfInfoAddr_00673ec0;
static void gfCache_ClearAllCell();
void GFCache_SetInfoAddr(Uint32* buf, Uint32 buf_size, Uint16 cache_pos, Uint16 cache_size, Uint16 preset_size)
{
    if (buf == NULL)
    {
        gfInfoAddr_00673ec0 = NULL;
        return;
    }

    ((GF_CACHE_HEAD*)buf)->size = buf_size;
    ((GF_CACHE_HEAD*)buf)->cellMax = (buf_size - sizeof(GF_CACHE_HEAD)) / sizeof(GF_CACHE_CELL);
    ((GF_CACHE_HEAD*)buf)->cache_size = cache_size;
    ((GF_CACHE_HEAD*)buf)->cache_pos = cache_pos;
    ((GF_CACHE_HEAD*)buf)->preset_pos = cache_pos + (cache_size - preset_size);
    gfInfo_00674cdc = (GF_CACHE_CELL*)(buf + 4);
    gfInfoHead_00674cd8 = (GF_CACHE_HEAD*)buf;
    gfInfoAddr_00673ec0 = buf;

    GFCache_Flush();
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_Flush);

Uint16 GFCache_GetPresetTransPos()
{
    return gfInfoHead_00674cd8->preset_pos;
}

static void gfCache_ClearAllCell()
{
    int i;

    for (i = 0; i < gfInfoHead_00674cd8->cellMax; i++)
    {
        gfInfo_00674cdc[i].stat = 0;
    }
}

static GF_CACHE_CELL* gfCache_GetUnusedCell()
{
    int i;

    for (i = 0; i < gfInfoHead_00674cd8->cellMax; i++)
    {
        if (gfInfo_00674cdc[i].stat == 0)
        {
            return &gfInfo_00674cdc[i];
        }
    }

    return NULL;
}

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

Sint32 GFCache_ChangeScore(Uint32* guid, Sint32 bscore)
{
    GF_CACHE_CELL* p;

    p = gfCache_GetCellByGuid(guid);

    if (p == NULL)
    {
        return 0;
    }

    p->score = bscore;

    return 1;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", GFCache_Invalidate);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvcache", gfCache_DefragCell);
