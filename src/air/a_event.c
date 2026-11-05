#include "common.h"
#include "air/a_event.h"
#include "g_enemy/enemain.h"

extern int* InitPlaceData[];
typedef struct { int* p; char pad[0x400]; } EvtS;
extern EvtS EventData[];
extern int Evt_Count;
INCLUDE_RODATA("asm/nonmatchings/air/a_event", D_00669940);

INCLUDE_RODATA("asm/nonmatchings/air/a_event", D_00669968);

INCLUDE_RODATA("asm/nonmatchings/air/a_event", D_00669990);

INCLUDE_RODATA("asm/nonmatchings/air/a_event", D_006699B8);

INCLUDE_RODATA("asm/nonmatchings/air/a_event", D_006699E0);

INCLUDE_RODATA("asm/nonmatchings/air/a_event", D_00669A08);

INCLUDE_RODATA("asm/nonmatchings/air/a_event", D_00669A30);

INCLUDE_RODATA("asm/nonmatchings/air/a_event", D_00669A58);

INCLUDE_RODATA("asm/nonmatchings/air/a_event", D_00669A80);

extern char gsEnemyInfos[];
extern char Another_Item[];
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

int gsDinoIdSameCheck(int id)
{
    int i;
    char* e = gsEnemyInfos;

    for (i = 0; i < 10; i++)
    {
        if (*(int*)(e + i * 0x2A50 + 0x4C) == id)
        {
            return 1;
        }
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsSetEventItem);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsItemIdSameCheck);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsReadFixData);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsFixDinoCtrl);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsFixDinoSet);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsGetFieldObjCross);

INCLUDE_ASM("asm/nonmatchings/air/a_event", gsGetFieldCross);

int gsEnemyPictureLoad(int stage, int p)
{
    Enemy_AllWorkInit();
    p = Enemy_EveryStgDtLd(p, stage);

    switch (stage)
    {
    case 0:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
        break;
    case 1:
    case 4:
        p = Enemy_BossDtLd(p, 0);
        break;
    }

    return p;
}
