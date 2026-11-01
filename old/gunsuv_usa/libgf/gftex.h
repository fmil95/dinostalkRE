// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFTEX_H
#define GUNSUV_USA_LIBGF_GFTEX_H

typedef int Sint32;

struct gf_texdb_head {
	Uint32 size;
	Uint32 textureMax;
	Uint32 textureNum;
	Uint32 pad;
};

typedef gf_texdb_head GF_TEXDB_HEAD;

struct gf_texdb {
	Uint64 guid[2];
	Uint16 flag;
	Uint16 pig_flag;
	Uint32 *pig;
	Sint32 score;
	Uint16 allocSize;
	Uint16 pad;
	sceGsTex0 tex0;
	sceGsTex1 tex1;
	sceGsMiptbp1 miptbp1;
	sceGsMiptbp2 miptbp2;
	sceGsClamp clamp;
};

typedef gf_texdb GF_TEXDB;

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
