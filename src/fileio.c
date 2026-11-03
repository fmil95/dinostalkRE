#include "common.h"

extern void fio_ReadFile();

INCLUDE_ASM("asm/nonmatchings/fileio", SCELSEEK2);

INCLUDE_ASM("asm/nonmatchings/fileio", SCECLOSE2);

INCLUDE_ASM("asm/nonmatchings/fileio", SCEREAD2);

INCLUDE_ASM("asm/nonmatchings/fileio", SCEOPEN2);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_ReadFile);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_ReadFile_NoChk);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_ReadFile_Align);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_ReadFile_Align2);

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

INCLUDE_ASM("asm/nonmatchings/fileio", fio_OpenFile);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_WriteFile);

INCLUDE_ASM("asm/nonmatchings/fileio", FIOCache_Init);

INCLUDE_ASM("asm/nonmatchings/fileio", fio_GetEmptyCacheInfo);

INCLUDE_ASM("asm/nonmatchings/fileio", FIOCache_ReadPack_Align2);

INCLUDE_ASM("asm/nonmatchings/fileio", FIOCache_ReadSdp);

INCLUDE_ASM("asm/nonmatchings/fileio", FIOCache_Search);

INCLUDE_ASM("asm/nonmatchings/fileio", FIOCache_GetCheckSum);
