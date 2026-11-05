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

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669DE8);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669DF8);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669E08);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669E18);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669E28);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669E38);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669E48);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669E58);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669E68);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669E78);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669E90);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669EA0);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669EB0);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669EC0);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669ED0);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669EE8);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669EF8);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669F10);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669F20);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669F30);

INCLUDE_RODATA("asm/nonmatchings/air/test/i_test", D_00669F40);

INCLUDE_ASM("asm/nonmatchings/air/test/i_test", gsIWNamePrint);
