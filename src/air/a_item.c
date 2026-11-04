#include "common.h"

extern void sceVu0AddVector();
extern void gsItem_SizeRot_Return();

typedef struct { char b[0x230]; } AnotherItemS;
extern AnotherItemS Another_Item[];
typedef struct { char b[0x210]; } FixItemS;
extern FixItemS Fix_Item[];
typedef struct { char b[0x220]; } ThrowWeaponS;
extern ThrowWeaponS gsThrow_Weapon[];
extern void gfShape_AttachObject2_item();
INCLUDE_ASM("asm/nonmatchings/air/a_item", gsItemInit);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsEventObjItemDataLoad);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsMake_AllItemObjPacket);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsMake_ItemObjPacket);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsObjSet_FixItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsObjSet_AnotherItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsMakeSet_AllFixItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsEventObjSetItemMain);

void gsSt1_ItemManagement(int a)
{
    sceVu0AddVector((char*)a + 0x20, (char*)a + 0x20, (char*)a + 0x50);
}

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsDistCheckItemSet);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsBomb2AreaCheck);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsItem_FixBombFunc);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsSetItemFromBreakObject);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsDeleteEnemySetItemObj);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsItem_BombFunc);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsAppearAnotherItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsRotateAnotherItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsFlashAnotherItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsDeleteAnotherItem);

void gsHagAnotherItem(void* a)
{
    if (!((STRUCT_OFFSET(a, 0x0, int) & 0x100) != 0))
    {
        gsItem_SizeRot_Return(a);
        STRUCT_OFFSET(a, 0xC, short) = 1;
        STRUCT_OFFSET(a, 0x10, int) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsObjectSetFixItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsObjectSetAnotherItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsAllItemInfosClear);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsFieldItemInfosClear);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsEnemyItemInfosClear);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsAllItemReset);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsFixItemFreeInfosSearch);

AnotherItemS* gsAnotherItemFreeInfosSearch()
{
    int i;

    for (i = 0; i < 48; i++)
    {
        if ((STRUCT_OFFSET(&Another_Item[i], 0x0, int) & 1) == 0)
        {
            return &Another_Item[i];
        }
    }

    return 0;
}

int gsAnotherItemFreeInfosSearch2()
{
    int i;

    for (i = 0; i < 48; i++)
    {
        if ((STRUCT_OFFSET(&Another_Item[i], 0x0, int) & 1) == 0)
        {
            return i;
        }
    }

    return -1;
}

INCLUDE_ASM("asm/nonmatchings/air/a_item", gfShape_AttachObject2_item);

INCLUDE_ASM("asm/nonmatchings/air/a_item", GFShape_AttachObject_item);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsItem_SizeRot_Change);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsItem_SizeRot_Return);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsClearFixItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsMakeAddFixItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsAddFixItem);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsItemReset_ForMovie);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsInit_ThrowWeapon);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsClear_ThrowWeapon_Infos);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsSearch_ThrowWeapon_FreeInfos);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsMake_ThrowWeapon);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsManagement_ThrowWeapon);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsThrowWeapon);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsSetMatrix_ThrowWeapon);

INCLUDE_ASM("asm/nonmatchings/air/a_item", gsThrowWeaponReset);
