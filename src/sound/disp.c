#include "sound/disp.h"

extern int isCountVblank;
extern int frd;

INCLUDE_ASM("asm/nonmatchings/sound/disp", initDisplay);

INCLUDE_ASM("asm/nonmatchings/sound/disp", cdvMpegChgOffset);

INCLUDE_ASM("asm/nonmatchings/sound/disp", cdvMpegChgCtxt);

INCLUDE_ASM("asm/nonmatchings/sound/disp", dispCreate);

void dispDelete(void) {
}

INCLUDE_ASM("asm/nonmatchings/sound/disp", texsave);

INCLUDE_ASM("asm/nonmatchings/sound/disp", texload);

INCLUDE_ASM("asm/nonmatchings/sound/disp", dispSetTags);

INCLUDE_ASM("asm/nonmatchings/sound/disp", dispSwitch);

void dispClear(void) {
}

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTexRect);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setFlatRect);

u_int* setDMAscTag(u_int* p, u_int spr, void* addr, u_int irq, u_int id, u_int pce, u_int qwc)
{
    u_long* val = (u_long*)p;

    *val = (u_long)spr << 63 | (u_long)((u_int)addr & 0xFFFFFFF0) << 32 | (u_long)irq << 31 | (u_long)id << 28 | (u_long)pce << 26 | (u_long)qwc << 0;

    return p + 4;
}

u_int* setGIFtag(u_int* p, u_long regs, u_int nreg, u_int flg, u_int prim, u_int pre, u_int eop, u_int nloop)
{
    p[0] = eop << 15 | nloop;
    p[1] = pre << (46 - 32) | prim << (47 - 32) | flg << (58 - 32) | nreg << (60 - 32);
    p[2] = regs & 0xFFFFFFFF;
    p[3] = regs >> 32;

    return p + 4;
}

INCLUDE_ASM("asm/nonmatchings/sound/disp", setGIFad);

u_int* setTEXFLUSH(u_int* p)
{
    return setGIFad(p, SCE_GS_TEXFLUSH, 0);
}

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTEX1_1);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTEX1_2);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTEX0_1);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTEX0_2);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setPRIM);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setUV);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setRGBAQ);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setXYZ2);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setFRAME_1);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setFRAME_2);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTEST_1);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTEST_2);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setSCISSOR_1);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setSCISSOR_2);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setXYOFFSET_1);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setXYOFFSET_2);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setPRMODECONT);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setCLAMP_1);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setCLAMP_2);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setBITBLTBUF);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTRXPOS);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTRXREG);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTRXDIR);

INCLUDE_ASM("asm/nonmatchings/sound/disp", loadImage);

INCLUDE_ASM("asm/nonmatchings/sound/disp", vblankHandler);

INCLUDE_ASM("asm/nonmatchings/sound/disp", handler_endimage);

INCLUDE_ASM("asm/nonmatchings/sound/disp", startDisplay);

void endDisplay()
{
    isCountVblank = 0;
    frd = 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/disp", SetUserData);
