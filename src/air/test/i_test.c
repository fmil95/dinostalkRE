#include "common.h"
#include "air/test/i_test.h"
#include "gunsuv_usa/libgf/gfmodel.h"
#include "gunsuv_usa/libgf/gfobject.h"

extern char ItemObj[];
extern Uint32* adr_itempod[];
extern int vu1work_006739f0;
extern GF_MICRO gMicroShare;
extern GF_LIGHT gLight;
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

qword* ISHOW_CreateObjectPacket(qword* pkt, int i)
{
    char* m = ItemObj + i * 0x1C0;

    pkt = GFModel_MakePreset((GF_MODEL*)m, pkt, adr_itempod[i], vu1work_006739f0);
    GFObject_Init((GF_INST_OBJECT*)(m + 0x30));
    GFObject_AttachModel((GF_INST_OBJECT*)(m + 0x30), &gMicroShare, &gLight, 0, 0, (GF_MODEL*)m);
    return pkt;
}

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_ItemObjectSet);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_JoyCheck);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_ItemSet);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", ISHOW_InfosClear);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", gsIWNamePrint);
