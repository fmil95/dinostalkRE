#include "gunsuv_usa/libgf/gfvalloc.h"

extern Uint32* gfInfoAddr_00673e88;
extern GF_VRAM_HEAD* gfInfoHead_00674cd0;
extern GF_VRAM_CELL* gfInfo_00674cd4;

static void gfVram_ClearAllCell();
static void gfVram_DefragCell();

static Uint8 gfVram_PsmToFlag(Uint16 mode);
static Sint32 gfVram_ChangeArea(Uint16 pos, Uint16 size, Uint8 flag, Sint32 is_free);
static Uint16 gfVram_SearchArea(GF_VRAM_CELL* start_cell, Uint16 size, Uint8 flag);
static Sint32 gfVram_PseudoAlloc(GF_VRAM_CELL* cell, Uint16 size, Uint8 flag);
INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_SetInfoAddr);

static void gfVram_ClearAllCell()
{
    int i;

    for (i = 0; i < gfInfoHead_00674cd0->cellMax; i++)
    {
        gfInfo_00674cd4[i].stat = 0;
    }
}

static GF_VRAM_CELL* gfVram_GetUnusedCell()
{
    int i;

    for (i = 0; i < gfInfoHead_00674cd0->cellMax; i++)
    {
        if (gfInfo_00674cd4[i].stat == 0)
        {
            return &gfInfo_00674cd4[i];
        }
    }

    return NULL;
}

Sint32 GFVram_AddFreeArea(Uint16 pos, Uint16 size, Uint16 mode)
{
    GF_VRAM_CELL* cell;
    GF_VRAM_CELL* p;

    cell = gfVram_GetUnusedCell();
    p = gfInfoHead_00674cd0->top_cell;

    if (p == NULL)
    {
        cell->prev = NULL;
        cell->next = NULL;
    }
    else
    {
        while (1)
        {
            if (p->pos >= pos)
            {
                cell->prev = p->prev;
                cell->next = p;
                break;
            }

            if (p->next == NULL)
            {
                cell->prev = p;
                cell->next = NULL;
                break;
            }

            p = p->next;
        }
    }

    if (cell->prev != NULL && pos < cell->prev->pos + cell->prev->size)
    {
        return -1;
    }

    if (cell->next != NULL && cell->next->pos < pos + size)
    {
        return -1;
    }

    cell->used_flag = 0;
    cell->stat = 1;
    cell->reserved_flag = ~gfVram_PsmToFlag(mode) & 7;
    cell->pos = pos;
    cell->size = size;

    if (cell->prev == NULL)
    {
        gfInfoHead_00674cd0->top_cell = cell;
    }
    else
    {
        cell->prev->next = cell;
    }

    if (cell->next != NULL)
    {
        cell->next->prev = cell;
    }

    return 0;
}

Uint16 GFVram_Alloc(Uint16 size, Uint16 mode)
{
    Uint8 flag;
    Uint16 start;

    if (gfInfoHead_00674cd0->top_cell == NULL)
    {
        return 0xFFFF;
    }

    flag = gfVram_PsmToFlag(mode);
    start = gfVram_SearchArea(gfInfoHead_00674cd0->top_cell, size, flag);

    if (start == 0xFFFF)
    {
        return 0xFFFF;
    }

    gfVram_ChangeArea(start, size, flag, 0);
    gfVram_DefragCell();

    return start;
}

static Uint16 gfVram_SearchArea(GF_VRAM_CELL* start_cell, Uint16 size, Uint8 flag)
{
    GF_VRAM_CELL* p;
    GF_VRAM_CELL* min;
    Sint32 score;
    Sint32 min_score;

    min = NULL;

    for (p = start_cell; p != NULL; p = p->next)
    {
        score = gfVram_PseudoAlloc(p, size, flag);

        if (score == 0)
        {
            min = p;
            break;
        }

        if (score > 0 && (min == NULL || score < min_score))
        {
            min_score = score;
            min = p;
        }
    }

    if (min == NULL)
    {
        return 0xFFFF;
    }

    return min->pos;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_PseudoAlloc);

Sint32 GFVram_Free(Uint16 pos, Uint16 size, Uint16 mode)
{
    Sint32 ret;

    ret = gfVram_ChangeArea(pos, size, gfVram_PsmToFlag(mode), 1);
    gfVram_DefragCell();

    return ret;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_PsmToFlag);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_ChangeArea);

static GF_VRAM_CELL* gfVram_SearchCellByPos(Uint16 pos)
{
    GF_VRAM_CELL* p;

    for (p = gfInfoHead_00674cd0->top_cell; p != NULL; p = p->next)
    {
        if (pos >= p->pos && pos < p->pos + p->size)
        {
            break;
        }
    }

    return p;
}

static void gfVram_DefragCell()
{
    GF_VRAM_CELL* p;

    p = gfInfoHead_00674cd0->top_cell;

    if (p == NULL)
    {
        return;
    }

    while (p->next != NULL)
    {
        if (p->pos + p->size == p->next->pos && p->used_flag == p->next->used_flag && p->reserved_flag == p->next->reserved_flag)
        {
            p->next->stat = 0;
            p->size += p->next->size;
            p->next = p->next->next;
        }
        else
        {
            p = p->next;
        }
    }
}

void GFVram_FreeAll()
{
    GF_VRAM_CELL* p;

    for (p = gfInfoHead_00674cd0->top_cell; p != NULL; p = p->next)
    {
        p->used_flag = 0;
    }

    gfVram_DefragCell();
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_PrintAllocationStatus);

void GFVram_SetFrameBufferSize(Uint32 w, Uint32 h, Uint32 psm)
{
    gf_vramScreenInfo.frameBuffer.w = w;
    gf_vramScreenInfo.frameBuffer.h = h;
    gf_vramScreenInfo.frameBuffer.psm = psm;
}

void GFVram_SetZBufferSize(Uint32 w, Uint32 h, Uint32 psm)
{
    gf_vramScreenInfo.zBuffer.w = w;
    gf_vramScreenInfo.zBuffer.h = h;
    gf_vramScreenInfo.zBuffer.psm = psm;
}

void GFVram_SetScreenBufferSize(Uint32 w, Uint32 h, Uint32 psm)
{
    gf_vramScreenInfo.screen.w = w;
    gf_vramScreenInfo.screen.h = h;
    gf_vramScreenInfo.screen.psm = psm;
}

GF_VRAM_SCREEN_INFO* GFVram_GetScreenInfo()
{
    return &gf_vramScreenInfo;
}
