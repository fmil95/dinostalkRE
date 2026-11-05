#include "common.h"
#include "g_guncon1/g_guncon1.h"
#include "g_guncon2/g_guncon2.h"
#include "hoya/option/g_option.h"
#include "hoya/startgs3/stgssub2.h"

extern int gsNextProg;
extern int prgMan[];
void InitStgsGunAdjust(void) {
}

void MainStgsGunAdjust()
{
    if (gsGuncon2_CheckConnect() || gsGuncon1_CheckPort() > 0)
    {
        LetsGotoOptionScene(gsNextProg);
    }
    else
    {
        prgMan[0] = 3;
    }
}

void EndStgsGunAdjust(void) {
}
