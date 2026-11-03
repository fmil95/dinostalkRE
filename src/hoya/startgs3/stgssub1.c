#include "common.h"

extern int gsNextProg;
extern void LetsGotoMemcScene();

void InitStgsStart(void) {
}

void MainStgsStart()
{
    LetsGotoMemcScene(gsNextProg);
}

void EndStgsStart(void) {
}
