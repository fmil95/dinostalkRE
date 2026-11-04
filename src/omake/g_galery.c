#include "common.h"

extern char D_0066CEC0[];
extern int pGalBin;
extern int FIO_ReadFile_Align();
void gal_texInit()
{
    pGalBin = FIO_ReadFile_Align(D_0066CEC0, 0x40);
}

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", G_GALERY_Init);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", G_GALERY_End);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", G_GALERY_Exec);

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

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_notice);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_title);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_select);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_disp);

INCLUDE_ASM("asm/nonmatchings/omake/g_galery", gal_zoom);
