// STATUS: NOT STARTED

#include "gftex.h"

static Uint32 *gfDatabaseAddr = NULL;
static GF_TEXDB_HEAD *gfDatabaseHead;
static GF_TEXDB *gfDatabase;
static GF_TEXDB gfTexFrame[2];
static GF_PIG_HEAD gfTexFramePig[2];
static Uint32 gfTexFrameCnt;

void GFTex_InitDatabase(Uint32 *buf, Uint32 size) {}

void GFTex_ResetDatabase() {}

void GFTex_EntryDatabase(Uint32 *buf) {}

static void gfTex_ClearDb() {
	int i;
}

Sint32 GFTex_Add(Uint32 *pig) {
	GF_TEXDB *db;
	Sint32 index;
}

static void gfTex_SetDatabaseForResident(GF_TEXDB *db_out, Uint32 *pig) {
	GF_PIG_HEAD *header;
	Uint16 size;
	Uint16 bw;
	Uint16 start;
	int i;
}

static void gfTex_SetDatabaseForCache(GF_TEXDB *db_out, Uint32 *pig, Uint16 pos) {
	Uint16 cur_pos;
	Uint16 size;
	Uint16 bw;
	int i;
}

static GF_TEXDB* gfTex_SetDefaultValue(GF_TEXDB *db, Uint32 *pig) {
	GF_PIG_HEAD *header;
}

static void gfTex_CalcAllocationSize(Uint16 mode, Sint16 w, Sint16 h, Uint16 *size_out, Uint16 *w_out) {
	Uint32 page_w;
	Uint32 page_h;
	Uint32 block_w;
	Uint32 block_h;
	Uint32 aw;
	Uint32 ah;
	Uint32 min_tbw;
}

GF_TEXDB* GFTex_GetDb(Sint32 index) {}

Sint32 GFTex_Validate(Sint32 index) {
	GF_TEXDB *db;
	Sint32 ret;
	GF_CACHE_CELL *cp;
}

void GFTex_SetScore(Sint32 index, Sint32 score) {}

void GFTex_AddScore(Sint32 index) {}

void GFTex_ClearScore(Sint32 index) {}

void GFTex_ClearScoreAll() {
	int i;
}

void GFTex_SubScore(Sint32 index) {}

void GFTex_SubScoreAll() {
	int i;
}

void GFTex_FlushVramCache() {}

void GFTex_FlushVramCache_Preset() {}

static void gfTex_SetMipmapRegs(sceGsMiptbp1 *miptbp1, sceGsMiptbp2 *miptbp2, Uint16 n, Uint16 pos, Uint16 bw) {}

Sint32 GFTex_Remove(Sint32 index) {
	GF_TEXDB *db;
	Sint32 same;
}

static void gfTex_FreeVram(sceGsTex0 *tex0, sceGsTex1 *tex1, sceGsMiptbp1 *miptbp1, sceGsMiptbp2 *miptbp2, Sint32 no_tex) {
	Uint16 pos;
	Uint16 size;
	int i;
}

static void gfTex_Defrag() {
	int i;
}

static Sint32 gfTex_SearchDb(Uint64 *guid) {
	int i;
}

void GFTex_LoadImage(Sint32 index) {
	GF_TEXDB *db;
	GF_PIG_HEAD *header;
	Sint32 rrw;
	Sint32 rrh;
	Sint32 tmp;
	Uint16 tbp;
	Uint16 tbw;
	int i;
}

static void gfTex_LoadImage(Uint128 *addr, Sint16 dbp, Sint16 dbw, Sint16 dpsm, Sint16 w, Sint16 h) {
	sceGsLoadImage load_img;
	Sint32 size;
	Float32 bitsize;
	Uint32 rest;
	Uint32 top;
}

qword* GFTex_MakeTexturePacket(qword *pkt_buf, GF_TEXDB *tex_db, Sint32 trans) {
	int i;
}

qword* GFTex_MakeTexturePresetPacket(qword *pkt_buf, Sint32 index) {
	static GF_TEXDB db;
}

qword* GFTex_MakePixelTransPacket(qword *pkt_buf, Uint32 *addr, Sint32 size, Sint32 dbp, Sint32 dbw, Sint32 psm, Sint32 rrw, Sint32 rrh) {}

qword* GFTex_MakePixelTransPacket_TexDB(qword *pkt_buf, GF_TEXDB *tex_db, Sint32 no, Sint32 clut) {
	Sint32 rrw;
	Sint32 rrh;
	Sint32 tmp;
	Uint16 tbp;
	Uint16 tbw;
}

static Sint32 gfTex_IsFormat32(Sint32 no, Uint16 flag) {}

static void gfTex_GetTbpTbw(GF_TEXDB *tex_db, Sint32 no, Uint16 *tbp, Uint16 *tbw) {}

GF_TEXDB_HEAD* GFTex_GetDatabase() {}

static Uint32 gfTex_GetTwTh(Sint32 twth) {
	Sint32 ret;
	Sint32 tmp;
}

static void gfTex_InitSysTex() {
	int i;
	GF_VRAM_SCREEN_INFO *scrInfo;
}

void GFTex_SetFrameCnt(Uint32 cnt) {}
