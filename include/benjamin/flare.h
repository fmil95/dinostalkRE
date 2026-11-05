// STATUS: NOT STARTED

#ifndef BENJAMIN_FLARE_H
#define BENJAMIN_FLARE_H

GFFlare_Update();
void GFFlare_SetStartPos(char* f, float* v);
void GFFlare_SetEndPos(char* f, float* v);
void GFFlare_SetColorRate(void* p, float v);
void GFFlare_SetTextureID(char* a, int b);
void GFFlare_SetPosScale(void* p, float v);
void GFFlare_SetSize(void* p, float v);
void GFFlare_SetSibling(void* p, int v);
void GFFlare_SetRGBA(char* p, float* v);
void GFFlare_SetSTWH(char* f, float* v);
GFFlare_MakeInstance();

#endif // BENJAMIN_FLARE_H
