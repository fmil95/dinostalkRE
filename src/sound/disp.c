#include "common.h"

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

INCLUDE_ASM("asm/nonmatchings/sound/disp", setDMAscTag);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setGIFtag);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setGIFad);

INCLUDE_ASM("asm/nonmatchings/sound/disp", setTEXFLUSH);

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

INCLUDE_ASM("asm/nonmatchings/sound/disp", endDisplay);

INCLUDE_ASM("asm/nonmatchings/sound/disp", SetUserData);
