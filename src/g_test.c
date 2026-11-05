#include "common.h"
#include "gunsuv_usa/libgf/gfpack.h"
#include "gunsuv_usa/libgf/gftex.h"
#include "gunsuv_usa/libgf/gfvcache.h"
#include "gunsuv_usa/libgf/gfvalloc.h"
#include "gunsuv_usa/libgf/libgf.h"
#include <string.h>
#include <eekernel.h>
#include "g_plane.h"
#include "mem.h"
#include "g_guncon2/g_guncon2.h"
#include "taiken/taiken.h"
#include "benjamin/g_ik.h"
#include "perfmon.h"
#include "fileio.h"

extern char D_00664870[];
extern int gsExtProgWorkP;
extern int gsExtProgRpFile;
extern int gsExtProgRpFunc;
extern int gsExtProgNo;
extern int gsExtProgNext;
extern int _time_over_cnt;
extern int _time_over_step;
#include <libgraph.h>
#include "g_effect.h"
#include "g_test.h"
extern int _dbgCS_p;
extern int _dbgCS_siz;
extern int _dbgCS_sum0;

extern int gsNextProg;
extern int gsCurProg;
extern int _afterMovieExit;
INCLUDE_RODATA("asm/nonmatchings/g_test", D_00664870);

extern int gsHeapSize;
extern int gsHeapTop;
extern int frame;
extern int gsFrame;
extern Uint32 gs_alloc_info[];
extern Uint32 gs_cache_info[];
extern Uint32 gs_textureDb[];
extern GF_PACKET gsKickPack[];
extern sceGsDBuff gsBackDb;
extern int gsPause;
extern int gsPauseStep;
extern int gsPauseCnt;
extern int gsSoftReset;
extern int _pause_lock;
extern int gsStageNo;
extern int gsPlayDemoFlag;
extern int gsVRMode;
extern int gsResult[];
extern int _g_k_pack_max;
extern int _dbg_chk_max0;
extern int _dbg_chk_max1;
extern int _dbg_chk_cnt0;
extern int _dbg_chk_cnt1;
extern qword* gsStageInit_ST1();
extern qword* gsStageInit_ST2();
extern qword* gsStageInit_ST3();
extern qword* gsStageInit_ST4();
extern qword* gsStageInit_ST5();
extern qword* gsStageInit_ST7();
extern qword* gsStageInit_ST8();
extern qword* gsStageInit_ST9();
void G_TEST_Init()
{
    int i;
    int n;
    sceVu0FVECTOR blur;
    sceVu0FVECTOR now;
    sceVu0FVECTOR fade;

    for (i = 0; i < gsHeapSize; i++)
    {
        ((char*)gsHeapTop)[i] = 0;
    }

    gsFrame = frame;
    pfm_init(1);
    GF_InitGraphicsFramework();
    gplInitPlane();
    GFVram_SetInfoAddr(gs_alloc_info, 0x1000);
    GFVram_AddFreeArea(0x1800, 0x1400, 0);
    GFVram_AddFreeArea(0x1000, 0x800, 0x1B);
    GFCache_SetInfoAddr(gs_cache_info, 0x1000, 0x2C00, 0x1000, 0x400);
    GFVram_SetFrameBufferSize(0x200, 0xE0, 0);
    GFVram_SetZBufferSize(0x200, 0xE0, 0);
    GFVram_SetScreenBufferSize(0x200, 0x1C0, 0);
    GFTex_InitDatabase(gs_textureDb, 0x10000);
    GFTex_FlushVramCache();
    GFTex_FlushVramCache_Preset();
    gsLoading_Init();
    gsLoading_Exec();
    gsLoading_Exec();
    sceGsSyncPath(0, 0);
    sceGsSyncV(0);
    gplInitPlane();
    GFVram_SetInfoAddr(gs_alloc_info, 0x1000);
    GFVram_AddFreeArea(0x1800, 0x1400, 0);
    GFVram_AddFreeArea(0x1000, 0x800, 0x1B);
    GFCache_SetInfoAddr(gs_cache_info, 0x1000, 0x2C00, 0x1000, 0x400);
    GFVram_SetFrameBufferSize(0x200, 0xE0, 0);
    GFVram_SetZBufferSize(0x200, 0xE0, 0);
    GFVram_SetScreenBufferSize(0x200, 0x1C0, 0);
    GFTex_InitDatabase(gs_textureDb, 0x10000);
    GFTex_FlushVramCache();
    GFTex_FlushVramCache_Preset();
    GFPack_InitBuf(&gsKickPack[0], (qword*)((u_int)MEM_MallocAlign(0x80000, 0x40, D_00664870, 0x1E4) | 0x30000000), 0x80000);
    GFPack_InitBuf(&gsKickPack[1], (qword*)((u_int)MEM_MallocAlign(0x80000, 0x40, D_00664870, 0x1E5) | 0x30000000), 0x80000);
    GFPack_InitBuf(&gsObjPack, MEM_MallocAlign(0x340000, 0x40, D_00664870, 0x1E6), 0x340000);
    sceGsSetDefDBuff(&gsBackDb, 0, 0x200, 0xE0, 2, 0x31, 1);
    *(u_long*)&gsBackDb.draw0.test1 = 0x3001;
    *(u_long*)&gsBackDb.draw1.test1 = 0x3001;
    gsGuncon2_Init();
    gsPause = 0;
    gsPauseStep = 0;
    gsPauseCnt = 0;
    gsSoftReset = 0;
    _pause_lock = 0;
    gsExtProg_INIT();
    FIOCache_Init();

    if (gsStageNo >= 0)
    {
        if (gsStageNo < 5)
        {
            n = gsPlayDemoFlag ? 9 : gsStageNo;
            _dbgCS_p = FIOCache_ReadSdp(_stage_pack_list[n].unk0, _stage_pack_list[n].unk4, _stage_pack_list[n].unkC, _stage_pack_list[n].unk10);
        }
        else if (gsStageNo < 9)
        {
            if (gsStageNo >= 6)
            {
                n = gsPlayDemoFlag ? 9 : gsStageNo;
                _dbgCS_p = FIOCache_ReadSdp(_stage_pack_list[n].unk0, _stage_pack_list[n].unk4, _stage_pack_list[n].unkC, _stage_pack_list[n].unk10);
            }
        }
    }

    gsVRMode &= ~2;

    switch (gsStageNo)
    {
    case 0:
        gsObjPack.cur = gsStageInit_ST1(gsObjPack.cur);
        break;
    case 1:
        gsObjPack.cur = gsStageInit_ST2(gsObjPack.cur);
        break;
    case 2:
        gsObjPack.cur = gsStageInit_ST3(gsObjPack.cur);
        break;
    case 3:
        gsObjPack.cur = gsStageInit_ST4(gsObjPack.cur);
        break;
    case 4:
        gsObjPack.cur = gsStageInit_ST5(gsObjPack.cur);
        break;
    case 6:
        gsObjPack.cur = gsStageInit_ST7(gsObjPack.cur);
        break;
    case 7:
        gsObjPack.cur = gsStageInit_ST8(gsObjPack.cur);
        break;
    case 8:
        gsObjPack.cur = gsStageInit_ST9(gsObjPack.cur);
        break;
    }

    if (gsPlayDemoFlag == 0)
    {
        gsTaikenInit_READY_GO();
    }

    FIOCache_Init();
    gsExtProg_RECOV_WORK();
    _afterMovieExit = 0;
    gsResult[0] = gsStageNo;
    memset(blur, 0, 16);
    gsEffectSetBlurNowColor((int)blur);
    gsEffectSetBlurFade(blur, 0, 1);
    memset(now, 0, 16);
    now[3] = 128.0f;
    memset(fade, 0, 16);
    gsEffectSetFadeNowColor((int)now);
    gsEffectSetFade(fade, 0x3C);
    gsIKinit();
    MEM_CheckViolation();
    _g_k_pack_max = 0;
    _dbg_chk_max0 = 0;
    _dbg_chk_max1 = 0;
    _dbg_chk_cnt0 = 30;
    _dbg_chk_cnt1 = 30;
}

