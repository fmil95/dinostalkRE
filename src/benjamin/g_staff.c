#include "common.h"

extern void sceGsSyncPath();
extern void gsSoundClose();
extern void gsSoundSeMain();
extern void pfm_end();
extern void GF_EndGraphicsFramework();
extern void GFTex_ResetDatabase();
extern void MEM_FreeAll();

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_staff", D_00666990);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", gsStaffInit);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", gsStaffExec);

void gsStaffEnd()
{
    sceGsSyncPath(0, 0);
    gsSoundClose();
    gsSoundSeMain();
    pfm_end();
    GF_EndGraphicsFramework();
    GFTex_ResetDatabase();
    MEM_FreeAll();
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", gsStaffDraw);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", gsStaffEval);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffInstSetFadeIn);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffInitReadFile);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffSetDefaultValue);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffInitInstance);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffReadStaffSetting);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffCutCommandString);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffMakeChain);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffUpdate);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffClipFont);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffGetScreenInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffGetScreen3DPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", benjaminInversMatrix);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", benjaminLubksb);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", benjaminLudcmp);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffFontHitProc);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffFontCheckHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffSetJump);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffSetChangeSize);
INCLUDE_RODATA("asm/nonmatchings/benjamin/g_staff", D_00666A90);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_staff", D_00666AC0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_staff", D_00666AF0);

