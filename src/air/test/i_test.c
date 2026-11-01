#include "common.h"

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", I_SHOW_Init);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", I_SHOW_Exec);

void I_SHOW_End() 
{ 
    sceGsSyncPath(0, 0);
    
    pfm_end();
    GF_EndGraphicsFramework();
    
    MEM_FreeAll();
}

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_PictureLoad);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_CreateItem);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_CreateObjectPacket);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_ItemObjectSet);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_JoyCheck);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_ItemSet);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_InfosClear);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", gsIWNamePrint);
