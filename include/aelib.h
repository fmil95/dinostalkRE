// STATUS: NOT STARTED

#ifndef AELIB_H
#define AELIB_H

void aeInit();
void aeStartMfifo();
aeStopMfifo();
aeSwapDBMfifo();
aePresetPolyFt4();
aePresetSprite();
aePresetSprite2();
aePresetPolyG3();
aePresetPartSoft();
aePresetPartLine0();
aePresetPartLine1();
aePresetTile();
aePresetPolyGt4();
aeKickPrim();
void aeKickEndTag();
void aeLoadImage();
aeStoreImage();
int aeSetAD();
saeInit();
saeSetPolyFt4();
saeSetSprite();
saeSetAD();
saeSetLoadImage();
saeSetSprite2();
saeSetPolyG3();
saeSetPartSoft();
saeSetPartLine();
saeSetPolyFt42();
saeSetPolyGt4();
saeSetSprite3();
saeSetTile();
void saeDrawPrim(int n);
#endif // AELIB_H
