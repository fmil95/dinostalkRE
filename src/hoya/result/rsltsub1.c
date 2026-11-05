#include "common.h"
#include "hoya/result/rsltsub1.h"
#include "hoya/hyopen.h"
#include "hoya/g_string.h"
#include "hoya/hoya.h"
#include "hoya/score/g_scman.h"

extern int gsNextProg;
extern void LetsGotoMemcScene();
extern int pRsltRslt;
extern int hyCheckFadeFinishFlag();
extern void hySwitchFadeTimer();

extern void RsltInitSprOther_rsltsub1();
extern void RsltInitSprDino();
extern void RsltInitSprRank();
extern void RsltInitSprBonus();
extern void RsltInitSprStageNo();
extern void RsltInitSprNumber();
extern void RsltInitSprYN();
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

int ConvTimeBonus2Score()
{
    addScore2(pRsltRslt + 0x750, STRUCT_OFFSET(pRsltRslt, 0x760, int));

    return 0;
}

int ConvDinoBonus2Score()
{
    addScore2(pRsltRslt + 0x750, STRUCT_OFFSET(pRsltRslt, 0x764, int));

    return 0;
}

int NoDamageBonus2Score()
{
    addScore2(pRsltRslt + 0x750, STRUCT_OFFSET(pRsltRslt, 0x768, int));

    return 0;
}

void SetFadeParaRslt(int a, int b, int c)
{
    hySetFadePara2(a, b, c, (pRsltRslt + 2096));
}

void SwitchFadeTimerRslt(int a)
{
    hySwitchFadeTimer(a, (pRsltRslt + 2096));
}

int CheckFadeFinishFlagRslt()
{
    return hyCheckFadeFinishFlag((pRsltRslt + 2096));
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcFadeIn_rsltsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcFadeOut_rsltsub1);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawFirstTimeBonus);

INCLUDE_RODATA("asm/nonmatchings/hoya/result/rsltsub1", D_0066BFF0);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawFirstDinoBonus);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawFirstNoDamageBonus);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawSecondConvert);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawThirdFixRank);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", ProcDrawSaveWindow);

void GotoNextScene()
{
    LetsGotoMemcScene(gsNextProg);
}

void Return2Game()
{
    int n = ((int*)pRsltRslt)[2];

    if (n < 8)
    {
        gsNextProg = hyGetStageNumber(n) + 1;
    }
    else
    {
        gsNextProg = 17;
    }
}

void InitResultResult00()
{
    int* r = (int*)pRsltRslt;
    int n;

    RsltInitSprOther_rsltsub1();
    RsltInitSprDino(100);
    RsltInitSprRank(-1);
    RsltInitSprBonus();
    n = hyGetStageNumber(r[2]);
    RsltInitSprStageNo(n + (hyGetStageNumber(r[2]) < 3));
    RsltInitSprNumber();
    RsltInitSprYN();
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", InitResult);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", Draw2dObjectRslt);

INCLUDE_ASM("asm/nonmatchings/hoya/result/rsltsub1", MainResult);

void EndResult()
{
    EndLetterAll();
}
