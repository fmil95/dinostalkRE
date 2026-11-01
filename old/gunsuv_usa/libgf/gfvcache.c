// STATUS: NOT STARTED

#include "gfvcache.h"

static Uint32 *gfInfoAddr = NULL;
static GF_CACHE_HEAD *gfInfoHead;
static GF_CACHE_CELL *gfInfo;

void GFCache_SetInfoAddr(Uint32 *buf, Uint32 buf_size, Uint16 cache_pos, Uint16 cache_size, Uint16 preset_size) {}

void GFCache_Flush() {}

Uint16 GFCache_GetPresetTransPos() {}

static void gfCache_ClearAllCell() {
	int i;
}

static GF_CACHE_CELL* gfCache_GetUnusedCell() {
	int i;
}

Uint16 GFCache_Alloc(Uint16 size, Sint32 bscore, Uint32 *guid) {
	GF_CACHE_CELL *p;
	GF_CACHE_CELL *min;
	Sint32 min_score;
}

static GF_CACHE_CELL* gfCache_SearchAllocPos(GF_CACHE_CELL *start_cell, GF_CACHE_CELL **end_cell, Uint16 size, Sint32 allow_preset, Sint32 *score_out) {
	GF_CACHE_CELL *p;
	GF_CACHE_CELL *min;
	Sint32 score;
	Sint32 min_score;
}

static Uint16 gfCache_Alloc(GF_CACHE_CELL *cell, Uint16 size, Sint32 bscore, Uint32 *guid) {
	GF_CACHE_CELL *p;
}

static Sint32 gfCache_PseudoAlloc(GF_CACHE_CELL *cell, Uint16 size) {
	GF_CACHE_CELL *p;
	Uint16 remain;
	Sint32 score;
}

GF_CACHE_CELL* GFCache_IsOn(Uint32 *guid) {}

static GF_CACHE_CELL* gfCache_GetCellByGuid(Uint32 *guid) {
	GF_CACHE_CELL *p;
}

Sint32 GFCache_ChangeScore(Uint32 *guid, Sint32 bscore) {
	GF_CACHE_CELL *p;
}

void GFCache_Invalidate(Uint16 pos, Uint16 size) {
	GF_CACHE_CELL *p;
	Uint16 end;
}

static void gfCache_DefragCell() {
	GF_CACHE_CELL *p;
}
