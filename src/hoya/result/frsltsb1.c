#include "common.h"

extern int pFR;
extern int hyCheckFadeFinishFlag();
extern void hySetFadePara2();
extern void hySwitchFadeTimer();

INCLUDE_RODATA("asm/nonmatchings/hoya/result/frsltsb1", D_0066BEB0);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", MakeAllNumberTex_frsltsb1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltInitSprOther_frsltsb1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltDrawSprOther_frsltsb1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltInitSprNumberPlay);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltDrawSprNumberPlay);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltInitSprStageRankPlay);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltDrawSprStageRankPlay);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltInitSprTotalRank);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltDrawSprTotalRank);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltInitSprArrow);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltDrawSprArrow);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltInitSprSubWeaponIcon);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltDrawSprSubWeaponIcon);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltInitSprSubWeaponFrame);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltDrawSprSubWeaponFrame);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltInitSprSubWeaponName);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", RsltDrawSprSubWeaponName);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", CalcDirectStringAction);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", CalcMoveWeapon);

void SetFadePara_frsltsb1(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pFR + 8128));
}

void SwitchFadeTimer_frsltsb1(int a)
{
    hySwitchFadeTimer(a, (pFR + 8128));
}

int CheckFadeFinishFlag_frsltsb1()
{
    return hyCheckFadeFinishFlag((pFR + 8128));
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", Draw2dObjectFResult);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", Calculation_frsltsb1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", ProcFadeIn_frsltsb1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", ProcFadeOut_frsltsb1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", ProcDrawFirstPlay);

INCLUDE_RODATA("asm/nonmatchings/hoya/result/frsltsb1", D_0066BF68);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", ProcDrawSecondPlay);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", ProcDrawThirdPlay);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", ProcDrawFirstTotal);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", ProcDrawThirdTotal);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", ProcDrawSecondTotal);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", InitFResult);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", InitFresultResult00);

INCLUDE_ASM("asm/nonmatchings/hoya/result/frsltsb1", MainFResult);

void EndFResult(void) {
}
