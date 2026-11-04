#include "common.h"

extern void mcdCloseSet();
extern void mcdQuit();
extern void mcdGetQueCondition();
extern int mcdResult;
extern char saveDataBox[];
extern void mcdReadSet();
extern char icon[];
extern void mcdWriteSet();
extern void mcdFormatSet();

typedef struct { int w[544]; } MemcInfo;
extern MemcInfo D_005E6044[];
extern MemcInfo D_005E604C[];
extern MemcInfo D_005E6048[];
extern MemcInfo D_005E6040[];
extern MemcInfo D_005E6054[];
extern int ico;
typedef struct { u_char a[6]; short b; } McDirCreate;
extern McDirCreate creteData;
INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CreateIconSys);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", InitMemcManager);

int CheckMemcType(int a, int b)
{
    return D_005E6040[b + a].w[0];
}

int CheckMemcFormat(int a, int b)
{
    return D_005E6048[b + a].w[0];
}

int CheckMemcCapacityDir(int a, int b)
{
    return D_005E6044[b + a].w[0] < 0x8F;
}

int CheckMemcEntryNum(int a, int b)
{
    return D_005E604C[b + a].w[0];
}

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

int GetResultValue(int a, int b)
{
    return D_005E6054[b + a].w[0];
}

int GetErr()
{
    return ((unsigned int)0 < (unsigned int)mcdResult);
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckSystemDataVersion);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckGameDataVersion);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckSystemDataId);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckGameDataId);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckSystemDataSum);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckGameDataSum);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckMemcStatus);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", FormatMemc);

void FormatMemc2(int a, int b, int c)
{
    mcdFormatSet(c, a, b);
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", GetMemcFIleList);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", GetMemcDir);

void ClearMemcDirCreateData()
{
    creteData.a[0] = 0;
    creteData.a[1] = 0;
    creteData.a[2] = 0;
    creteData.a[3] = 0;
    creteData.a[4] = 0;
    creteData.a[5] = 0;
    creteData.b = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", GetMemcDirCreateData);

void SetMemcDirCreateData(McDirCreate* p)
{
    creteData = *p;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CmpMemcDirCreateData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", GetMemcSaveFIle);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", MemcMakeDir);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", MemcMakeDir2);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", DeleteMemcSaveFile);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", OpenSaveData);

void WriteSaveData(int a, int b)
{
    mcdWriteSet(a, b, saveDataBox, 0x2e14);
}

void ReadSaveData(int a, int b)
{
    mcdReadSet(a, b, saveDataBox, 0x2e14);
}

void CloseSaveData()
{
    mcdCloseSet();
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", OpenIconSys);

void WriteIconSys(int a, int b)
{
    mcdWriteSet(a, b, icon, 0x3c4);
}

void CloseIconSys()
{
    mcdCloseSet();
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", OpenIconIco);

void WriteIconIco(int a, int b)
{
    mcdWriteSet(a, b, ico, 0x1F470);
}

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
