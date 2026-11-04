#include "common.h"

extern char gDammyScene[];
extern char gDammyScene[];
extern void GFScene_MakeInstance();
extern void GFScene_SetScreen();

typedef struct { char b[0x1C0]; } ItemS;
extern ItemS item[];
typedef struct { char b[0x1E0]; } OptS;
INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_InitCocpit2);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_takiEffOptInit);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_takiEffInit);

OptS* FreeDataSearchOpt(char* a)
{
    int i;
    OptS* p = (OptS*)(a + 0x1F0);

    for (i = 0; i < 5; i++, p++)
    {
        int f = STRUCT_OFFSET(p, 0x0, int);

        if ((f & 1) == 0)
        {
            STRUCT_OFFSET(p, 0x0, int) = f | 1;

            return p;
        }
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", OrderChangeOpt);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_takiEffMakeOptData);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", ClipJudge);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_takiEffOptDraw);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_AddSecDraw);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_TakionGetEffect);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_InitData);

ItemS* FreeDataSearch()
{
    int i;

    for (i = 0; i < 32; i++)
    {
        if ((STRUCT_OFFSET(&item[i], 0x0, int) & 1) == 0)
        {
            STRUCT_OFFSET(&item[i], 0x0, int) |= 1;

            return &item[i];
        }
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", NextItemData);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", OrderChange);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", AddShowStockData);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_ReqItemText);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_PutItemText);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_NormalItemText);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_PutStockItemText);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_PutItemDropText);

void gsCOCKPIT_MakeDammyScene(int a)
{
    GFScene_MakeInstance(gDammyScene, 0);
    GFScene_SetScreen(gDammyScene, a);
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_LoadItem);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_NowLoadItem);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_ItemSetMatrix);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_ItemEval);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_ItemShapeEval);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_ItemDraw);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_ItemBefore);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", InitItemTextTex);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", PermittoSend2dItemTextTex);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", SendItemTextTex);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_TakionGetInit);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_ckt2", gsCOCKPIT_TakionShowEffect);
