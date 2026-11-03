#include "common.h"

extern void mcdCloseSet();
extern void mcdQuit();
extern void mcdGetQueCondition();

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CreateIconSys);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", InitMemcManager);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckMemcType);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckMemcFormat);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckMemcCapacityDir);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckMemcEntryNum);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckMemcErrorFile);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetSumValueSystemData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetSumValueGameData);

void SetSystemData2Box(void) {
}

void SetGameData2Box(void) {
}

void GetSystemData2Box(void) {
}

void GetGameData2Box(void) {
}

void GetQueCondition()
{
    mcdGetQueCondition();
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", GetResultValue);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", GetErr);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckSystemDataVersion);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckGameDataVersion);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckSystemDataId);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckGameDataId);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckSystemDataSum);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckGameDataSum);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckMemcStatus);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", FormatMemc);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", FormatMemc2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", GetMemcFIleList);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", GetMemcDir);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", ClearMemcDirCreateData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", GetMemcDirCreateData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetMemcDirCreateData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CmpMemcDirCreateData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", GetMemcSaveFIle);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", MemcMakeDir);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", MemcMakeDir2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", DeleteMemcSaveFile);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", OpenSaveData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", WriteSaveData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", ReadSaveData);

void CloseSaveData()
{
    mcdCloseSet();
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", OpenIconSys);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", WriteIconSys);

void CloseIconSys()
{
    mcdCloseSet();
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", OpenIconIco);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", WriteIconIco);

void CloseIconIco()
{
    mcdCloseSet();
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", LoadSaveData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SaveSaveData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SaveIconSys);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SaveIconIco);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", ClearSystemData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", ClearGameData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetDefaultSystemData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetDefaultGameData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetDefaultPlayerSystemData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetDefaultPlayerGameData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetPlyerSystemData2SaveDataBox);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetPlyerSystemDataFromSaveDataBox);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetPlyerGameData2SaveDataBox);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetPlyerGameDataFromSaveDataBox);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetPlyerData2SaveDataBox);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetPlyerDataFromSaveDataBox);

void CollectAllSystemData(void) {
}

void SetAllSystemData(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CollectAllGameData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SetAllGameData);

void EndMemcManager()
{
    mcdQuit();
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", gsMemryCard_LoadModule);
