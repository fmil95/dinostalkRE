#include "common.h"
#include <eekernel.h>
#include <libgraph.h>
typedef struct SaePrim { u_char type; struct SaePrim* next4; struct SaePrim* next8; struct SaePrim* nextC; struct SaePrim* next10; } SaePrim;
extern SaePrim* _saePrimCurrent[2];

extern int aeSetAD();

extern void aeStartMfifo();
extern void aeLoadImage();
extern sceGsStoreImage _aeStrImg;
extern void aeKickEndTag();
extern SaePrim* _saeDrawPrim_PLYFT4();
extern SaePrim* _saeDrawPrim_PLYFT42();
extern SaePrim* _saeDrawPrim_PLYGT4();
extern SaePrim* _saeDrawPrim_SPRT();
extern SaePrim* _saeDrawPrim_SPRT2();
extern SaePrim* _saeDrawPrim_SPRT3();
extern SaePrim* _saeDrawPrim_PLYG3();
extern SaePrim* _saeDrawPrim_PRTSFT();
extern SaePrim* _saeDrawPrim_PRTLN();
extern SaePrim* _saeDrawPrim_TILE();
INCLUDE_ASM("asm/nonmatchings/aelib", aeInit);

INCLUDE_ASM("asm/nonmatchings/aelib", aeStartMfifo);

INCLUDE_ASM("asm/nonmatchings/aelib", aeStopMfifo);

void aeSwapDBMfifo(sceGsDBuff* db, int id)
{
    aeStopMfifo();
    FlushCache(0);
    sceGsSwapDBuff(db, id);
    aeStartMfifo();
}

INCLUDE_ASM("asm/nonmatchings/aelib", aePresetPolyFt4);

INCLUDE_ASM("asm/nonmatchings/aelib", aePresetSprite);

INCLUDE_ASM("asm/nonmatchings/aelib", aePresetSprite2);

INCLUDE_ASM("asm/nonmatchings/aelib", aePresetPolyG3);

INCLUDE_ASM("asm/nonmatchings/aelib", aePresetPartSoft);

INCLUDE_ASM("asm/nonmatchings/aelib", aePresetPartLine0);

INCLUDE_ASM("asm/nonmatchings/aelib", aePresetPartLine1);

INCLUDE_ASM("asm/nonmatchings/aelib", aePresetTile);

INCLUDE_ASM("asm/nonmatchings/aelib", aePresetPolyGt4);

INCLUDE_ASM("asm/nonmatchings/aelib", _aeKickSourceChannel);

INCLUDE_ASM("asm/nonmatchings/aelib", aeKickPrim);

INCLUDE_ASM("asm/nonmatchings/aelib", aeKickEndTag);

INCLUDE_ASM("asm/nonmatchings/aelib", aeLoadImage);

void aeStoreImage(short a, short b, short c, short d, short e, short f, short g, u_long128* h)
{
    sceGsSetDefStoreImage(&_aeStrImg, a, b, c, d, e, f, g);
    FlushCache(0);
    sceGsExecStoreImage(&_aeStrImg, h);
}

INCLUDE_ASM("asm/nonmatchings/aelib", aeSetAD);

INCLUDE_ASM("asm/nonmatchings/aelib", saeInit);

void saeSetPolyFt4(SaePrim* p, int ch)
{
    p->next4 = _saePrimCurrent[ch];
    p->type = 0;
    _saePrimCurrent[ch] = p;
}

void saeSetSprite(SaePrim* p, int ch)
{
    p->next4 = _saePrimCurrent[ch];
    p->type = 1;
    _saePrimCurrent[ch] = p;
}

void saeSetAD(SaePrim* p, int ch)
{
    p->next4 = _saePrimCurrent[ch];
    p->type = 2;
    _saePrimCurrent[ch] = p;
}

void saeSetLoadImage(SaePrim* p, int ch)
{
    p->next8 = _saePrimCurrent[ch];
    p->type = 3;
    _saePrimCurrent[ch] = p;
}

