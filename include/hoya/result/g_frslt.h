// STATUS: NOT STARTED

#ifndef HOYA_RESULT_G_FRSLT_H
#define HOYA_RESULT_G_FRSLT_H

LetsGotoFinalResultScene();
void PermittoSendFrsltTex(int a);
qword* Send2FrsltTex(qword* pkt);
void ReleaseFResultScene(void);
FRsltItemSet();
FRsltInfosClear();
qword* FRsltCreateObjectPacket(qword* pkt, int i);
FRsltItemObjectSet();
FRsltMakeItemInfo();
FRsltItemSetItems();
gsFRESULT_Draw1();
int gsFRESULT_Draw2(int a);
int gsStageInit_FRESULT();
void gsStageExec_FRESULT();

#endif // HOYA_RESULT_G_FRSLT_H
