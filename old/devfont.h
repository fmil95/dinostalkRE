// STATUS: NOT STARTED

#ifndef DEVFONT_H
#define DEVFONT_H

sceDevConsInit();
sceDevConsOpen();
void sceDevConsClose(int arg0);
sceDevConsRef();
sceDevConsDraw();
sceDevConsDrawS();
sceDevConsClear();
sceDevConsSetColor();
sceDevConsPrintf();
sceDevConsLocate();
sceDevConsPut();
sceDevConsGet();
sceDevConsAttribute();
sceDevConsClearBox();
sceDevConsMove();
sceDevConsRollup();
sceDevConsMessage();
sceDevConsFrame();
sceDevFont();

#endif // DEVFONT_H
