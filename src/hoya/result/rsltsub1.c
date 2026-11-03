#include "common.h"

extern void EndLetterAll();
extern int gsNextProg;
extern void LetsGotoMemcScene();
extern int pRsltRslt;
extern void hyCheckFadeFinishFlag();
extern void hySetFadePara2();

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", MakeAllNumberTex_rsltsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltInitSprOther_rsltsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltDrawSprOther_rsltsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltInitSprStageNo);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltDrawSprStageNo);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltInitSprBonus);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltDrawSprBonus);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltInitSprDino);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltDrawSprDino);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltInitSprRank);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltDrawSprRank);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltInitSprNumber);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltDrawSprNumber);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltInitSprYN);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", RsltDrawSprYN);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ConvTime2Score);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ConvTimeBonus2Score);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ConvDinoBonus2Score);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", NoDamageBonus2Score);

void SetFadeParaRslt(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pRsltRslt + 2096));
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", SwitchFadeTimerRslt);

void CheckFadeFinishFlagRslt()
{
    hyCheckFadeFinishFlag((pRsltRslt + 2096));
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcFadeIn_rsltsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcFadeOut_rsltsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawFirstTimeBonus);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawFirstDinoBonus);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawFirstNoDamageBonus);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawSecondConvert);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawThirdFixRank);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawSaveWindow);

void GotoNextScene()
{
    LetsGotoMemcScene(gsNextProg);
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", Return2Game);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", InitResultResult00);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", InitResult);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", Draw2dObjectRslt);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", MainResult);

void EndResult()
{
    EndLetterAll();
}
