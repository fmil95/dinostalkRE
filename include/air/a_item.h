// STATUS: NOT STARTED

#ifndef AIR_A_ITEM_H
#define AIR_A_ITEM_H

gsItemInit();
gsEventObjItemDataLoad();
gsMake_AllItemObjPacket();
gsMake_ItemObjPacket();
gsObjSet_FixItem();
gsObjSet_AnotherItem();
gsMakeSet_AllFixItem();
gsEventObjSetItemMain();
void gsSt1_ItemManagement(int a);
gsDistCheckItemSet();
gsBomb2AreaCheck();
gsItem_FixBombFunc();
gsSetItemFromBreakObject();
gsDeleteEnemySetItemObj();
gsItem_BombFunc();
gsAppearAnotherItem();
gsRotateAnotherItem();
gsFlashAnotherItem();
gsDeleteAnotherItem();
void gsHagAnotherItem(void* a);
gsObjectSetFixItem();
gsObjectSetAnotherItem();
gsAllItemInfosClear();
void gsFieldItemInfosClear(int a, char* b);
gsEnemyItemInfosClear();
gsAllItemReset();
gsFixItemFreeInfosSearch();
gsAnotherItemFreeInfosSearch();
int gsAnotherItemFreeInfosSearch2();
gfShape_AttachObject2_item();
void GFShape_AttachObject_item(int a, void* b);
gsItem_SizeRot_Change();
gsItem_SizeRot_Return();
void gsClearFixItem();
gsMakeAddFixItem();
void gsAddFixItem();
gsItemReset_ForMovie();
gsInit_ThrowWeapon();
gsClear_ThrowWeapon_Infos();
int gsSearch_ThrowWeapon_FreeInfos();
gsMake_ThrowWeapon();
gsManagement_ThrowWeapon();
gsThrowWeapon();
gsSetMatrix_ThrowWeapon();
void gsThrowWeaponReset();
#endif // AIR_A_ITEM_H
