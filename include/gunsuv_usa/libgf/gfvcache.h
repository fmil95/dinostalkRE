// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFVCACHE_H
#define GUNSUV_USA_LIBGF_GFVCACHE_H

struct gf_cache_cell {
	gf_cache_cell *next;
	Uint8 stat;
	Uint8 used_flag;
	Uint16 pad;
	Sint32 score;
	Uint32 guid;
	Uint32 pad2[3];
	Uint16 pos;
	Uint16 size;
};

typedef gf_cache_cell GF_CACHE_CELL;

void GFCache_SetInfoAddr(Uint32 *buf, Uint32 buf_size, Uint16 cache_pos, Uint16 cache_size, Uint16 preset_size);
void GFCache_Flush();
Uint16 GFCache_GetPresetTransPos();
Uint16 GFCache_Alloc(Uint16 size, Sint32 bscore, Uint32 *guid);
GF_CACHE_CELL* GFCache_IsOn(Uint32 *guid);
Sint32 GFCache_ChangeScore(Uint32 *guid, Sint32 bscore);
void GFCache_Invalidate(Uint16 pos, Uint16 size);

#endif // GUNSUV_USA_LIBGF_GFVCACHE_H
