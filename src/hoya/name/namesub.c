#include "common.h"

extern int pGnn;
extern void hyCheckFadeFinishFlag();
extern void GFTex_ResetDatabase();
extern void GF_EndGraphicsFramework();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();

void SetFadeParaPause_namesub(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pGnn + 192));
}

void SwitchFadeTimerPause_namesub(int a)
{
    hySwitchFadeTimer(a, (pGnn + 192));
}

void CheckFadeFinishFlagPause_namesub()
{
    hyCheckFadeFinishFlag((pGnn + 192));
}

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", Draw2dObjectName);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", Calculation_namesub);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcChangeTexId);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcMakeHiscoreTex);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcMakeHiscoreTex2);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcCursol);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", ProcPutChar);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcOpenDialog00);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcOpenDialog01);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcOpenDialog02);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcOpenDialog03);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcDialogCursol);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcMakeSavedata);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcScrollObj);

INCLUDE_ASM("asm/nonmatchings/hoya/name/namesub", semiProcSetStorngBar);

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
