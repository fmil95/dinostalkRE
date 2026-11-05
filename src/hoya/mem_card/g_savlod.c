#include "common.h"
#include <stdio.h>
#include "hoya/mem_card/g_savlod.h"
#include "hoya/mem_card/mcduse.h"

extern int mcdResult;
extern char saveDataBox[];
extern char icon[];

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
extern char gameVer[];
extern MemcInfo memcMng[];
extern char str[][256];
extern int strPos;
extern char dirName[];
extern char D_00673C20[];
extern char D_00673C28[];
extern char D_00673C30[];
typedef struct { int w[0x29C / 4]; } SavGameData;
typedef struct { int w[0x1910 / 4]; } SavSysData;
extern SavGameData plGameData;
extern SavSysData plSysData;
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

int GetQueCondition()
{
    return mcdGetQueCondition();
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

int CheckGameDataVersion(int slot)
{
    int i;
    int ret;

    ret = 0;

    for (i = 0; i < 16; i++)
    {
        if (saveDataBox[slot * 0x29C + 0x1910 + i] != gameVer[i])
        {
            ret = 1;
            break;
        }
    }

    return ret;
}

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

int CheckGameDataId(int slot)
{
    int i;
    int ret;

    ret = 0;

    for (i = 0; i < 16; i++)
    {
        if (saveDataBox[slot * 0x29C + 0x1920 + i] != id[i])
        {
            ret = 1;
            break;
        }
    }

    return ret;
}

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

void FormatMemc(int a, int b)
{
    mcdFormatSet((int)&D_005E6054[a + b], a, b);
}

void FormatMemc2(int a, int b, int c)
{
    mcdFormatSet(c, a, b);
}

void GetMemcFIleList(int a, int b)
{
    str[strPos][0] = D_00673C20[0];
    sprintf(str[strPos], D_00673C28, dirName);
    mcdCardInfoSet((int)((char*)&memcMng[a + b] + 0x854), a, b, 0, 0, 0);
    mcdGetDirSet((char*)&memcMng[a + b] + 0x84C, a, b, str[strPos], 0, 0x20, &memcMng[a + b]);
    strPos = (strPos + 1) % 32;
}

void GetMemcDir(int a, int b)
{
    str[strPos][0] = D_00673C20[0];
    sprintf(str[strPos], D_00673C30, dirName);
    mcdCardInfoSet((int)((char*)&memcMng[a + b] + 0x854), a, b, 0, 0, 0);
    mcdGetDirSet((char*)&memcMng[a + b] + 0x84C, a, b, str[strPos], 0, 1, (char*)&memcMng[a + b] + 0x800);
    strPos = (strPos + 1) % 32;
}

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

void CloseSaveData(int a, int b)
{
    mcdCloseSet(a, b);
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", OpenIconSys);

void WriteIconSys(int a, int b)
{
    mcdWriteSet(a, b, icon, 0x3c4);
}

void CloseIconSys(int a, int b)
{
    mcdCloseSet(a, b);
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", OpenIconIco);

void WriteIconIco(int a, int b)
{
    mcdWriteSet(a, b, ico, 0x1F470);
}

void CloseIconIco(int a, int b)
{
    mcdCloseSet(a, b);
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", LoadSaveData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SaveSaveData);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SaveIconSys);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_savlod", SaveIconIco);

void ClearSystemData()
{
    memset(saveDataBox, 0, 0x1910);
    *(int*)(saveDataBox + 0x2DF0) = 0;
}

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

void SetPlyerGameData2SaveDataBox(int n)
{
    ((SavGameData*)D_005E2728)[n] = plGameData;
}

void SetPlyerGameDataFromSaveDataBox(int n)
{
    plGameData = ((SavGameData*)D_005E2728)[n];
}

void SetPlyerData2SaveDataBox(int n)
{
    ((SavGameData*)D_005E2728)[n] = plGameData;
}

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

void gsMemryCard_LoadModule()
{
    int i;

    for (i = 0; i < 2; i++)
    {
        while (sceSifLoadModule(irx_path_0[i], 0, 0) < 0)
        {
        }
    }
}
INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/g_savlod", D_0066ABD0);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/g_savlod", D_0066ABF0);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/g_savlod", D_0066AC00);

INCLUDE_RODATA("asm/nonmatchings/hoya/mem_card/g_savlod", D_0066AC18);

