// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFVCACHE_H
#define GUNSUV_USA_LIBGF_GFVCACHE_H

#include "common.h"

struct gf_cache_cell { // 0x20
	/* 0x00 */ struct gf_cache_cell *next;
	/* 0x04 */ Uint8 stat;
	/* 0x05 */ Uint8 used_flag;
	/* 0x06 */ Uint16 pad;
	/* 0x08 */ Sint32 score;
	/* 0x0c */ Uint32 guid;
	/* 0x10 */ Uint32 pad2[3];
	/* 0x1c */ Uint16 pos;
	/* 0x1e */ Uint16 size;
};

typedef struct gf_cache_cell GF_CACHE_CELL;

void GFCache_SetInfoAddr(Uint32 *buf, Uint32 buf_size, Uint16 cache_pos, Uint16 cache_size, Uint16 preset_size);
void GFCache_Flush();
Uint16 GFCache_GetPresetTransPos();
Uint16 GFCache_Alloc(Uint16 size, Sint32 bscore, Uint32 *guid);
GF_CACHE_CELL* GFCache_IsOn(Uint32 *guid);
Sint32 GFCache_ChangeScore(Uint32 *guid, Sint32 bscore);
void GFCache_Invalidate(Uint16 pos, Uint16 size);

#endif // GUNSUV_USA_LIBGF_GFVCACHE_H
