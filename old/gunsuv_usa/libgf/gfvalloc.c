// STATUS: NOT STARTED

#include "gfvalloc.h"

static Uint32 *gfInfoAddr = NULL;
static GF_VRAM_HEAD *gfInfoHead;
static GF_VRAM_CELL *gfInfo;

GF_VRAM_SCREEN_INFO gf_vramScreenInfo = {
	/* .screen = */ {
		/* .w = */ 0,
		/* .h = */ 0,
		/* .psm = */ 0
	},
	/* .frameBuffer = */ {
		/* .w = */ 0,
		/* .h = */ 0,
		/* .psm = */ 0
	},
	/* .zBuffer = */ {
		/* .w = */ 0,
		/* .h = */ 0,
		/* .psm = */ 0
	}
};

void GFVram_SetInfoAddr(Uint32 *buf, Uint32 size) {}

static void gfVram_ClearAllCell() {
	int i;
}

static GF_VRAM_CELL* gfVram_GetUnusedCell() {
	int i;
}

Sint32 GFVram_AddFreeArea(Uint16 pos, Uint16 size, Uint16 mode) {
	GF_VRAM_CELL *cell;
	GF_VRAM_CELL *p;
}

Uint16 GFVram_Alloc(Uint16 size, Uint16 mode) {
	Uint8 flag;
	Uint16 start;
}

static Uint16 gfVram_SearchArea(GF_VRAM_CELL *start_cell, Uint16 size, Uint8 flag) {
	GF_VRAM_CELL *p;
	GF_VRAM_CELL *min;
	Sint32 score;
	Sint32 min_score;
}

static Sint32 gfVram_PseudoAlloc(GF_VRAM_CELL *cell, Uint16 size, Uint8 flag) {
	GF_VRAM_CELL *p;
	Sint32 score;
	Sint32 tmp;
	Uint16 remain;
}

Sint32 GFVram_Free(Uint16 pos, Uint16 size, Uint16 mode) {
	Sint32 ret;
}

static Uint8 gfVram_PsmToFlag(Uint16 mode) {}

static Sint32 gfVram_ChangeArea(Uint16 pos, Uint16 size, Uint8 flag, Sint32 is_free) {
	GF_VRAM_CELL *p;
	GF_VRAM_CELL *tmp;
	Uint16 remain;
	Uint16 cur_pos;
}

static GF_VRAM_CELL* gfVram_SearchCellByPos(Uint16 pos) {
	GF_VRAM_CELL *p;
}

static void gfVram_DefragCell() {
	GF_VRAM_CELL *p;
}

void GFVram_FreeAll() {
	GF_VRAM_CELL *p;
}

void GFVram_PrintAllocationStatus() {
	GF_VRAM_CELL *p;
}

void GFVram_SetFrameBufferSize(Uint32 w, Uint32 h, Uint32 psm) {}

void GFVram_SetZBufferSize(Uint32 w, Uint32 h, Uint32 psm) {}

void GFVram_SetScreenBufferSize(Uint32 w, Uint32 h, Uint32 psm) {}

GF_VRAM_SCREEN_INFO* GFVram_GetScreenInfo() {}
