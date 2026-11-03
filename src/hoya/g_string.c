#include "common.h"

extern void hyLoadPigFont();

void LoadLetterPig()
{
    hyLoadPigFont();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", InitLetter);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", InitLetterAll);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", DeleteEntryNumSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", GetFontInfo);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", GetUV);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", GetUV2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", ChangeDrawFlag);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", EntryFontOne);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", DrawFontAll);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", ClearPigPixelData);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", makeTexArea4Font);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", makeHyTexArea4Font);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", GetFontAdr);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", PutChar4Font);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", PutChar4Font2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", EndLetterAll);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strInitStringManager);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strInitStringManager2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strAddSentence);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strAddShortSentence1);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strAddShortSentence2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strRemoveSentence1);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strRemoveSentence2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strChangeColSentence1);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strChangeColSentence2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strChangeDrawFlag);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strDrawSentence);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strDrawSentence2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strEraseSentence);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strGetOneFontData);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strManagementFunc);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strEndStringManager);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", AddMessageData);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", AddMessageData2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", DrawMessageData);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", DrawMessageData2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", InitShortSentence);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", AddShortSentence);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", PutShortStr4Font);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", PutShortStr4Font2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", PutStr4Font);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", PutStr4Font2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", hyPutLumpsOfStr);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", hyStrConvHex2Bcd);
