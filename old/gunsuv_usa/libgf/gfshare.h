// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_GFSHARE_H
#define GUNSUV_USA_LIBGF_GFSHARE_H


qword* gf_CopyQWs(qword *pw, qword *pr, Uint32 size);
void GFShare_Eval(GF_INST_SHAPE *inst);
qword* GFShare_Draw(qword *packet, GF_INST_SHAPE *inst);
void GFShare_SetBuf(Uint32 *pBuf, Uint32 size);
Uint32 GFShare_GetUsedBufSize();
void GFShare_SetVu1WorkSize(Uint32 size);
Uint32 GFShare_GetVu1WorkSize();

#endif // GUNSUV_USA_LIBGF_GFSHARE_H
