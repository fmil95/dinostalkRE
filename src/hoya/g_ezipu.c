#include "common.h"
#include <eestruct.h>
extern int flag;

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuChangeDraw);

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

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", setBITBLTBUF_g_ezipu);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", setTRXPOS_g_ezipu);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", setTRXREG_g_ezipu);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", setTRXDIR_g_ezipu);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuLoadImage);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuSetToIPUtags);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuSetDMAtoIPU);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuSetDMAfromIPU);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuGetFlags);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuLoadData);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsReadEzIpuHeader);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuSet);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuInit);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuMain);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", gsEzIpuEnd);

INCLUDE_ASM("asm/nonmatchings/hoya/g_ezipu", scTag);
