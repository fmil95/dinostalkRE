#include "gunsuv_usa/libgf/gftex.h"
#include "gunsuv_usa/libgf/gfvcache.h"

extern GF_TEXDB_HEAD* gfDatabaseHead;
extern GF_TEXDB* gfDatabase;
extern Uint32* gfDatabaseAddr;
extern Uint32 gfTexFrameCnt;
extern GF_TEXDB gfTexFrame[];

extern void gfTex_ClearDb();
extern void GFVram_FreeAll();
extern void GFCache_Flush();
INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_InitDatabase);

void GFTex_ResetDatabase()
{
    STRUCT_OFFSET(gfDatabaseHead, 0x8, int) = 0;
    gfTex_ClearDb();
    GFVram_FreeAll();
    GFCache_Flush();
}

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

void gfTex_ClearDb()
{
    int i;

    for (i = 0; i < gfDatabaseHead->textureMax; i++)
    {
        gfDatabase[i].flag = 0;
    }
}

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

void GFTex_ClearScore(Sint32 index)
{
    GF_TEXDB* db;

    db = (GF_TEXDB*)(index * sizeof(GF_TEXDB) + (int)gfDatabase);
    db->score = 1;

    GFCache_ChangeScore((Uint32*)db, 1);
}

void GFTex_ClearScoreAll()
{
    int i;

    for (i = 0; i < gfDatabaseHead->textureMax; i++)
    {
        if (gfDatabase[i].flag & 1)
        {
            GFTex_ClearScore(i);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_SubScore);

void GFTex_SubScoreAll()
{
    int i;

    for (i = 0; i < gfDatabaseHead->textureMax; i++)
    {
        if (gfDatabase[i].flag & 1)
        {
            GFTex_SubScore(i);
        }
    }
}

void GFTex_FlushVramCache()
{
    GFCache_Flush();
}

void GFTex_FlushVramCache_Preset()
{
    GFCache_Invalidate(GFCache_GetPresetTransPos(), 0);
}

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

static Uint32 gfTex_GetTwTh(Sint32 twth)
{
    Sint32 ret;
    Sint32 tmp;

    ret = 1;

    if (twth <= 0)
    {
        return 0;
    }

    for (tmp = twth - 1; tmp >= 2; tmp /= 2)
    {
        ret++;
    }

    return ret;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_InitSysTex);

void GFTex_SetFrameCnt(Uint32 cnt)
{
    gfTexFrameCnt = cnt;
}
