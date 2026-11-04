#include "common.h"

extern char D_00669D70[];
extern int rand();
typedef struct { int x[3]; } Tri3;
INCLUDE_ASM("asm/nonmatchings/air/insect/a_tomb", gsFixSetCheck_TOMB);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_tomb", gsInsectCtrl_TOMB);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_tomb", gsInsect02_Act00);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_tomb", gsInsect02_Act01);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_tomb", gsInsect02_Act02);

INCLUDE_ASM("asm/nonmatchings/air/insect/a_tomb", gsGetInsectRotPurPos_TOMB);

void gsRandCountSet_TOMB(char* a)
{
    Tri3 t = *(Tri3*)D_00669D70;

    STRUCT_OFFSET(a, 0xA4, int) = t.x[rand() % 3];
}
