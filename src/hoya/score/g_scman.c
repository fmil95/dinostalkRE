#include "common.h"
#include "hoya/score/g_scman.h"

extern char D_002F1FC4[];

int addNumber(int* prm0, int prm1, int prm2, int prm3) 
{
    int temp, temp2;

    temp = *prm0 + prm1;
    
    temp2 = (prm2 < temp) ? prm2 : temp;
    
    return *prm0 = (temp2 < prm3) ? prm3 : temp2;
}

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScore2);

void addScore(int a)
{
    addScore2(D_002F1FC4, a);
}

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScoreWorld);

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScoreEnemy);

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScoreItem);

INCLUDE_ASM("asm/nonmatchings/hoya/score/g_scman", addScoreInsect);
