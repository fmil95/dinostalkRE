#include "common.h"
#include <eestruct.h>
extern int flag;

extern void gsEzIpuSetLoadImageTagsGeneral();
extern int destMem;
extern int bsSize;
extern int bs;
extern int frame_no;
extern void sceGsResetPath();
extern void sceIpuInit();
void gsEzIpuChangeDraw(int a)
{
    if (a)
    {
        flag |= 4;
    }
    else
    {
        flag &= ~4;
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuInitSpr);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuDraw);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuSetLoadImageTags);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuSetLoadImageTagsGeneral);

void setDMAscTag_g_ezipu(u_int* p, u_int spr, void* addr, u_int irq, u_int id, u_int pce, u_int qwc)
{
    u_long* val = (u_long*)p;

    *val = (u_long)spr << 63 | (u_long)((u_int)addr & 0xFFFFFFF0) << 32 | (u_long)irq << 31 | (u_long)id << 28 | (u_long)pce << 26 | (u_long)qwc << 0;

}

void setGIFtag_g_ezipu(u_int* p, u_long regs, u_int nreg, u_int flg, u_int prim, u_int pre, u_int eop, u_int nloop)
{
    p[0] = eop << 15 | nloop;
    p[1] = pre << (46 - 32) | prim << (47 - 32) | flg << (58 - 32) | nreg << (60 - 32);
    p[2] = regs & 0xFFFFFFFF;
    p[3] = regs >> 32;

}

void setGIFad_g_ezipu(u_int* p, u_int reg, u_long value)
{
    p[0] = value & 0xFFFFFFFF;
    p[1] = value >> 32;
    p[2] = reg;
    p[3] = 0x00;
}

void setBITBLTBUF_g_ezipu(u_int* p, u_int dbp, u_int dbw, u_int dpsm)
{
    u_long val = ((u_long)dpsm << 56) | ((u_long)dbw << 48) | ((u_long)dbp << 32);

    setGIFad_g_ezipu(p, SCE_GS_BITBLTBUF, val);
}

void setTRXPOS_g_ezipu(u_int* p, u_int dir, u_int dsax, u_int dsay)
{
    u_long val = ((u_long)dir << 59) | ((u_long)dsay << 48) | ((u_long)dsax << 32);

    setGIFad_g_ezipu(p, SCE_GS_TRXPOS, val);
}

void setTRXREG_g_ezipu(u_int* p, u_int rrw, u_int rrh)
{
    u_long val = ((u_long)rrh << 32) | ((u_long)rrw << 0);

    setGIFad_g_ezipu(p, SCE_GS_TRXREG, val);
}

void setTRXDIR_g_ezipu(u_int* p, u_int xdir)
{
    setGIFad_g_ezipu(p, SCE_GS_TRXDIR, (u_long)xdir);
}

void gsEzIpuLoadImage(void* p)
{
    *(volatile u_int*)0x1000A030 = (u_int)p & 0x0FFFFFFF;
    *(volatile u_int*)0x1000A020 = 0;
    *(volatile u_int*)0x1000A000 = 0x105;
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuSetToIPUtags);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuSetDMAtoIPU);

void gsEzIpuSetDMAfromIPU(void* p, int n)
{
    *(volatile u_int*)0x1000B010 = (u_int)p & 0x0FFFFFFF;
    *(volatile u_int*)0x1000B020 = n << 6;
    *(volatile u_int*)0x1000B000 = 0x100;
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuGetFlags);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuLoadData);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsReadEzIpuHeader);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuSet);

void gsEzIpuInit(int a)
{
    destMem = a;
    bsSize = -1;
    flag = 1;
    bs = 0;
    frame_no = 0;
    sceGsResetPath();
    sceIpuInit();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuMain);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuEnd);

void scTag(u_long* q, void* addr, u_int id, u_int qwc)
{
    *q = (u_long)(u_int)addr << 32 | (u_long)id << 28 | (u_long)qwc << 0;
}
