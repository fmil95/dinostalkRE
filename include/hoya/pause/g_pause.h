// STATUS: NOT STARTED

#ifndef HOYA_PAUSE_G_PAUSE_H
#define HOYA_PAUSE_G_PAUSE_H

void LetsGotoPauseScene(int n);
PauseItemSet();
PauseInfosClear();
qword* PauseCreateObjectPacket(qword* pkt, int i);
PauseItemObjectSet();
PauseMakeItemInfo();
PauseItemSetItems();
int gsPAUSE_Draw1(int a);
int gsPAUSE_Draw2(int a);
int gsStageInit_PAUSE();
void gsStageExec_PAUSE();
gsStageInit_PAUSE_STAGE();
gsStageExec_PAUSE_STAGE();

#endif // HOYA_PAUSE_G_PAUSE_H
