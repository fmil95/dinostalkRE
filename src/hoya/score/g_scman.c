#include "common.h"

int addNumber(int* prm0, int prm1, int prm2, int prm3) 
{
    int temp, temp2;

    temp = *prm0 + prm1;
    
    temp2 = (prm2 < temp) ? prm2 : temp;
    
    return *prm0 = (temp2 < prm3) ? prm3 : temp2;
}

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScore2);

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScore);

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScoreWorld);

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScoreEnemy);

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScoreItem);

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScoreInsect);
