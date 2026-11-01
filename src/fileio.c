#include "common.h"

INCLUDE_ASM("asm/nonmatchings/fileio", SCELSEEK2);

INCLUDE_ASM("asm/nonmatchings/fileio", SCECLOSE2);

INCLUDE_ASM("asm/nonmatchings/fileio", SCEREAD2);

INCLUDE_ASM("asm/nonmatchings/fileio", SCEOPEN2);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_ReadFile);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_ReadFile_NoChk);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_ReadFile_Align);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_ReadFile_Align2);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_ReadFilePartly);

INCLUDE_ASM("asm/nonmatchings/fileio", FIO_ReadFilePartly_Align);

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
