#include "sound/se_rpc.h"

extern int D_0065176C[];
extern int SeTransNow();
extern int D_0065175C[];
extern int D_00651760[];
extern char PortGroup[];
extern int ezSeL();

extern int SeCSLMidiPortSt();
typedef struct { int w[6]; } SeEnt;
extern SeEnt D_0064B56C[];
extern int fp;
extern int sceOpen();
extern int sceLseek();
extern int sceClose();
extern SeEnt D_0064B564[];
extern int u_dat[];
extern int D_0064B364[][4];
extern u_char dat[];
extern int StrmPort[][2];
extern char D_0066CB80[];
int get_SE_MAX() 
{
    return 1000;
}

int get_BGM_MAX() 
{
    return 16;
}

int get_STRM_MAX() 
{
    return 8;
}

int get_BGM_VAB_MAX() 
{
    return 20;
}

int get_SE_VAB_MAX() 
{
    return 12;
}

void SeSpu2AllocInit(int prm0)
{
    int i;
    int* dat;
    VAB_ALC* p;

    VabAlc[0].unk4 = 65536;

    p = &VabAlc[1];

    dat = spu2_alloc_dat[prm0];

    for (i = 0; i < 7; i++, p++)
    {
        p->unk8 = 0;
        
        p->unk0 = 0;
        p->unk4 = p[-1].unk4 + dat[i];
        p->unkC = -1;
    }

    CurSpu2Alloc = prm0;
}

static void SeAllocInit()
{
    int i;

    for (i = 0; i < 2; i++)
    {
        BgmAlc[i].unk0  = 0;
        BgmAlc[i].unk8  = -1;
        BgmAlc[i].unk14 = -1;
        BgmAlc[i].unk18 = -1;
        BgmAlc[i].unk4  = -1;
        BgmAlc[i].unkC  = 0;
        BgmAlc[i].unk10 = 0xFFFFFF;
    }

    for (i = 0; i < 16; i++)
    {
        MeAlc[i].unk0  = 0;
        MeAlc[i].unk4  = -1;
        MeAlc[i].unk10 = 0xFFFF;
    }
}

int SeComNow()
{
    if ((SeStatus.unk40 & 1) > 0)
    {
        return 1;
    }
 
    return 0;
}

int SeIopLoadStatus()
{
    return SeReadNow();
}

void SeSetDiscMode() 
{
    
}

int ezSeInit()
{
    int i, j;
 
retry:
    if (sceSifBindRpc(&SegCd, 74565, 0) < 0)
    {
        while (TRUE)
        {
            asm("nop; nop; nop");
        }
    }
 
    j = -1;
    i = 99999999;
 
    do
    {
        i -= 4;
        
        asm("nop");
    } while (i != j);
 
    if (SegCd.serve == NULL)
    {
        goto retry;
    }
 
    TJobSt.unk8 = 0;
 
    return 1;
}

int SeRpcCom(int prm0, int prm1, int prm2) 
{
    return sceSifCallRpc(&SegCd, prm0, 0, (void*)sbuff_0084be40, prm1, (void*)sbuff_0084be40, prm2, 0, 0);
}

int ezSeL(int prm0, void* prm1, int prm2)
{
    int rsize;
 
    rsize = 64;

    prm2 = ((prm2 - 1) / 16) * 16 + 16;
 
    if (prm0 == 33760)
    {
        rsize = 128;
    }
 
    memcpy((void*)sbuff_0084be40, prm1, prm2);

    SeRpcCom(prm0, prm2, rsize);
 
    return sbuff_0084be40[0];
}

int ezSe(int prm0, int prm1, int prm2)
{
    int rsize;
 
    rsize = 64;
 
    if (prm0 == 33760)
    {
        rsize = 128;
    }
 
    sbuff_0084be40[0] = prm1;
 
    SeRpcCom(prm0, 16, rsize);
 
    return sbuff_0084be40[0];
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTest);

int SeReadNow()
{
    if ((TJobSt.unk8 != 0) || (TJobSt.unk0 != TJobSt.unk4))
    {
        return 1;
    }
 
    return 0;
}

