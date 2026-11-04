// STATUS: NOT STARTED

#ifndef BENJAMIN_G_IK_H
#define BENJAMIN_G_IK_H

void gsIKinit();
void gsIKinitOne(void* a);
gsIKprocHead();
gsIKproc();
gsIK_UpdateData();
gsIK_ResetInfo();
void gsIK_SetHit(char* a, int b);
gsIK_RotDeadBody();
void gsIK_RecoverBodyRotXZ(char* a, int v);
benjaminRand();
benjaminRandRange();

#endif // BENJAMIN_G_IK_H
