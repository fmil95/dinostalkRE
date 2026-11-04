#include "common.h"

extern void hyLoadPigFont();
extern void EndLetterAll();
extern int gsFONT_IdtexNo1;
extern void GFTex_Remove();
extern void InitLetter();
extern void LoadLetterPig();

extern void strAddSentence();
extern void strDrawSentence2();
typedef struct { int p; int q; int r; int s; } MsgData;
typedef struct { char b[408]; } FontMng;
extern FontMng fntMng[];
extern int shortSentence[];
void LoadLetterPig()
{
    hyLoadPigFont();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", InitLetter);

void InitLetterAll()
{
    InitLetter();
    LoadLetterPig();
}

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

void EndLetterAll()
{
    GFTex_Remove(gsFONT_IdtexNo1);
}

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

void strEndStringManager()
{
    EndLetterAll();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", AddMessageData);

void AddMessageData2(int a, char* b)
{
    strAddSentence(*STRUCT_OFFSET(b + a * 16, 0xC, int*), b);
}

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