int IOPDevReadNow()
{
    return SeStatus.unk4C == 1;
}

int IOPReadNow()
{
    return ((D_0065175C[0] ^ 0x1) == 0);
}

int SeTransNow()
{
    return ((D_00651760[0] ^ 0x1) == 0);
}

void SeReqQueInc()
{
    TJobSt.unk0++;

    if (TJobSt.unk0 >= 0x40)
    {
        TJobSt.unk0 = 0;
    }
}

void SeReqQueDec()
{
    TJobSt.unk0--;

    if (TJobSt.unk0 < 0)
    {
        TJobSt.unk0 = 0x3F;
    }
}

int SeJobQueInc()
{
    TJobSt.unk4++;

    if (TJobSt.unk4 >= 0x40)
    {
        TJobSt.unk4 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobStart);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobTrans);

int SeTjobTransStatus()
{
    return SeTransNow();
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobRead);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobLoad);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobLoadStatus);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobEnd);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobError);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTransMain);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMain);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeIopStatus);

int SeGetPort(int a)
{
    SeEnt* p = &D_0064B56C[a];

    if (p->w[0] == 0xF000)
    {
        return 0x30;
    }

    return *(u_char*)p;
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeGetVhName);

int SeSoundOff()
{
    return ezSe(0x8460, 0, 1);
}

int SeSePortOff()
{
    return ezSe(0x8420, 0, 1);
}

int SeMidiPortOff()
{
    return ezSe(0x8430, 0, 1);
}

int SeStrmOff()
{
    return ezSe(0x8450, 0, 1);
}

int SeSpuPortOff(int a, int b)
{
    u_dat[0] = a;
    u_dat[1] = b;
    return ezSeL(0x8440, u_dat, 0x40);
}

int SeSetMasterVol(int a)
{
    return ezSe(0x8360, a, 1);
}

int SeSetSeVol(int a)
{
    return ezSe(0x8370, a, 1);
}

int SeSetBgmVol(int a)
{
    return ezSe(0x8380, a, 1);
}

int SeSetStrmVol(int a)
{
    return ezSe(0x8390, a, 1);
}

int SeSetOutType(int a)
{
    return ezSe(0x83a0, a, 1);
}

int SePortInit()
{
    return ezSeL((0 | 0x8530), PortGroup, 0x30);
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSoundAllClose);

void SeInitHot()
{
    SeSpu2AllocInit(0);
    SeAllocInit();
    TJobSt.unk4 = 0;
    TJobSt.unk0 = 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeInit);

void SeSpu2Init(int a)
{
    SeSoundOff();
    SePortInit();
    SeSpu2AllocInit(a);
    SeAllocInit();
}

int SeSetEffect(int a, int b, int c)
{
    return ezSe(0x8220, (c << 16) | (a << 12) | b, 1);
}

int SeSetEffectDepth(int a, int b)
{
    return ezSe(0x8410, (b << 16) | a, 1);
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", Se);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStopSe);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStop);

int SeStopVoice(int a)
{
    return ezSe(0x8070, a, 1);
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeDataOpen);

int SeGetVbBlockSize(char* a)
{
    int size;

    fp = sceOpen(a, 1);
    size = sceLseek(fp, 0, 2);
    sceClose(fp);

    return size;
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeBankOpenTransfer);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabOpenEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabOpenBEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabOpenB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabOpenN);

void SeVabClose(int a)
{
    SeVabCloseB(D_0064B364[a][0]);
}

