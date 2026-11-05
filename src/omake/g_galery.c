#include "common.h"
#include <string.h>
#include "gunsuv_usa/libgf/gftex.h"
#include "g_guncon2/g_guncon2.h"
#include "g_pad.h"
#include <libgraph.h>
#include <eekernel.h>
#include "sound/g_sound.h"
#include "omake/g_galery.h"
#include "g_effect.h"
#include "g_plane.h"
#include "gunsuv_usa/libgf/libgf.h"
#include "mem.h"

extern int pGalBin;
extern int FIO_ReadFile_Align();
extern void* memset();
extern void gsEffectSetFadeNowColor();
extern int titleTexId_00674bc8;
extern int noticeTexId_00674bc4;
extern int frame;
extern char bgSpr_0085a610[];
extern int trg_00674be8;
extern int gtrg_00674bf0;
extern int TEST_EntryTexture();
extern void gal_setFadeIn();
extern void gal_setFadeOut();
extern void gal_initBgSpr();
extern int rtrg_00674bf8;
extern int pad_00674bec;
extern int gpad_00674bf4;
extern int grtrg_00674bfc;
extern int gsNextProg;
extern int galPrevStep;
extern sceGsDBuff gDb;
extern void gal_title();
extern void gal_select();
extern void gal_disp();
extern void gal_zoom();
extern int etcTexId_00674bcc;
extern int anim_5;
extern int flgAnim_6;
extern char etcSpr_0085bc10[];
extern void gal_titleEtcInitSpr();
void gal_texInit()
{
    pGalBin = FIO_ReadFile_Align("cdrom0:\\DATA\\GALLERY\\GALMAIN.BIN;1", 0x40);
}

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", G_GALERY_Init);

void G_GALERY_End()
{
    char v[16];

    memset(v, 0, 16);
    gsEffectSetFadeNowColor(v);
    gsSoundClose();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_GALERY_Exec()
{
    int step;

    gsGuncon2_Exec();

    if (gsGuncon2_CheckConnect() == 0)
    {
        trg_00674be8 = gsPad_GetTrg(0);
        rtrg_00674bf8 = gsPad_GetRTrg(0);
        pad_00674bec = gsPad_Get(0);
        gpad_00674bf4 = 0;
        gtrg_00674bf0 = 0;
        grtrg_00674bfc = 0;
    }
    else
    {
        trg_00674be8 = 0;
        rtrg_00674bf8 = 0;
        pad_00674bec = 0;
        gpad_00674bf4 = gsGuncon2_Get();
        gtrg_00674bf0 = gsGuncon2_GetTrg();
        grtrg_00674bfc = gsGuncon2_GetRTrg();
    }

    gsEffectFadeManagement(frame & 1);

    step = galStat.unk4;

    switch (step)
    {
    case 0:
        galStat.unk4 = 1;
    case 1:
        gal_notice();
        break;
    case 2:
        gal_title();
        break;
    case 3:
        gal_select();
        break;
    case 4:
        gal_disp();
        break;
    case 5:
        gal_zoom();
        break;
    case 6:
        gsNextProg = 0xF;
        break;
    }

    if (step != galStat.unk4 || galStat.unk0 != 0)
    {
        galStat.unkC = 0;
        GFTex_ResetDatabase();
        galStat.unk0 = 0;
        galPrevStep = step;
    }

    gplDrawPlane((frame + 1) & 1);
    GFTex_SetFrameCnt(frame);
    sceGsSetHalfOffset((frame & 1) ? &gDb.draw1 : &gDb.draw0, 0x800, 0x800, sceGsSyncV(0) == 0);
    FlushCache(0);
    sceGsSwapDBuff(&gDb, frame);
    frame++;
    MEM_CheckViolation();
}

void gal_setFadeIn(int t)
{
    sceVu0FVECTOR a;
    sceVu0FVECTOR b;

    memset(a, 0, 16);
    memset(b, 0, 16);
    b[3] = 128.0f;
    gsEffectSetFadeNowColor((int)b);
    gsEffectSetFade(a, t);
}

void gal_setFadeOut(int t)
{
    sceVu0FVECTOR a;
    sceVu0FVECTOR b;

    memset(a, 0, 16);
    memset(b, 0, 16);
    b[3] = 128.0f;
    gsEffectSetFadeNowColor((int)a);
    gsEffectSetFade(b, t);
}

void gal_initBgSpr(int tex)
{
    char* spr;

    spr = bgSpr_0085a610;
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

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_initCurSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_initPageSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_titleEtcInitSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_selectEtcInitSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_initZoomArrowSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_initGalSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_setCurPos);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_setCurSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_setArrowSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_setPageSpr);

