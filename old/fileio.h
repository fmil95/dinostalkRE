// STATUS: NOT STARTED

#ifndef FILEIO_H
#define FILEIO_H

FIO_ReadFile();
FIO_ReadFile_NoChk();
int* FIO_ReadFile_Align(int arg0, int arg1);
FIO_ReadFile_Align2();
FIO_ReadFilePartly();
FIO_ReadFilePartly_Align();
FIO_GetFileSize();
FIO_WriteFile();
FIOCache_Init();
FIOCache_ReadPack_Align2();
FIOCache_ReadSdp();
FIOCache_Search();
FIOCache_GetCheckSum();

#endif // FILEIO_H
