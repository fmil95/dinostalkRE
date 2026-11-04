#include "common.h"
#include "hoya/cockpit/g_cpscor.h"

extern void PutScScore();
INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpscor", gsCOCKPIT_InitScore);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpscor", PutScScore);

void PutScFixChar() {
}

void gsCOCKPIT_PutScore(int a)
{
    int s = a & 1;

    PutScScore(s);
    PutScFixChar(s);
}