void SeVabCloseB(int a)
{
    if (VabAlc[a].unk0 != 0)
    {
        VabAlc[a].unk0 = 0;
        VabAlc[a].unkC = -1;
    }
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", Se3D);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeDir);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeDir2);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSetVolume);

int SeSetPitch(int a, u_int b)
{
    if (b < 0x30)
    {
        return ezSe(0x8500, (a << 16) | b, 1);
    }
}

int SeKeyon3D(int a, int b, int c, int d, int e, int f)
{
    int hi = b / 256;
    dat[0] = a;
    dat[1] = b;
    dat[2] = c;
    dat[3] = d;
    dat[4] = e;
    dat[5] = f;
    dat[6] = hi;
    return ezSeL(0x8210, dat, 0x10);
}

int SeKeyonDir(int a, int b, int c, int d, int e, int f)
{
    int hi = b / 256;
    dat[0] = a;
    dat[1] = b;
    dat[2] = c;
    dat[3] = f;
    dat[4] = d;
    dat[5] = e;
    dat[6] = hi;
    return ezSeL(0x8200, dat, 0x10);
}

int SeKeyonDir2(int a, int b, int c, int d, int e, int f)
{
    int hi = b / 256;
    dat[0] = a;
    dat[1] = b;
    dat[2] = c;
    dat[3] = f;
    dat[4] = d;
    dat[5] = e;
    dat[6] = hi;
    return ezSeL(0x83B0, dat, 0x10);
}

int SeKeyon(int a, int b, int c, int d)
{
    int hi = b / 256;
    dat[0] = a;
    dat[1] = b;
    dat[2] = c;
    dat[3] = d;
    dat[4] = hi;
    return ezSeL(0x81B0, dat, 0x10);
}

int SeCSLMidiPlaySt()
{
    return D_0065176C[0];
}

int SeCSLMidiPortSt(int a)
{
    return ((1 << a) & D_0065176C[0]) > 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlayNo);

int SeCSLSetMidi()
{
    return ezSe(0x80F0, 0, 1);
}

int SeCSLMidiVolume(int a, int b)
{
    return ezSe(0x83C0, (a << 16) | b, 1);
}

int SeCSLMidiPlayPort(int a)
{
    return ezSe(0x82C0, a, 1);
}

int SeCSLMidiSetLocation(int a, int b)
{
    ezSe(0x8270, a, 1);

    return ezSe(0x8490, b, 1);
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlayBP);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlayNP);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlayNB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlay);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlay2);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiXFadeB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiXFade);

int SeCSLMidiContinue(int a)
{
    return ezSe(0x8400, a, 1);
}

int SeCSLMidiPause(int a)
{
    int r = SeCSLMidiPortSt(a);

    if (r == 1)
    {
        return ezSe(0x83F0, a, 1);
    }

    return r;
}

int SeCSLMidiStopP(int a)
{
    int r = SeCSLMidiPortSt(a);
    int ret = 0;

    if (r == 1)
    {
        ret = ezSe(0x82D0, a, 1);
        BgmAlc[a].unk0 = r;
    }
    return ret;
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiStop);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankOpenEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankOpenBEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankOpenB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankOpenN);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankClose);

int SeCSLBankCloseB(int a)
{
    if (VabAlc[a].unk0 == 0)
    {
        return 0xEF00;
    }

    VabAlc[a].unk0 = 0;
    VabAlc[a].unkC = -1;

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqOpenEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqOpenBEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqOpenB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqOpenN);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqCloseB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqClose);

int SeStrmRevOn(int a)
{
    return ezSe(0x8480, a, 1);
}

int SeStrmRevOff(int a)
{
    return ezSe(0x8470, a, 1);
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmPlaySt);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmPortSt);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmPlayNo);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmInit);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmOpenWithSetParam);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmOpenTBL);

int SeStrmPlay(int a)
{
    return ezSe(0x52f, a, 1);
}

int SeStrmStop(int a)
{
    return ezSe(0x530, a, 1);
}

int SeStrmQuit()
{
    ezSe(0x8450, 0, 1);
    ezSe(0x8150, 0, 1);
    return ezSe(0x8150, 1, 1);
}

int SeMePlay(int a)
{
    return SeMePlayB(D_0064B564[a].w[0]);
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMePlayB);

int SeMeStop(int a)
{
    return SeMeStopB(D_0064B564[a].w[0]);
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeStopB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeOpenN);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeOpenB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeOpenEE);

int SeMeClose(int a)
{
    return SeMeCloseB(((SeEnt*)0x64B564)[a].w[0]);
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeCloseB);
