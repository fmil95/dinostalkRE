// STATUS: NOT STARTED

#ifndef MAIN_H
#define MAIN_H

#include "common.h"

int main();
void _gsMuteki_INIT();
int _gsMuteki_EXEC();
static void EndSystem();
void _gsMuteki_END();
int _gsOmakePower_INIT();
int _gsOmakePower_EXEC();
void _gsOmakePower_END();

extern int gConsole;

#endif // MAIN_H
