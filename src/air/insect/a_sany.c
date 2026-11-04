#include "common.h"
#include "air/insect/a_sany.h"

extern void GFInstance_Remove();
extern void gsIscInfosClear();
INCLUDE_ASM("asm/nonmatchings/air/insect/a_sany", gsFixSetCheck_SANY);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_sany", gsGetSanyGndCross);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_sany", gsInsectCtrl_SANY);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_sany", gsInsect01_Act00);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_sany", gsInsect01_Act01);

void gsInsect01_Act02(char* p)
{
    STRUCT_OFFSET(p, 0xA4, int)--;

    if (STRUCT_OFFSET(p, 0xA4, int) == 0)
    {
        GFInstance_Remove(p + 0x230);
        gsIscInfosClear(-1, p);
    }
}
