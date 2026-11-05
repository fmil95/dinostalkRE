#include "common.h"
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

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_setFadeIn);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_setFadeOut);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_initBgSpr);

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

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_title);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_select);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_disp);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_zoom);
