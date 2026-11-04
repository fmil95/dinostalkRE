// STATUS: NOT STARTED

#ifndef BENJAMIN_TRACK_H
#define BENJAMIN_TRACK_H

GFTrack_Update();
void GFTrack_MallocMemory(void* a, int b, int c);
void GFTrack_Lifeless();
void GFTrack_SetTextureID(void* t, int id);
int GFTrack_GetTextureID(void* p);
GFTrack_SetStartRGBA();
GFTrack_SetEndRGBA();
GFTrack_SetStartST();
GFTrack_SetEndST();
GFTrack_SetStartPos();
GFTrack_InitStartPos();
void GFTrack_AddFlag(void* a, int b);
void GFTrack_EraseFlag(void* a, int b);
void GFTrack_MakeInstance(void* t);
void GFTrack_OffInstance(void* a);
#endif // BENJAMIN_TRACK_H
