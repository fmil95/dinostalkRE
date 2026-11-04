#include "common.h"
typedef struct SaePrim { u_char type; struct SaePrim* next4; struct SaePrim* next8; struct SaePrim* nextC; struct SaePrim* next10; } SaePrim;
extern SaePrim* _saePrimCurrent[2];

extern int aeSetAD();

INCLUDE_ASM("asm/nonmatchings/aelib", aeInit);

INCLUDE_ASM("asm/nonmatchings/aelib", aeStartMfifo);

INCLUDE_ASM("asm/nonmatchings/aelib", aeStopMfifo);

INCLUDE_ASM("asm/nonmatchings/aelib", aeSwapDBMfifo);

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

INCLUDE_ASM("asm/nonmatchings/aelib", aeStoreImage);

INCLUDE_ASM("asm/nonmatchings/aelib", aeSetAD);

INCLUDE_ASM("asm/nonmatchings/aelib", saeInit);

void saeSetPolyFt4(SaePrim* p, int ch)
{
    p->next4 = _saePrimCurrent[ch];
    p->type = 0;
    _saePrimCurrent[ch] = p;
}

INCLUDE_ASM("asm/nonmatchings/aelib", saeSetSprite);

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

INCLUDE_ASM("asm/nonmatchings/aelib", saeSetSprite2);

INCLUDE_ASM("asm/nonmatchings/aelib", saeSetPolyG3);

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

INCLUDE_ASM("asm/nonmatchings/aelib", saeSetPolyGt4);

INCLUDE_ASM("asm/nonmatchings/aelib", saeSetSprite3);

INCLUDE_ASM("asm/nonmatchings/aelib", saeSetTile);

INCLUDE_ASM("asm/nonmatchings/aelib", saeDrawPrim);

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

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_LDIMG);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_SPRT2);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_SPRT3);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_PLYG3);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_PRTSFT);

INCLUDE_ASM("asm/nonmatchings/aelib", _saeDrawPrim_PRTLN);
