// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFVALLOC_H
#define GUNSUV_USA_LIBGF_GFVALLOC_H

typedef short unsigned int u_short;
typedef u_short Uint16;

typedef struct {
	Uint32 w;
	Uint32 h;
	Uint32 psm;
} GF_VRAM_RECT;

typedef struct {
	GF_VRAM_RECT screen;
	GF_VRAM_RECT frameBuffer;
	GF_VRAM_RECT zBuffer;
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
