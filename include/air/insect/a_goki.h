// STATUS: NOT STARTED

#ifndef AIR_INSECT_A_GOKI_H
#define AIR_INSECT_A_GOKI_H

#include "common.h"

void gsSetInsect_GOKI(float* prm0);
void gsSetInsectPos_GOKI(ISC_INFO* isc, float* prm1);
int gsInsectSetPurPosVeY();
void gsInsect00_DummyAct();
void gsInsectCtrl_GOKI(ISC_INFO* isc);
void gsInsect00_Act00(ISC_INFO* isc);
int gsInsect00_Act01();
int gsInsect00_Act02();
int gsInsect00_Act08();
int gsInsect00_Act09();
int gsInsect00_Act10();
int gsInsect00_Act11();
int gsInsect00_Act12();
int gsInsect00_Act13();
int gsInsectGndCheck_GOKI();
int gsInsectFrontCheck_GOKI();
int gsEyesAreaCheck_GOKI();
int gsInsectCling_GOKI();
int gsInsectClingCheck_GOKI();
int gsInsectPlEyesRolCheck_GOKI();
int gsInsectDropGndCheck_GOKI();

extern void (*g_actfunc_0[])(ISC_INFO*);

#endif // AIR_INSECT_A_GOKI_H
