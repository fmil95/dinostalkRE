#include "common.h"

extern void hyLoadPigFont();
extern void EndLetterAll();
extern int gsFONT_IdtexNo1;
extern void GFTex_Remove();
extern void InitLetter();
extern void LoadLetterPig();

extern void strDrawSentence2();
typedef struct { int p; int q; int r; int s; } MsgData;
typedef struct { char b[408]; } FontMng;
extern FontMng fntMng[];
extern int shortSentence[];
extern void strDrawSentence();
typedef struct { char b[0x630]; } StrManS;
extern StrManS strManager[];
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

int DeleteEntryNumSprite(u_int i)
{
    if (i >= 0x2BD)
    {
        return 1;
    }

    STRUCT_OFFSET(&fntMng[i], 0x0, int) &= ~1;

    return 0;
}

FontMng* GetFontInfo(int i)
{
    return &fntMng[i];
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", GetUV);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", GetUV2);

void ChangeDrawFlag(int i, int on)
{
    FontMng* m = &fntMng[i];

    if (on)
    {
        STRUCT_OFFSET(m, 0x0, int) |= 4;
    }
    else
    {
        STRUCT_OFFSET(m, 0x0, int) &= ~4;
    }
}

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

void strChangeDrawFlag(int i, int on)
{
    FontMng* m = &fntMng[i];

    if (on)
    {
        STRUCT_OFFSET(m, 0x0, int) |= 4;
    }
    else
    {
        STRUCT_OFFSET(m, 0x0, int) &= ~4;
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strDrawSentence);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strDrawSentence2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strEraseSentence);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strGetOneFontData);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", strManagementFunc);

void strEndStringManager()
{
    EndLetterAll();
}

void AddMessageData(int a, int* b)
{
    strAddSentence(**(int**)((char*)b + a * 12 + 8));
}

void AddMessageData2(int a, char* b)
{
    strAddSentence(*STRUCT_OFFSET(b + a * 16, 0xC, int*));
}

void DrawMessageData(int a, int b)
{
    int p = a * 12 + b;

    strDrawSentence(STRUCT_OFFSET(p, 0x0, int), STRUCT_OFFSET(p, 0x4, int));
}

void DrawMessageData2(int a, MsgData* b, int c)
{
    strDrawSentence2(b[a].p, b[a].q, c, b[a].r);
}

void InitShortSentence(int i)
{
    if (i == -1)
    {
        int j;

        for (j = 0; j < 10; j++)
        {
            shortSentence[j] = 0;
        }
    }
    else
    {
        shortSentence[i] = 0;
    }
}

void AddShortSentence(int i, int v)
{
    shortSentence[i] = v;
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", PutShortStr4Font);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", PutShortStr4Font2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", PutStr4Font);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", PutStr4Font2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", hyPutLumpsOfStr);

INCLUDE_ASM("asm/nonmatchings/hoya/g_string", hyStrConvHex2Bcd);
