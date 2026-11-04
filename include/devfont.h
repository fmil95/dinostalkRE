// STATUS: NOT STARTED

#ifndef DEVFONT_H
#define DEVFONT_H

int sceDevConsInit();
int sceDevConsOpen();
void sceDevConsClose(int arg0);
int sceDevConsRef();
int sceDevConsDraw();
int sceDevConsDrawS();
int sceDevConsClear();
int sceDevConsSetColor();
int sceDevConsPrintf();
int sceDevConsLocate();
int sceDevConsPut();
int sceDevConsGet();
int sceDevConsAttribute();
int sceDevConsClearBox();
int sceDevConsMove();
int sceDevConsRollup();
int sceDevConsMessage();
int sceDevConsFrame();
int sceDevFont();

#endif // DEVFONT_H
