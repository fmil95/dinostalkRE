#include "air/insect/a_insect.h"
#include "air/insect/a_goki.h"

void gsSetInsect_GOKI(float* prm0) 
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

void gsInsectCtrl_GOKI(ISC_INFO* isc)
{
    g_actfunc_0[isc->unk6](isc);

    gsEyesAreaCheck_GOKI(isc);
}

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

int gsInsectClingCheck_GOKI()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (*(int*)&gsIscInfos[i] & 0x80000)
        {
            return 1;
        }
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsectPlEyesRolCheck_GOKI);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_goki", gsInsectDropGndCheck_GOKI);