void gal_notice()
{
    switch (galStat.unkC)
    {
    case 0:
        titleTexId_00674bc8 = TEST_EntryTexture(pGalBin, 1);
        gal_setFadeIn(0x1E);
        gal_initBgSpr(noticeTexId_00674bc4);
        galStat.unkC = 1;
    case 1:
        gplSetSprite(bgSpr_0085a610, frame & 1);

        if (gsEffectGetFadeCnt() > 0)
        {
            return;
        }

        galStat.unkC = 2;
        break;
    case 3:
        gplSetSprite(bgSpr_0085a610, frame & 1);

        if (gsEffectGetFadeCnt() > 0)
        {
            return;
        }

        galStat.unk4 = galStat.unk8;
        galStat.unk10 = 0;
        galStat.unk14 = 0;
        break;
    case 2:
        gplSetSprite(bgSpr_0085a610, frame & 1);

        if ((trg_00674be8 & 0x40) || (gtrg_00674bf0 & 0x20))
        {
            galStat.unk8 = 6;
            galStat.unkC = 3;
            gal_setFadeOut(0x1E);
            gsSoundSeMePlay(0x2F0);
            return;
        }
        else if ((trg_00674be8 & 0x20) || (gtrg_00674bf0 & 0x8))
        {
            galStat.unk8 = 2;
            galStat.unkC = 3;
            gal_setFadeOut(0x1E);
            gsSoundSeMePlay(0x2EF);
            return;
        }
        break;
    case 4:
        break;
    }
}

void gal_title()
{
    char* spr;

    switch (galStat.unkC)
    {
    case 0:
        titleTexId_00674bc8 = TEST_EntryTexture((unsigned int*)(pGalBin + 0x20100), 1);
        etcTexId_00674bcc = TEST_EntryTexture((unsigned int*)(pGalBin + 0xE4F80), 1);
        anim_5 = 0;
        flgAnim_6 = 0;
        gal_setFadeIn(0x1E);
        gal_initBgSpr(titleTexId_00674bc8);
        gal_titleEtcInitSpr(etcTexId_00674bcc);
        galStat.unkC = 1;
    case 1:
        gplSetSprite(bgSpr_0085a610, frame & 1);

        if (gsEffectGetFadeCnt() > 0)
        {
            return;
        }

        galStat.unkC = 2;
        break;
    case 3:
        gplSetSprite(bgSpr_0085a610, frame & 1);

        if (gsEffectGetFadeCnt() > 0)
        {
            return;
        }

        galStat.unk4 = galStat.unk8;
        galStat.unk10 = 0;
        galStat.unk14 = 0;
        break;
    case 2:
        if ((trg_00674be8 & 0x40) || (gtrg_00674bf0 & 0x20))
        {
            galStat.unk8 = 6;
            galStat.unkC = 3;
            gal_setFadeOut(0x1E);
            gsSoundSeMePlay(0x2F0);
        }
        else if ((trg_00674be8 & 0x9BF) || (gtrg_00674bf0 & 0x90B))
        {
            galStat.unk8 = 3;
            galStat.unkC = 3;
            gal_setFadeOut(0x1E);
            gsSoundSeMePlay(0x2EF);
        }

        if (flgAnim_6 != 0)
        {
            if (++anim_5 > 0x40)
            {
                anim_5 = 0x40;
                flgAnim_6 = 0;
            }
        }
        else
        {
            if (--anim_5 < 0)
            {
                anim_5 = 0;
                flgAnim_6 = 1;
            }
        }

        spr = etcSpr_0085bc10;
        STRUCT_OFFSET(spr, 0x18, u_char) = anim_5 * 2;
        gplSetSprite(spr, frame & 1);
        gplSetSprite(bgSpr_0085a610, frame & 1);
        return;
    case 4:
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_select);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_disp);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_zoom);
