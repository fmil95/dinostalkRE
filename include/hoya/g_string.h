// STATUS: NOT STARTED

#ifndef HOYA_G_STRING_H
#define HOYA_G_STRING_H

void LoadLetterPig();
void InitLetter();
void InitLetterAll();
int DeleteEntryNumSprite(u_int i);
GetFontInfo();
GetUV();
GetUV2();
void ChangeDrawFlag(int i, int on);
EntryFontOne();
DrawFontAll();
ClearPigPixelData();
makeTexArea4Font();
makeHyTexArea4Font();
GetFontAdr();
PutChar4Font();
PutChar4Font2();
void EndLetterAll();
strInitStringManager();
strInitStringManager2();
int strAddSentence(int a);
strAddShortSentence1();
int strAddShortSentence2(int a, int b, int c);
strRemoveSentence1();
strRemoveSentence2();
strChangeColSentence1();
strChangeColSentence2();
void strChangeDrawFlag(int i, int on);
void strDrawSentence();
void strDrawSentence2();
strEraseSentence();
strGetOneFontData();
strManagementFunc();
void strEndStringManager();
void AddMessageData(int a, int* b);
void AddMessageData2(int a, char* b);
void DrawMessageData(int a, int b);
DrawMessageData2();
void InitShortSentence(int i);
void AddShortSentence(int i, int v);
PutStr4Font();
PutStr4Font2();
void hyPutLumpsOfStr(void* lumps);
hyStrConvHex2Bcd();

#endif // HOYA_G_STRING_H
