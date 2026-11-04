// STATUS: NOT STARTED

#ifndef G_PAD_H
#define G_PAD_H

gsPad_Init();
gsPad_Reset();
void gsPad_End();
gsPad_Update();
gsPad_Update2();
int gsPad_GetNgc1(int a);
int gsPad_Get(int a);
int gsPad_GetTrgNgc1(int a);
int gsPad_GetTrg(int a);
int gsPad_GetRTrg(int a);
gsPad_AGet();
gsPad_AGetTrg();
gsPad_AGetRTrg();
int gsPad_Get2(int i);
int gsPad_GetTrg2(int i);
int gsPad_GetRTrg2(int i);
int gsPad_GetState(int i);
int gsPad_GetStep(int i);
gsPadSetAct();

#endif // G_PAD_H
