#include "common.h"
#include "g_enemy/eneatc00.h"
#include "g_camera.h"
#include "g_enemy/enemain.h"

extern void* memset();
extern float cam_trans_002af8b0[];
INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", enemy_afteratchit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", enemy_hiteffset);

int eneatc00_dummy()
{
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_atcbscchk00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_atcbscchk01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_atcbscchk02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_atcbscchk03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_holdatchitchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_pshitchk);

void eneatc00_trexhowling(char* e)
{
    float v[4];

    memset(v, 0, 16);
    Enemy_MakeV(v, cam_trans_002af8b0, e + 0x270);
    gsCameraEntryDamageEffect(&gsCamera, 0xB, v, 0.0f);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_crntocrnchk);
