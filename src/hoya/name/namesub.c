#include "common.h"

extern int pGnn;
extern int hyCheckFadeFinishFlag();
extern void GFTex_ResetDatabase();
extern void GF_EndGraphicsFramework();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();

extern char* hySearchSMSpriteInfo();
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

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcFadeIn_namesub);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcFadeOut_namesub);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", InitNameName00);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", InitNameName01);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", InitName);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", MainName);

void EndName()
{
    GFTex_ResetDatabase();
    GF_EndGraphicsFramework();
}
