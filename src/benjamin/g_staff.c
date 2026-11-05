#include "common.h"
#include "benjamin/g_staff.h"
#include <libvu0.h>
#include "gunsuv_usa/libgf/gftex.h"
#include "gunsuv_usa/libgf/libgf.h"
#include "mem.h"
#include "perfmon.h"
#include "sound/g_sound.h"

extern void sceGsSyncPath();

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

void staffSetJump(char* s, float* a, float* b)
{
    sceVu0CopyVector((float*)(s + 0x100), a);
    sceVu0CopyVector((float*)(s + 0x110), b);
    sceVu0CopyVector((float*)(s + 0x120), (float*)(s + 0x30));
    *(int*)(s + 0x17C) = (*(int*)(s + 0x17C) & ~0xFF) | 5;
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_staff", staffSetChangeSize);
INCLUDE_RODATA("asm/nonmatchings/benjamin/g_staff", D_00666A90);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_staff", D_00666AC0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_staff", D_00666AF0);

