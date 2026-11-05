// STATUS: NOT STARTED

#ifndef BENJAMIN_TRACK_H
#define BENJAMIN_TRACK_H

#include "common.h"
#include <libvu0.h>

GFTrack_Update();
void GFTrack_MallocMemory(void* a, int b, int c);
void GFTrack_Lifeless();
void GFTrack_SetTextureID(void* t, int id);
int GFTrack_GetTextureID(void* p);
void GFTrack_SetStartRGBA(void* t, sceVu0FVECTOR a, sceVu0FVECTOR b);
void GFTrack_SetEndRGBA(void* t, sceVu0FVECTOR a, sceVu0FVECTOR b);
void GFTrack_SetStartST(void* t, sceVu0FVECTOR a, sceVu0FVECTOR b);
void GFTrack_SetEndST(void* t, sceVu0FVECTOR a, sceVu0FVECTOR b);
void GFTrack_SetStartPos(void* t, sceVu0FVECTOR a, sceVu0FVECTOR b);
GFTrack_InitStartPos();
void GFTrack_AddFlag(void* a, int b);
void GFTrack_EraseFlag(void* a, int b);
void GFTrack_MakeInstance(void* t);
void GFTrack_OffInstance(void* a);
#endif // BENJAMIN_TRACK_H
