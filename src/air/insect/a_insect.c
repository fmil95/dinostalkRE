#include "common.h"

extern int IscSe_Port_GokiA;
extern int IscSe_Port_GokiB;
extern int IscSe_Port_Tomb;

extern void gsIscInfosClear();
extern char gsIscInfos[];
extern void GFInstance_Remove();
void gsIscInfosAllClear()
{
    int i;

    for (i = 0; i < 20; i++)
    {
        gsIscInfosClear(i, 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsIscInfosClear);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsFreeIscInfosSearch);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsIscPictureLoad);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsIscAnimLoad);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsMake_IscObjPacket);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsObjSet_Insect);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsMake_AllIscObj);

int gsInitInsect(int a, int b, int c)
{
    gsIscInfosAllClear();

    if (c)
    {
        gsIscPictureLoad();
        gsIscAnimLoad();
        a = gsMake_AllIscObj(a, b);
        gsInit_IscSe();
    }

    return a;
}

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsManagementInsect);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsInsectAnimSet);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsMakeIscLocalMatrix);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsFixIscSetIdCheck);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsInsectAddBreakVe);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsInsectDead);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsInsect_DeadDisp00);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsInsect_DeadDisp01);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsInsectInfoCheck);

void gsIscInit_AfterMovie()
{
    char* p = gsIscInfos;
    int i;

    for (i = 0x13; i >= 0; i--, p += 0x3C0)
    {
        if (STRUCT_OFFSET(p, 0, int) & 1)
        {
            GFInstance_Remove(p + 0x230);
            gsIscInfosClear(-1, p);
        }
    }
    gsInit_IscSe();
}

void gsInit_IscSe()
{
    IscSe_Port_GokiA = -1;
    IscSe_Port_GokiB = -1;
    IscSe_Port_Tomb = -1;
}

INCLUDE_ASM("asm/nonmatchings/air/insect/a_insect", gsIscSe_VolumeAdjust);
