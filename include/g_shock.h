// STATUS: NOT STARTED

#ifndef G_SHOCK_H
#define G_SHOCK_H

void gsShockInit();
gsShockManagement();
int gsShockSetSeqVel(int a, int b, float v);
void gsShockSetSeq();
int gsShockSetSeqNo(int, int);
int gsShockSetSeqNoVel(int a, int n, float v);
void gsShockSetEnable(int v);
void gsShockReset();
#endif // G_SHOCK_H
