// STATUS: NOT STARTED

#include "g_scman.h"

/* 100% match */ 
int addNumber(int* arg0, int arg1, int arg2, int arg3) 
{
    int temp, temp2;

    temp = *arg0 + arg1;
    
    temp2 = (arg2 < temp) ? arg2 : temp;
    
    return *arg0 = (temp2 < arg3) ? arg3 : temp2;
}

addScore2() {}

addScore() {}

addScoreWorld() {}

addScoreEnemy() {}

addScoreItem() {}

addScoreInsect() {}
