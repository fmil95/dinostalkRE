#include "common.h"
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
extern int FIO_ReadFile_Align();
extern void* memset();
extern void gsEffectSetFadeNowColor();
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
void the_texInit()
{
    pTheBin = FIO_ReadFile_Align("cdrom0:\\DATA\\THEATER\\THEMAIN.BIN;1", 0x40);
}

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", G_THEATE_Init);

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

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_setFadeOut);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_initBgSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_initCurSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_initPageSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_selectEtcInitSpr);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_titleEtcInitSpr);

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