void saeSetSprite2(SaePrim* p, int ch)
{
    p->next4 = _saePrimCurrent[ch];
    p->type = 4;
    _saePrimCurrent[ch] = p;
}

void saeSetPolyG3(SaePrim* p, int ch)
{
    p->next10 = _saePrimCurrent[ch];
    p->type = 5;
    _saePrimCurrent[ch] = p;
}

void saeSetPartSoft(SaePrim* p, int ch)
{
    p->next8 = _saePrimCurrent[ch];
    p->type = 6;
    _saePrimCurrent[ch] = p;
}

void saeSetPartLine(SaePrim* p, int ch)
{
    p->nextC = _saePrimCurrent[ch];
    p->type = 7;
    _saePrimCurrent[ch] = p;
}

void saeSetPolyFt42(SaePrim* p, int ch)
{
    p->next4 = _saePrimCurrent[ch];
    p->type = 8;
    _saePrimCurrent[ch] = p;
}

void saeSetPolyGt4(SaePrim* p, int ch)
{
    p->next4 = _saePrimCurrent[ch];
    p->type = 11;
    _saePrimCurrent[ch] = p;
}

void saeSetSprite3(SaePrim* p, int ch)
{
    p->next4 = _saePrimCurrent[ch];
    p->type = 9;
    _saePrimCurrent[ch] = p;
}

void saeSetTile(SaePrim* p, int ch)
{
    p->next8 = _saePrimCurrent[ch];
    p->type = 10;
    _saePrimCurrent[ch] = p;
}

void saeDrawPrim(int n)
{
    SaePrim* p;

    for (p = _saePrimCurrent[n]; p != NULL; )
    {
        switch (p->type)
        {
        case 0:
            p = _saeDrawPrim_PLYFT4(p);
            break;
        case 8:
            p = _saeDrawPrim_PLYFT42(p);
            break;
        case 11:
            p = _saeDrawPrim_PLYGT4(p);
            break;
        case 1:
            p = _saeDrawPrim_SPRT(p);
            break;
        case 2:
            p = (SaePrim*)_saeDrawPrim_AD(p);
            break;
        case 3:
            p = (SaePrim*)_saeDrawPrim_LDIMG(p);
            break;
        case 4:
            p = _saeDrawPrim_SPRT2(p);
            break;
        case 9:
            p = _saeDrawPrim_SPRT3(p);
            break;
        case 5:
            p = _saeDrawPrim_PLYG3(p);
            break;
        case 6:
            p = _saeDrawPrim_PRTSFT(p);
            break;
        case 7:
            p = _saeDrawPrim_PRTLN(p);
            break;
        case 10:
            p = _saeDrawPrim_TILE(p);
            break;
        }
    }

    aeKickEndTag();
    _saePrimCurrent[n] = NULL;
}

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_PLYFT4);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_PLYFT42);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_PLYGT4);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_SPRT);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_TILE);

int _saeDrawPrim_AD(void* a)
{
    aeSetAD(STRUCT_OFFSET(a, 0x2, unsigned short), STRUCT_OFFSET(a, 0x8, long));
    return STRUCT_OFFSET(a, 0x4, int);
}

int _saeDrawPrim_LDIMG(char* p)
{
    aeLoadImage(STRUCT_OFFSET(p, 0x4, u_short), STRUCT_OFFSET(p, 0x1, u_char), STRUCT_OFFSET(p, 0x6, u_short), STRUCT_OFFSET(p, 0x10, int), STRUCT_OFFSET(p, 0xC, int), STRUCT_OFFSET(p, 0x14, int), STRUCT_OFFSET(p, 0x18, int), STRUCT_OFFSET(p, 0x1C, int), STRUCT_OFFSET(p, 0x20, int));

    return STRUCT_OFFSET(p, 0x8, int);
}

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_SPRT2);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_SPRT3);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_PLYG3);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_PRTSFT);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_PRTLN);
