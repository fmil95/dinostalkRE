// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFTEX_H
#define GUNSUV_USA_LIBGF_GFTEX_H

#include "common.h"
#include <eestruct.h>

struct gf_texdb_head { // 0x10
	/* 0x0 */ Uint32 size;
	/* 0x4 */ Uint32 textureMax;
	/* 0x8 */ Uint32 textureNum;
	/* 0xc */ Uint32 pad;
};

typedef struct gf_texdb_head GF_TEXDB_HEAD;

struct gf_texdb { // 0x48
	/* 0x00 */ Uint64 guid[2];
	/* 0x10 */ Uint16 flag;
	/* 0x12 */ Uint16 pig_flag;
	/* 0x14 */ Uint32 *pig;
	/* 0x18 */ Sint32 score;
	/* 0x1c */ Uint16 allocSize;
	/* 0x1e */ Uint16 pad;
	/* 0x20 */ sceGsTex0 tex0;
	/* 0x28 */ sceGsTex1 tex1;
	/* 0x30 */ sceGsMiptbp1 miptbp1;
	/* 0x38 */ sceGsMiptbp2 miptbp2;
	/* 0x40 */ sceGsClamp clamp;
};

typedef struct gf_texdb GF_TEXDB;

void GFTex_InitDatabase(Uint32 *buf, Uint32 size);
void GFTex_ResetDatabase();
void GFTex_EntryDatabase(Uint32 *buf);
Sint32 GFTex_Add(Uint32 *pig);
GF_TEXDB* GFTex_GetDb(Sint32 index);
Sint32 GFTex_Validate(Sint32 index);
void GFTex_SetScore(Sint32 index, Sint32 score);
void GFTex_AddScore(Sint32 index);
void GFTex_ClearScore(Sint32 index);
void GFTex_ClearScoreAll();
void GFTex_SubScore(Sint32 index);
void GFTex_SubScoreAll();
void GFTex_FlushVramCache();
void GFTex_FlushVramCache_Preset();
Sint32 GFTex_Remove(Sint32 index);
void GFTex_LoadImage(Sint32 index);
qword* GFTex_MakeTexturePacket(qword *pkt_buf, GF_TEXDB *tex_db, Sint32 trans);
qword* GFTex_MakeTexturePresetPacket(qword *pkt_buf, Sint32 index);
qword* GFTex_MakePixelTransPacket(qword *pkt_buf, Uint32 *addr, Sint32 size, Sint32 dbp, Sint32 dbw, Sint32 psm, Sint32 rrw, Sint32 rrh);
qword* GFTex_MakePixelTransPacket_TexDB(qword *pkt_buf, GF_TEXDB *tex_db, Sint32 no, Sint32 clut);
GF_TEXDB_HEAD* GFTex_GetDatabase();
void GFTex_SetFrameCnt(Uint32 cnt);

#endif // GUNSUV_USA_LIBGF_GFTEX_H
