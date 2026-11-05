#include "common.h"
#include "hoya/name/namesub.h"
#include "gunsuv_usa/libgf/gftex.h"
#include "gunsuv_usa/libgf/libgf.h"
#include "hoya/hoya.h"

extern int pGnn;
extern int hyCheckFadeFinishFlag();
extern void hySwitchFadeTimer();

void SetFadeParaPause_namesub(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pGnn + 192));
}

void SwitchFadeTimerPause_namesub(int a)
{
    hySwitchFadeTimer(a, (pGnn + 192));
}

int CheckFadeFinishFlagPause_namesub()
{
    return hyCheckFadeFinishFlag((pGnn + 192));
}

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", Draw2dObjectName);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", Calculation_namesub);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcChangeTexId);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcMakeHiscoreTex);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcMakeHiscoreTex2);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcCursol);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcPutChar);

void semiProcOpenDialog00()
{
    int p = pGnn;
    char* r = hySearchSMSpriteInfo(p + 0x29C, 0x17);

    STRUCT_OFFSET(r, 0x20, int) = 0;
    STRUCT_OFFSET(r, 0x1C, int) = 0;
    STRUCT_OFFSET(STRUCT_OFFSET(r, 0x24, char*), 4, int) = 0x190;
    STRUCT_OFFSET(p, 0, int)++;
}

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcOpenDialog01);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcOpenDialog02);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcOpenDialog03);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcDialogCursol);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcMakeSavedata);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcScrollObj);

void semiProcSetStorngBar()
{
    STRUCT_OFFSET(STRUCT_OFFSET(hySearchSMSpriteInfo(pGnn + 0x29C, 0xB), 0x24, char*), 4, int) = 0x12C;
}

int ProcFadeIn_namesub(int step)
{
    int t = pGnn;

    switch (STRUCT_OFFSET(t, 4, int))
    {
    case 0:
        STRUCT_OFFSET(t, 0xC0, int) = 0;
        SetFadeParaPause_namesub(t + 0x90, t + 0xA0, STRUCT_OFFSET(t, 0xB0, int));
        SwitchFadeTimerPause_namesub(1);
        STRUCT_OFFSET(pGnn, 4, int)++;
        break;
    case 1:
        STRUCT_OFFSET(t, 4, int) = 2;
        break;
    case 2:
        if (!CheckFadeFinishFlagPause_namesub())
        {
            STRUCT_OFFSET(pGnn, 4, int)++;
        }
        break;
    case 3:
        STRUCT_OFFSET(t, 4, int) = 0;
        step++;
        break;
    }

    return step;
}

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcFadeOut_namesub);

INCLUDE_RODATA("asm/nonmatchings/hoya/name/namesub", D_0066C478);

INCLUDE_RODATA("asm/nonmatchings/hoya/name/namesub", D_0066C498);

INCLUDE_RODATA("asm/nonmatchings/hoya/name/namesub", D_0066C4A8);

INCLUDE_RODATA("asm/nonmatchings/hoya/name/namesub", D_0066C4C0);

INCLUDE_RODATA("asm/nonmatchings/hoya/name/namesub", D_0066C4D8);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", InitNameName00);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", InitNameName01);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", InitName);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", MainName);

void EndName()
{
    GFTex_ResetDatabase();
    GF_EndGraphicsFramework();
}
INCLUDE_RODATA("asm/nonmatchings/hoya/name/namesub", D_0066C610);