INCLUDE_RODATA("asm/nonmatchings/g_test", D_006648A8);

INCLUDE_RODATA("asm/nonmatchings/g_test", D_006648B8);

INCLUDE_ASM("asm/nonmatchings/g_test", G_TEST_Exec);

INCLUDE_ASM("asm/nonmatchings/g_test", G_TEST_End);

void gsExtProg_INIT()
{
    gsExtProgNo = 0;
    gsExtProgNext = 0;
    gsExtProgWorkP = 0;
    gsExtProgRpFile = 0;
    gsExtProgRpFunc = 0;
    _time_over_cnt = 0;
    _time_over_step = 0;
}

void gsExtProg_ENTRY_WORK(int a, int b, int c)
{
    gsExtProgWorkP = a;
    gsExtProgRpFile = b;
    gsExtProgRpFunc = c;
}

void gsExtProg_RECOV_WORK()
{
    if (gsExtProgWorkP == 0)
    {
        gsExtProgWorkP = (int)MEM_MallocAlign(0x200000, 0x40, D_00664870, 0x5CF);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_test", gsExtProg_EXEC);

INCLUDE_ASM("asm/nonmatchings/g_test", gsExtProg_TIME_OVER);

int gsStageExit_AfterMovie()
{
    if (gsNextProg != gsCurProg)
    {
        sceGsSyncPath(0, 0);
        sceGsSyncV(0);
        _afterMovieExit = 1;
        return 1;
    }
    _afterMovieExit = 0;
    return 0;
}

void gsPC_Start(void) {
}

void gsPC_Disp(void) {
}

void gsPC_Stop(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_test", gsLoading_Init);

INCLUDE_ASM("asm/nonmatchings/g_test", gsLoading_Exec);

void gsClearHiddenFrame(int a)
{
    sceGsSyncPath(0, 0);
    sceGsSyncV(0);
    gsEffectSetFadeNowColor(a);
    gsEffectSetFade(a, 1);
}

void _dbgCS_OverWrite()
{
    _dbgCS_sum0 = FIOCache_GetCheckSum(_dbgCS_p, _dbgCS_siz);
}
INCLUDE_RODATA("asm/nonmatchings/g_test", D_00664900);

INCLUDE_RODATA("asm/nonmatchings/g_test", D_00664910);

INCLUDE_RODATA("asm/nonmatchings/g_test", D_00664920);

