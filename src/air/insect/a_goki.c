#include "air/insect/a_goki.h"
#include "air/insect/a_insect.h"

void gsSetInsect_GOKI(int prm0) 
{
    ISC_INFO* isc;
    int i;
    int idx;

    i = 0;

    do
    {
        idx = gsFreeIscInfosSearch(0);

        if (idx < 0)
         {
            break;
        }

        isc = &gsIscInfos[idx];

        isc->flags |= 0x1;

        isc->unk4 = 0;
        isc->unk6 = 0;

        if (i == 1) 
        {
            isc->flags |= 0x10000;
        }

        gsSetInsectPos_GOKI(isc, prm0);
        gsInsectGndCheck_GOKI(isc);
        gsObjSet_Insect(isc);

        gsMakeIscLocalMatrix(isc);

        i++;
    } while (i < 4);
}

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsSetInsectPos_GOKI);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsectSetPurPosVeY);

void gsInsect00_DummyAct() 
{

}

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsectCtrl_GOKI);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsect00_Act00);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsect00_Act01);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsect00_Act02);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsect00_Act08);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsect00_Act09);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsect00_Act10);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsect00_Act11);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsect00_Act12);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsect00_Act13);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsectGndCheck_GOKI);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsectFrontCheck_GOKI);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsEyesAreaCheck_GOKI);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsectCling_GOKI);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsectClingCheck_GOKI);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsectPlEyesRolCheck_GOKI);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsectDropGndCheck_GOKI);
