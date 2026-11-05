// STATUS: NOT STARTED

#ifndef FILEIO_H
#define FILEIO_H

void* FIO_ReadFile(int a, int b);
void* FIO_ReadFile_NoChk(int a, int b);
void* FIO_ReadFile_Align(int a, int b);
void* FIO_ReadFile_Align2(int a, int b, int c);
void* FIO_ReadFilePartly(int a, int b, int c);
void* FIO_ReadFilePartly_Align(int a, int b, int c, int d);
int FIO_GetFileSize(char* name);
FIO_WriteFile();
void FIOCache_Init();
FIOCache_ReadPack_Align2();
FIOCache_ReadSdp();
FIOCache_Search();
u_int FIOCache_GetCheckSum(u_int* p, u_int size);
#endif // FILEIO_H
