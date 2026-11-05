#include "common.h"
#include "fileio.h"
#include "gunsuv_usa/libgf/gfvcache.h"
#include "gunsuv_usa/libgf/gfvalloc.h"
#include <string.h>
#include "gunsuv_usa/libgf/gftex.h"
#include "g_guncon2/g_guncon2.h"
#include "g_pad.h"
#include <libgraph.h>
#include <eekernel.h>
#include "sound/g_sound.h"
#include "omake/g_theate.h"
#include "g_effect.h"
#include "g_plane.h"
#include "gunsuv_usa/libgf/libgf.h"
#include "mem.h"

extern int pTheBin;
extern void* memset();
extern int titleTexId_00674c1c;
extern int noticeTexId_00674c18;
extern int frame;
extern char bgSpr_0085c1b0[];
extern int trg_00674c34;
extern int gtrg_00674c3c;
extern int TEST_EntryTexture();
extern void the_setFadeIn();
extern void the_setFadeOut();
extern void the_initBgSpr();
extern int rtrg_00674c44;
extern int pad_00674c38;
extern int gpad_00674c40;
extern int grtrg_00674c48;
extern int gsNextProg;
extern int thePrevStep;
extern sceGsDBuff gDb;
extern void the_title();
extern void the_select();
extern void the_disp();
extern int etcTexId_00674c20;
extern int anim_3_00674c08;
extern int flgAnim_4;
extern char etcSpr_0085da70[];
extern void the_titleEtcInitSpr();
extern int cursorTexId_00674c2c;
extern char pageSpr_0085d7b0[];
extern Uint32 gs_textureDb[];
extern Uint32 gs_alloc_info[];
extern Uint32 gs_cache_info[];
extern Uint32* theTexDb;
extern void* pTheMovie;
void the_texInit()
{
    pTheBin = FIO_ReadFile_Align("cdrom0:\\DATA\\THEATER\\THEMAIN.BIN;1", 0x40);
}

void G_THEATE_Init()
{
    sceVu0FVECTOR c;

    memset(c, 0, 16);
    c[3] = 128.0f;
    theTexDb = gs_textureDb;
    GF_InitGraphicsFramework();
    gplInitPlane();
    GFVram_SetInfoAddr(gs_alloc_info, 0x1000);
    GFVram_AddFreeArea(0x1800, 0x4000, 0);
    GFVram_AddFreeArea(0x1000, 0x800, 0x1B);
    GFCache_SetInfoAddr(gs_cache_info, 0x1000, 0x5800, 0, 0);
    GFVram_SetFrameBufferSize(0x200, 0xE0, 0);
    GFVram_SetZBufferSize(0x200, 0xE0, 0);
    GFVram_SetScreenBufferSize(0x200, 0x1C0, 0);
    GFTex_InitDatabase(theTexDb, 0x1000);
    GFTex_FlushVramCache();
    GFTex_FlushVramCache_Preset();
    pTheMovie = MEM_MallocAlign(0x400000, 0x40, "omake/g_theate.c", 0xA2);
    gsGuncon2_Init();
    gsSoundInitAll();
    gsSoundReadSe(0x1D);
    gsSoundReadWait();
    gsEffectInitFade();
    theStat.unk4 = 0;
    theStat.unk0 = 0;
    the_texInit();
    gsEffectSetFadeNowColor((int)c);
}

