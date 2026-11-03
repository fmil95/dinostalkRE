// STATUS: NOT STARTED

#ifndef MAIN_H
#define MAIN_H

#include "common.h"

int main();
void _gsMuteki_INIT();
_gsMuteki_EXEC();
static void EndSystem();
void _gsMuteki_END();
_gsOmakePower_INIT();
_gsOmakePower_EXEC();
void _gsOmakePower_END();

extern int gConsole;

#endif // MAIN_H
