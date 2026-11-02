// STATUS: NOT STARTED

#ifndef AIR_INSECT_A_GOKI_H
#define AIR_INSECT_A_GOKI_H

#include "common.h"

void gsSetInsect_GOKI(float* prm0);
void gsSetInsectPos_GOKI(ISC_INFO* isc, float* prm1);
gsInsectSetPurPosVeY();
void gsInsect00_DummyAct();
void gsInsectCtrl_GOKI(ISC_INFO* isc);
void gsInsect00_Act00(ISC_INFO* isc);
gsInsect00_Act01();
gsInsect00_Act02();
gsInsect00_Act08();
gsInsect00_Act09();
gsInsect00_Act10();
gsInsect00_Act11();
gsInsect00_Act12();
gsInsect00_Act13();
gsInsectGndCheck_GOKI();
gsInsectFrontCheck_GOKI();
gsEyesAreaCheck_GOKI();
gsInsectCling_GOKI();
gsInsectClingCheck_GOKI();
gsInsectPlEyesRolCheck_GOKI();
gsInsectDropGndCheck_GOKI();

extern void (*g_actfunc_0[])(ISC_INFO*);

#endif // AIR_INSECT_A_GOKI_H