void G_THEATE_End()
{
    char v[16];

    memset(v, 0, 16);
    gsEffectSetFadeNowColor(v);
    gsSoundClose();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_THEATE_Exec()
{
    int step;

    gsGuncon2_Exec();

    if (gsGuncon2_CheckConnect() == 0)
    {
        trg_00674c34 = gsPad_GetTrg(0);
        rtrg_00674c44 = gsPad_GetRTrg(0);
        pad_00674c38 = gsPad_Get(0);
        gpad_00674c40 = 0;
        gtrg_00674c3c = 0;
        grtrg_00674c48 = 0;
    }
    else
    {
        trg_00674c34 = 0;
        rtrg_00674c44 = 0;
        pad_00674c38 = 0;
        gpad_00674c40 = gsGuncon2_Get();
        gtrg_00674c3c = gsGuncon2_GetTrg();
        grtrg_00674c48 = gsGuncon2_GetRTrg();
    }

    gsEffectFadeManagement(frame & 1);

    step = theStat.unk4;

    switch (step)
    {
    case 0:
        theStat.unk4 = 1;
    case 1:
        the_notice();
        break;
    case 2:
        the_title();
        break;
    case 3:
        the_select();
        break;
    case 4:
        the_disp();
        break;
    case 5:
        break;
    case 6:
        gsNextProg = 0xF;
        break;
    }

    if (step != theStat.unk4 || theStat.unk0 != 0)
    {
        theStat.unkC = 0;
        GFTex_ResetDatabase();
        theStat.unk0 = 0;
        thePrevStep = step;
    }

    gplDrawPlane((frame + 1) & 1);
    GFTex_SetFrameCnt(frame);
    sceGsSetHalfOffset((frame & 1) ? &gDb.draw1 : &gDb.draw0, 0x800, 0x800, sceGsSyncV(0) == 0);
    FlushCache(0);
    sceGsSwapDBuff(&gDb, frame);
    frame++;
    MEM_CheckViolation();
}

void the_setFadeIn(int t)
{
    sceVu0FVECTOR a;
    sceVu0FVECTOR b;

    memset(a, 0, 16);
    memset(b, 0, 16);
    b[3] = 128.0f;
    gsEffectSetFadeNowColor((int)b);
    gsEffectSetFade(a, t);
}

void the_setFadeOut(int t)
{
    sceVu0FVECTOR a;
    sceVu0FVECTOR b;

    memset(a, 0, 16);
    memset(b, 0, 16);
    b[3] = 128.0f;
    gsEffectSetFadeNowColor((int)a);
    gsEffectSetFade(b, t);
}

void the_initBgSpr(int tex)
{
    char* spr;

    spr = bgSpr_0085c1b0;
    gplInitSprite(spr, tex);
    STRUCT_OFFSET(spr, 0x8, short) = 0;
    STRUCT_OFFSET(spr, 0xA, short) = 0;
    STRUCT_OFFSET(spr, 0x10, short) = 0x1FF0;
    STRUCT_OFFSET(spr, 0x12, short) = 0x1BF0;
    STRUCT_OFFSET(spr, 0xC, short) = 0x7000;
    STRUCT_OFFSET(spr, 0xE, short) = 0x7900;
    STRUCT_OFFSET(spr, 0x14, short) = -0x7010;
    STRUCT_OFFSET(spr, 0x16, short) = -0x7908;
}

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_initCurSpr);

void the_initPageSpr()
{
    char* spr;

    spr = pageSpr_0085d7b0;
    gplInitSprite(spr, cursorTexId_00674c2c);
    gplInitSprite(spr + 0x160, cursorTexId_00674c2c);
    STRUCT_OFFSET(spr, 0x8, short) = 0xB00;
    STRUCT_OFFSET(spr, 0xA, short) = 0x0;
    STRUCT_OFFSET(spr, 0x10, short) = 0xBF0;
    STRUCT_OFFSET(spr, 0x12, short) = 0x160;
    STRUCT_OFFSET(spr, 0xC, short) = -0x71A0;
    STRUCT_OFFSET(spr, 0xE, short) = -0x7F78;
    STRUCT_OFFSET(spr, 0x14, short) = -0x70A0;
    STRUCT_OFFSET(spr, 0x16, short) = -0x7EC0;
    STRUCT_OFFSET(spr, 0x168, short) = 0xC00;
    STRUCT_OFFSET(spr, 0x16A, short) = 0x0;
    STRUCT_OFFSET(spr, 0x170, short) = 0xCF0;
    STRUCT_OFFSET(spr, 0x172, short) = 0x160;
    STRUCT_OFFSET(spr, 0x16C, short) = 0x70E0;
    STRUCT_OFFSET(spr, 0x16E, short) = -0x7F78;
    STRUCT_OFFSET(spr, 0x174, short) = 0x71E0;
    STRUCT_OFFSET(spr, 0x176, short) = -0x7EC0;
}

void the_selectEtcInitSpr()
{
    char* spr;

    spr = etcSpr_0085da70;
    gplInitSprite(spr, cursorTexId_00674c2c);
    gplInitSprite(spr + 0x160, cursorTexId_00674c2c);
    STRUCT_OFFSET(spr, 0x8, short) = 0x0;
    STRUCT_OFFSET(spr, 0xA, short) = 0x600;
    STRUCT_OFFSET(spr, 0x10, short) = 0xA20;
    STRUCT_OFFSET(spr, 0x12, short) = 0x6F0;
    STRUCT_OFFSET(spr, 0xC, short) = -0x7B80;
    STRUCT_OFFSET(spr, 0xE, short) = -0x7A00;
    STRUCT_OFFSET(spr, 0x14, short) = -0x7160;
    STRUCT_OFFSET(spr, 0x16, short) = -0x7988;
    STRUCT_OFFSET(spr, 0x168, short) = 0x0;
    STRUCT_OFFSET(spr, 0x16A, short) = 0x700;
    STRUCT_OFFSET(spr, 0x170, short) = 0xA20;
    STRUCT_OFFSET(spr, 0x172, short) = 0x7F0;
    STRUCT_OFFSET(spr, 0x16C, short) = -0x7B80;
    STRUCT_OFFSET(spr, 0x16E, short) = -0x7A00;
    STRUCT_OFFSET(spr, 0x174, short) = -0x7160;
    STRUCT_OFFSET(spr, 0x176, short) = -0x7988;
}

