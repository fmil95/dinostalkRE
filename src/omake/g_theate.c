#include "common.h"
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

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", G_THEATE_Exec);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_setFadeIn);

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

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_title);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_select);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_disp);
