// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFVALLOC_H
#define GUNSUV_USA_LIBGF_GFVALLOC_H

#include "common.h"

struct gf_vram_cell { // 0x10
	/* 0x0 */ struct gf_vram_cell *prev;
	/* 0x4 */ struct gf_vram_cell *next;
	/* 0x8 */ Uint8 stat;
	/* 0x9 */ Uint8 pad;
	/* 0xa */ Uint8 used_flag;
	/* 0xb */ Uint8 reserved_flag;
	/* 0xc */ Uint16 pos;
	/* 0xe */ Uint16 size;
};

typedef struct gf_vram_cell GF_VRAM_CELL;

struct gf_vram_head { // 0xc
	/* 0x0 */ Uint32 size;
	/* 0x4 */ Uint32 cellMax;
	/* 0x8 */ GF_VRAM_CELL *top_cell;
};

typedef struct gf_vram_head GF_VRAM_HEAD;

typedef struct { // 0xc
	/* 0x0 */ Uint32 w;
	/* 0x4 */ Uint32 h;
	/* 0x8 */ Uint32 psm;
} GF_VRAM_RECT;

typedef struct { // 0x24
	/* 0x00 */ GF_VRAM_RECT screen;
	/* 0x0c */ GF_VRAM_RECT frameBuffer;
	/* 0x18 */ GF_VRAM_RECT zBuffer;
} GF_VRAM_SCREEN_INFO;

extern GF_VRAM_SCREEN_INFO gf_vramScreenInfo;

void GFVram_SetInfoAddr(Uint32 *buf, Uint32 size);
Sint32 GFVram_AddFreeArea(Uint16 pos, Uint16 size, Uint16 mode);
Uint16 GFVram_Alloc(Uint16 size, Uint16 mode);
Sint32 GFVram_Free(Uint16 pos, Uint16 size, Uint16 mode);
void GFVram_FreeAll();
void GFVram_PrintAllocationStatus();
void GFVram_SetFrameBufferSize(Uint32 w, Uint32 h, Uint32 psm);
void GFVram_SetZBufferSize(Uint32 w, Uint32 h, Uint32 psm);
void GFVram_SetScreenBufferSize(Uint32 w, Uint32 h, Uint32 psm);
GF_VRAM_SCREEN_INFO* GFVram_GetScreenInfo();

#endif // GUNSUV_USA_LIBGF_GFVALLOC_H
