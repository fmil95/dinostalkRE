#include "gunsuv_usa/libgf/gftex.h"
#include "gunsuv_usa/libgf/gfvcache.h"

extern GF_TEXDB_HEAD* gfDatabaseHead;
extern GF_TEXDB* gfDatabase;
extern Uint32* gfDatabaseAddr;
extern Uint32 gfTexFrameCnt;
extern GF_TEXDB gfTexFrame[];

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_InitDatabase);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_ResetDatabase);

void GFTex_EntryDatabase(Uint32* buf)
{
    if (buf == NULL)
    {
        gfDatabaseAddr = NULL;
        return;
    }

    gfDatabase     = (GF_TEXDB*)((Uint8*)buf + 0x10);
    gfDatabaseHead = (GF_TEXDB_HEAD*)buf;
    gfDatabaseAddr = buf;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_ClearDb);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_Add);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_SetDatabaseForResident);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_SetDatabaseForCache);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_SetDefaultValue);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_CalcAllocationSize);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_GetDb);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_Validate);

void GFTex_SetScore(Sint32 index, Sint32 score)
{
    GF_TEXDB* db;

    db = (GF_TEXDB*)(index * sizeof(GF_TEXDB) + (int)gfDatabase);
    db->score = score;

    GFCache_ChangeScore((Uint32*)db, db->score);
}

void GFTex_AddScore(Sint32 index)
{
    GF_TEXDB* db;

    db = (GF_TEXDB*)(index * sizeof(GF_TEXDB) + (int)gfDatabase);
    db->score++;

    GFCache_ChangeScore((Uint32*)db, db->score);
}

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_ClearScore);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_ClearScoreAll);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_SubScore);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_SubScoreAll);

void GFTex_FlushVramCache()
{
    GFCache_Flush();
}

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_FlushVramCache_Preset);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_SetMipmapRegs);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_Remove);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_FreeVram);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_Defrag);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_SearchDb);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_LoadImage);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_LoadImage);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakeTexturePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakeTexturePresetPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakePixelTransPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakePixelTransPacket_TexDB);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_IsFormat32);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_GetTbpTbw);

GF_TEXDB_HEAD* GFTex_GetDatabase()
{
    return gfDatabaseHead;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_GetTwTh);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_InitSysTex);

void GFTex_SetFrameCnt(Uint32 cnt)
{
    gfTexFrameCnt = cnt;
}
