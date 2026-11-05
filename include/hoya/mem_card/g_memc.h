// STATUS: NOT STARTED

#ifndef HOYA_MEM_CARD_G_MEMC_H
#define HOYA_MEM_CARD_G_MEMC_H

void LetsGotoMemcScene(int a);
void LetsGotoMemcScene4Continue(int a);
void PermittoSendMcTex(u_int i);
qword* Send2McTex(qword* pkt);
gsMEMC_Draw1();
int gsMEMC_Draw2(int a);
int gsStageInit_MEMC();
void gsStageExec_MEMC();

#endif // HOYA_MEM_CARD_G_MEMC_H
