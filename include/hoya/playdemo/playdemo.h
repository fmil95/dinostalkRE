// STATUS: NOT STARTED

#ifndef HOYA_PLAYDEMO_PLAYDEMO_H
#define HOYA_PLAYDEMO_PLAYDEMO_H

gsRecordPadInit();
int gsRecordPadMain();
gsRecordPadMain2();
void gsRecordPadEnd();
gsRecordPadFPutData();
void gsPlayPadInit(int a, int b);
gsPlayPadMain();
gsPlayPadMain2();
void gsPlayPadEnd();
void gsPlayPadFGetData(int name);
void gsPlayDemoPadSwitch(int on);
int retGunActTaddr();
int IsRecordHeaderExists();
void gsPlayDemoInit();
void gsRecDemoInit();
gsPad_GetGuncon2BuckUp();

#endif // HOYA_PLAYDEMO_PLAYDEMO_H
