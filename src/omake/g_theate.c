#include "common.h"

extern char D_0066CF80[];
extern int pTheBin;
extern int FIO_ReadFile_Align();
void the_texInit()
{
    pTheBin = FIO_ReadFile_Align(D_0066CF80, 0x40);
}

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", G_THEATE_Init);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", G_THEATE_End);

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

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_notice);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_title);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_select);

INCLUDE_ASM("asm/nonmatchings/omake/g_theate", the_disp);
