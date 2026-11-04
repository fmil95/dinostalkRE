#include "common.h"

extern int* InitPlaceData[];
extern void _gsEnemySet_MovieInit();
typedef struct { int* p; char pad[0x400]; } EvtS;
extern EvtS EventData[];
extern int Evt_Count;
INCLUDE_ASM("asm/nonmatchings/air/a_event", gsEventInit);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsReadEventMatrix);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsReadSwlEventMatrix);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsReadEventObject);

void gsEnemySet_MovieInit(int a)
{
    int* p = InitPlaceData[a];

    while (*p != -1)
    {
        _gsEnemySet_MovieInit(p);
        p += 4;
    }
}

INCLUDE_ASM("asm/nonmatchings/air/a_event", _gsEnemySet_MovieInit);

int gsSearchEventNo(int a)
{
    int i;

    for (i = 0; i < Evt_Count; i++)
    {
        if (*EventData[i].p == a)
        {
            return i;
        }
    }
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsEventMatrixCtrl);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsSetEventObject);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsGetTransRelative);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsSetObject_Dino);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsDinoIdSameCheck);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsSetEventItem);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsItemIdSameCheck);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsReadFixData);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsFixDinoCtrl);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsFixDinoSet);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsGetFieldObjCross);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsGetFieldCross);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsEnemyPictureLoad);
