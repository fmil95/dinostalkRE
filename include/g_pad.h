// STATUS: NOT STARTED

#ifndef G_PAD_H
#define G_PAD_H

void gsPad_Init();
gsPad_Reset();
void gsPad_End();
void gsPad_Update();
gsPad_Update2();
int gsPad_GetNgc1(int a);
int gsPad_Get(int a);
int gsPad_GetTrgNgc1(int a);
int gsPad_GetTrg(int a);
int gsPad_GetRTrg(int a);
int gsPad_AGet(int a);
int gsPad_AGetTrg(int a);
int gsPad_AGetRTrg(int a);
int gsPad_Get2(int i);
int gsPad_GetTrg2(int i);
int gsPad_GetRTrg2(int i);
int gsPad_GetState(int i);
int gsPad_GetStep(int i);
int gsPadSetAct(int n, u_char a, u_char b);
#endif // G_PAD_H
