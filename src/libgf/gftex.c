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
static void gfTex_FreeVram(sceGsTex0* tex0, sceGsTex1* tex1, sceGsMiptbp1* miptbp1, sceGsMiptbp2* miptbp2, Sint32 no_tex);
static Sint32 gfTex_SearchDb(Uint64* guid);
static void gfTex_Defrag();
static void gfTex_SetDatabaseForCache(GF_TEXDB* db_out, Uint32* pig, Uint16 pos);
extern GF_TEXDB D_00870780;
static GF_TEXDB* gfTex_SetDefaultValue(GF_TEXDB* db, Uint32* pig);
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

INCLUDE_RODATA("asm/nonmatchings/libgf/gftex", D_0066D190);

static void gfTex_CalcAllocationSize(Uint16 mode, Sint16 w, Sint16 h, Uint16* size_out, Uint16* w_out)
{
    Uint32 page_w;
    Uint32 page_h;
    Uint32 block_w;
    Uint32 block_h;
    Uint32 aw;
    Uint32 ah;
    Uint32 min_tbw;

    aw = 1 << w;
    ah = 1 << h;

    switch (mode)
    {
    case 2:
    case 0xA:
    case 0x32:
    case 0x3A:
        page_w = 64;
        page_h = 64;
        block_w = 16;
        block_h = 8;
        min_tbw = 64;
        break;
    case 0x13:
        page_w = 128;
        page_h = 64;
        block_w = 16;
        block_h = 16;
        min_tbw = 128;
        break;
    case 0x14:
        page_w = 128;
        page_h = 128;
        block_w = 32;
        block_h = 16;
        min_tbw = 128;
        break;
    default:
        page_w = 64;
        page_h = 32;
        block_w = 8;
        block_h = 8;
        min_tbw = 64;
        break;
    }

    if (aw <= page_h && ah <= page_w)
    {
        if (aw < block_w)
        {
            aw = block_w;
        }

        if (ah < block_h)
        {
            ah = block_h;
        }

        if (aw != block_w || ah != block_h)
        {
            if (aw < ah)
            {
                aw = ah;
            }

            ah = aw;
        }
    }
    else
    {
        if (aw < page_w)
        {
            aw = page_w;
        }

        if (ah < page_h)
        {
            ah = page_h;
        }
    }

    if (size_out != NULL)
    {
        *size_out = (aw / block_w) * (ah / block_h);
    }

    if (w_out != NULL)
    {
        if (aw < min_tbw)
        {
            *w_out = min_tbw >> 6;
        }
        else
        {
            *w_out = aw >> 6;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_GetDb);

Sint32 GFTex_Validate(Sint32 index)
{
    GF_TEXDB* db;
    Sint32 ret;
    GF_CACHE_CELL* cp;

    db = &gfDatabase[index];

    if (db->flag & 2)
    {
        return 0;
    }

    ret = 0;
    cp = GFCache_IsOn((Uint32*)db);

    if (cp == NULL)
    {
        ret = 1;
        gfTex_SetDatabaseForCache(db, db->pig, GFCache_Alloc(db->allocSize, 3, (Uint32*)db));
    }
    else
    {
        cp->score = 3;
    }

    return ret;
}

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

Sint32 GFTex_Remove(Sint32 index)
{
    GF_TEXDB* db;
    Sint32 same;

    db = &gfDatabase[index];
    db->flag &= ~1;

    same = gfTex_SearchDb(db->guid);

    if (same == -1 && (db->flag & 2))
    {
        gfTex_FreeVram(&db->tex0, &db->tex1, &db->miptbp1, &db->miptbp2, (db->flag >> 2) & 1);
    }

    gfTex_Defrag();

    return same != -1;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_FreeVram);

static void gfTex_Defrag()
{
    int i;

    for (i = gfDatabaseHead->textureNum; i > 0; i--)
    {
        if (gfDatabase[i - 1].flag & 1)
        {
            break;
        }
    }

    gfDatabaseHead->textureNum = i;
}

static Sint32 gfTex_SearchDb(Uint64* guid)
{
    int i;

    for (i = 0; i < gfDatabaseHead->textureMax; i++)
    {
        if ((gfDatabase[i].flag & 1) && gfDatabase[i].guid[0] == guid[0] && gfDatabase[i].guid[1] == guid[1])
        {
            return i;
        }
    }

    return -1;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_LoadImage);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_LoadImage);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakeTexturePacket);

qword* GFTex_MakeTexturePresetPacket(qword* pkt_buf, Sint32 index)
{
    if (index < 0)
    {
        return GFTex_MakeTexturePacket(pkt_buf, GFTex_GetDb(index), 0);
    }

    if (gfDatabase[index].flag & 2)
    {
        return GFTex_MakeTexturePacket(pkt_buf, &gfDatabase[index], 0);
    }

    gfTex_SetDefaultValue(&D_00870780, gfDatabase[index].pig);
    gfTex_SetDatabaseForCache(&D_00870780, gfDatabase[index].pig, GFCache_GetPresetTransPos());

    return GFTex_MakeTexturePacket(pkt_buf, &D_00870780, 1);
}

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakePixelTransPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakePixelTransPacket_TexDB);

static Sint32 gfTex_IsFormat32(Sint32 no, Uint16 flag)
{
    switch (no)
    {
    case 0:
        return (flag >> 3) & 1;
    case 1:
        return (flag >> 4) & 1;
    case 2:
        return (flag >> 5) & 1;
    case 3:
        return (flag >> 6) & 1;
    case 4:
        return (flag >> 7) & 1;
    case 5:
        return (flag >> 8) & 1;
    case 6:
        return (flag >> 9) & 1;
    }

    return 0;
}

static void gfTex_GetTbpTbw(GF_TEXDB* tex_db, Sint32 no, Uint16* tbp, Uint16* tbw)
{
    switch (no)
    {
    case 0:
        *tbp = tex_db->tex0.TBP0;
        *tbw = tex_db->tex0.TBW;
        break;
    case 1:
        *tbp = tex_db->miptbp1.TBP1;
        *tbw = tex_db->miptbp1.TBW1;
        break;
    case 2:
        *tbp = tex_db->miptbp1.TBP2;
        *tbw = tex_db->miptbp1.TBW2;
        break;
    case 3:
        *tbp = tex_db->miptbp1.TBP3;
        *tbw = tex_db->miptbp1.TBW3;
        break;
    case 4:
        *tbp = tex_db->miptbp2.TBP4;
        *tbw = tex_db->miptbp2.TBW4;
        break;
    case 5:
        *tbp = tex_db->miptbp2.TBP5;
        *tbw = tex_db->miptbp2.TBW5;
        break;
    case 6:
        *tbp = tex_db->miptbp2.TBP6;
        *tbw = tex_db->miptbp2.TBW6;
        break;
    }
}

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