void the_titleEtcInitSpr(int tex)
{
    char* spr;

    spr = etcSpr_0085da70;
    gplInitSprite(spr, tex);
    STRUCT_OFFSET(spr, 0x8, short) = 0x0;
    STRUCT_OFFSET(spr, 0xA, short) = 0x0;
    STRUCT_OFFSET(spr, 0x10, short) = 0x2000;
    STRUCT_OFFSET(spr, 0x12, short) = 0x200;
    STRUCT_OFFSET(spr, 0xC, short) = 0x7000;
    STRUCT_OFFSET(spr, 0xE, short) = -0x7B80;
    STRUCT_OFFSET(spr, 0x14, short) = -0x7000;
    STRUCT_OFFSET(spr, 0x16, short) = -0x7A80;
}

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_setCurPos);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_setCurSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_setPageSpr);

void the_notice()
{
    switch (theStat.unkC)
    {
    case 0:
        titleTexId_00674c1c = TEST_EntryTexture(pTheBin, 1);
        the_setFadeIn(0x1E);
        the_initBgSpr(noticeTexId_00674c18);
        theStat.unkC = 1;
    case 1:
        gplSetSprite(bgSpr_0085c1b0, frame & 1);

        if (gsEffectGetFadeCnt() > 0)
        {
            return;
        }

        theStat.unkC = 2;
        break;
    case 3:
        gplSetSprite(bgSpr_0085c1b0, frame & 1);

        if (gsEffectGetFadeCnt() > 0)
        {
            return;
        }

        theStat.unk4 = theStat.unk8;
        theStat.unk10 = 0;
        theStat.unk14 = 0;
        break;
    case 2:
        gplSetSprite(bgSpr_0085c1b0, frame & 1);

        if ((trg_00674c34 & 0x40) || (gtrg_00674c3c & 0x20))
        {
            theStat.unk8 = 6;
            theStat.unkC = 3;
            the_setFadeOut(0x1E);
            gsSoundSeMePlay(0x2F0);
            return;
        }
        else if ((trg_00674c34 & 0x20) || (gtrg_00674c3c & 0x8))
        {
            theStat.unk8 = 2;
            theStat.unkC = 3;
            the_setFadeOut(0x1E);
            gsSoundSeMePlay(0x2EF);
            return;
        }
        break;
    case 4:
        break;
    }
}

void the_title()
{
    char* spr;

    switch (theStat.unkC)
    {
    case 0:
        titleTexId_00674c1c = TEST_EntryTexture((unsigned int*)(pTheBin + 0x20100), 1);
        etcTexId_00674c20 = TEST_EntryTexture((unsigned int*)(pTheBin + 0xE4F80), 1);
        anim_3_00674c08 = 0;
        flgAnim_4 = 0;
        the_setFadeIn(0x1E);
        the_initBgSpr(titleTexId_00674c1c);
        the_titleEtcInitSpr(etcTexId_00674c20);
        theStat.unkC = 1;
    case 1:
        gplSetSprite(bgSpr_0085c1b0, frame & 1);

        if (gsEffectGetFadeCnt() > 0)
        {
            return;
        }

        theStat.unkC = 2;
        break;
    case 3:
        gplSetSprite(bgSpr_0085c1b0, frame & 1);

        if (gsEffectGetFadeCnt() > 0)
        {
            return;
        }

        theStat.unk4 = theStat.unk8;
        theStat.unk10 = 0;
        theStat.unk14 = 0;
        break;
    case 2:
        if ((trg_00674c34 & 0x40) || (gtrg_00674c3c & 0x20))
        {
            theStat.unk8 = 6;
            theStat.unkC = 3;
            the_setFadeOut(0x1E);
            gsSoundSeMePlay(0x2F0);
        }
        else if ((trg_00674c34 & 0x9BF) || (gtrg_00674c3c & 0x90B))
        {
            theStat.unk8 = 3;
            theStat.unkC = 3;
            the_setFadeOut(0x1E);
            gsSoundSeMePlay(0x2EF);
        }

        if (flgAnim_4 != 0)
        {
            if (++anim_3_00674c08 > 0x40)
            {
                anim_3_00674c08 = 0x40;
                flgAnim_4 = 0;
            }
        }
        else
        {
            if (--anim_3_00674c08 < 0)
            {
                anim_3_00674c08 = 0;
                flgAnim_4 = 1;
            }
        }

        spr = etcSpr_0085da70;
        STRUCT_OFFSET(spr, 0x18, u_char) = anim_3_00674c08 * 2;
        gplSetSprite(spr, frame & 1);
        gplSetSprite(bgSpr_0085c1b0, frame & 1);
        return;
    case 4:
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_select);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_disp);
