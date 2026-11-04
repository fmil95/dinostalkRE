#include "common.h"
extern int SCEOPEN2();
extern void exit();

extern void fio_ReadFile();

typedef struct { int a; int b; } CacheInfoS;
extern CacheInfoS fio_CacheInfo[];
INCLUDE_ASM("asm/nonmatchings/fileio", SCELSEEK2);

INCLUDE_ASM("asm/nonmatchings/fileio", SCECLOSE2);

INCLUDE_ASM("asm/nonmatchings/fileio", SCEREAD2);

INCLUDE_ASM("asm/nonmatchings/fileio", SCEOPEN2);

void FIO_ReadFile(int a, int b)
{
    fio_ReadFile(a, 0, 0, b, 4, 1);
}

void FIO_ReadFile_NoChk(int a, int b)
{
    fio_ReadFile(a, 0, 0, b, 4, 0);
}

void FIO_ReadFile_Align(int a, int b)
{
    fio_ReadFile(a, 0, 0, 0, b, 1);
}

void FIO_ReadFile_Align2(int a, int b, int c)
{
    fio_ReadFile(a, 0, b, 0, c, 1);
}

void FIO_ReadFilePartly(int a, int b, int c)
{
    fio_ReadFile(a, b, c, 0, 4, 1);
}

void FIO_ReadFilePartly_Align(int a, int b, int c, int d)
{
    fio_ReadFile(a, b, c, 0, d, 1);
}

INCLUDE_ASM("asm/nonmatchings/fileio", fio_ReadFile);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_GetFileSize);

int fio_OpenFile(char* name, int flags)
{
    int fd = SCEOPEN2(name, flags, 0x1FF);

    if (fd < 0)
    {
        exit(1);
    }

    return fd;
}

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_WriteFile);

void FIOCache_Init()
{
    int i;

    for (i = 0; i < 64; i++)
    {
        fio_CacheInfo[i].a = 0;
        fio_CacheInfo[i].b = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/fileio", fio_GetEmptyCacheInfo);

INCLUDE_ASM("asm/nonmatchings/fileio", FIOCache_ReadPack_Align2);

INCLUDE_ASM("asm/nonmatchings/fileio", FIOCache_ReadSdp);

INCLUDE_ASM("asm/nonmatchings/fileio", FIOCache_Search);

u_int FIOCache_GetCheckSum(u_int* p, u_int size)
{
    u_int n = size >> 2;
    u_int sum = 0;
    u_int i;

    for (i = 0; i < n; i++)
    {
        sum += p[i];
    }

    return sum;
}
