#include "gunsuv_usa/libgf/gfvalloc.h"

extern Uint32* gfInfoAddr_00673e88;
extern GF_VRAM_HEAD* gfInfoHead_00674cd0;
extern GF_VRAM_CELL* gfInfo_00674cd4;

static void gfVram_ClearAllCell();
static void gfVram_DefragCell();

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

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_AddFreeArea);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_Alloc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_SearchArea);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_PseudoAlloc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_Free);

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

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", gfVram_DefragCell);

INCLUDE_ASM("asm/nonmatchings/libgf/gfvalloc", GFVram_FreeAll);

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
