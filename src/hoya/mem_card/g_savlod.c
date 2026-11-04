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
extern char D_005E2728[];
extern int D_005E3C0C[];
extern void* memset();
extern char id[];
extern char sysVer[];
extern char D_005E6000[];
extern char* irx_path_0[];
extern int sceSifLoadModule();
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

int SetSumValueGameData(int n)
{
    int s = 0;
    int* p = (int*)(D_005E2728 + n * 0x29C);
    int i = 0xA6;

    do
    {
        s ^= *p++;
    } while (--i >= 0);
    D_005E3C0C[n] = s;
    return s;
}

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

int CheckSystemDataVersion()
{
    int i;
    int r = 0;

    for (i = 0; i < 16; i++)
    {
        if (saveDataBox[i] != sysVer[i])
        {
            r = 1;
            break;
        }
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckGameDataVersion);

int CheckSystemDataId()
{
    int i;
    int r = 0;

    for (i = 0; i < 16; i++)
    {
        if (saveDataBox[0x10 + i] != id[i])
        {
            r = 1;
            break;
        }
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckGameDataId);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", CheckSystemDataSum);

int CheckGameDataSum(int n)
{
    int s = 0;
    int* p = (int*)(D_005E2728 + n * 0x29C);
    int i = 0xA6;

    do
    {
        s ^= *p++;
    } while (--i >= 0);
    s ^= D_005E3C0C[n];
    return s != 0;
}

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

void GetMemcDirCreateData(char* a, int b, int c)
{
    char* p;

    c = c + b;
    STRUCT_OFFSET(a, 0, char) = 0;
    p = D_005E6000 + c * 0x880;
    STRUCT_OFFSET(a, 1, u_char) = STRUCT_OFFSET(p, 1, u_char);
    STRUCT_OFFSET(a, 2, u_char) = STRUCT_OFFSET(p, 2, u_char);
    STRUCT_OFFSET(a, 3, u_char) = STRUCT_OFFSET(p, 3, u_char);
    STRUCT_OFFSET(a, 4, u_char) = STRUCT_OFFSET(p, 4, u_char);
    STRUCT_OFFSET(a, 5, u_char) = STRUCT_OFFSET(p, 5, u_char);
    STRUCT_OFFSET(a, 6, u_short) = STRUCT_OFFSET(p, 6, u_short);
}

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

void ClearGameData(int n)
{
    int* p;
    int i;

    memset(D_005E2728 + n * 0x29C, 0, 0x29C);
    p = (int*)(D_005E2728 + 0x1500);
    i = 7;
    do
    {
        *p-- = 0;
    } while (--i >= 0);
}

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
