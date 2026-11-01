// File written by stdump v2.1 on 2024-10-03
// 
// Input file:
//   SLUS_204.85
// Toolchain version(s):
//   unknown
// Built-in types:
//   char                     8-bit integer
//   complex double           128-bit floating point
//   complex float            64-bit floating point
//   complex long double      128-bit floating point
//   double                   64-bit floating point
//   float                    32-bit floating point
//   int                      32-bit signed integer
//   long double              64-bit floating point
//   long int                 64-bit signed integer
//   long long int            64-bit signed integer
//   long long unsigned int   64-bit unsigned integer
//   long unsigned int        64-bit unsigned integer
//   long128                  128-bit integer
//   short int                16-bit signed integer
//   short unsigned int       16-bit unsigned integer
//   signed char              8-bit signed integer
//   u_long128                128-bit integer
//   unsigned char            8-bit unsigned integer
//   unsigned int             32-bit unsigned integer

typedef struct { // 0x8
	/* 0x0 */ int real;
	/* 0x4 */ int imag;
} complex int;

typedef void *__builtin_va_list;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef unsigned int size_t;
typedef int wchar_t;
typedef long unsigned int clock_t;
typedef long int time_t;

struct tm { // 0x24
	/* 0x00 */ int tm_sec;
	/* 0x04 */ int tm_min;
	/* 0x08 */ int tm_hour;
	/* 0x0c */ int tm_mday;
	/* 0x10 */ int tm_mon;
	/* 0x14 */ int tm_year;
	/* 0x18 */ int tm_wday;
	/* 0x1c */ int tm_yday;
	/* 0x20 */ int tm_isdst;
};

// warning: multiple differing types with the same name (type name not equal)
typedef __uint32_t __ULong;

struct _glue { // 0xc
	/* 0x0 */ _glue *_next;
	/* 0x4 */ int _niobs;
	/* 0x8 */ __sFILE *_iobs;
};

typedef struct { // 0x18
	/* 0x00 */ _Bigint *_next;
	/* 0x04 */ int _k;
	/* 0x08 */ int _maxwds;
	/* 0x0c */ int _sign;
	/* 0x10 */ int _wds;
	/* 0x14 */ __ULong _x[1];
} _Bigint;

struct _atexit { // 0x88
	/* 0x00 */ _atexit *_next;
	/* 0x04 */ int _ind;
	/* 0x08 */ void (*_fns[32])(/* parameters unknown */);
};

struct __sbuf { // 0x8
	/* 0x0 */ unsigned char *_base;
	/* 0x4 */ int _size;
};

typedef long int _fpos_t;

struct __sFILE { // 0x58
	/* 0x00 */ unsigned char *_p;
	/* 0x04 */ int _r;
	/* 0x08 */ int _w;
	/* 0x0c */ short int _flags;
	/* 0x0e */ short int _file;
	/* 0x10 */ __sbuf _bf;
	/* 0x18 */ int _lbfsize;
	/* 0x1c */ void *_cookie;
	/* 0x20 */ int (*_read)(/* parameters unknown */);
	/* 0x24 */ int (*_write)(/* parameters unknown */);
	/* 0x28 */ _fpos_t (*_seek)(/* parameters unknown */);
	/* 0x2c */ int (*_close)(/* parameters unknown */);
	/* 0x30 */ __sbuf _ub;
	/* 0x38 */ unsigned char *_up;
	/* 0x3c */ int _ur;
	/* 0x40 */ unsigned char _ubuf[3];
	/* 0x43 */ unsigned char _nbuf[1];
	/* 0x44 */ __sbuf _lb;
	/* 0x4c */ int _blksize;
	/* 0x50 */ int _offset;
	/* 0x54 */ _reent *_data;
};

struct _reent { // 0x2f0
	/* 0x000 */ int _errno;
	/* 0x004 */ __sFILE *_stdin;
	/* 0x008 */ __sFILE *_stdout;
	/* 0x00c */ __sFILE *_stderr;
	/* 0x010 */ int _inc;
	/* 0x014 */ char _emergency[25];
	/* 0x030 */ int _current_category;
	/* 0x034 */ char *_current_locale;
	/* 0x038 */ int __sdidinit;
	/* 0x03c */ void (*__cleanup)(/* parameters unknown */);
	/* 0x040 */ _Bigint *_result;
	/* 0x044 */ int _result_k;
	/* 0x048 */ _Bigint *_p5s;
	/* 0x04c */ _Bigint **_freelist;
	/* 0x050 */ int _cvtlen;
	/* 0x054 */ char *_cvtbuf;
	/* 0x058 */ union { // 0xf0
		/* 0x058 */ struct { // 0x58
			/* 0x058 */ unsigned int _unused_rand;
			/* 0x05c */ char *_strtok_last;
			/* 0x060 */ char _asctime_buf[26];
			/* 0x07c */ tm _localtime_buf;
			/* 0x0a0 */ int _gamma_signgam;
			/* 0x0a8 */ long long unsigned int _rand_next;
		} _reent;
		/* 0x058 */ struct { // 0xf0
			/* 0x058 */ unsigned char *_nextf[30];
			/* 0x0d0 */ unsigned int _nmalloc[30];
		} _unused;
	} _new;
	/* 0x148 */ _atexit *_atexit;
	/* 0x14c */ _atexit _atexit0;
	/* 0x1d4 */ void (**_sig_func)(/* parameters unknown */);
	/* 0x1d8 */ _glue __sglue;
	/* 0x1e4 */ __sFILE __sf[3];
};

typedef struct { // 0x8
	/* 0x0 */ int quot;
	/* 0x4 */ int rem;
} div_t;

typedef struct { // 0x10
	/* 0x0 */ long int quot;
	/* 0x8 */ long int rem;
} ldiv_t;

typedef void *__gnuc_va_list;
typedef _fpos_t fpos_t;
typedef __sFILE FILE;
typedef unsigned char u_char;
typedef short unsigned int u_short;
typedef unsigned int u_int;
typedef long unsigned int u_long;

struct ThreadParam { // 0x30
	/* 0x00 */ int status;
	/* 0x04 */ void *entry;
	/* 0x08 */ void *stack;
	/* 0x0c */ int stackSize;
	/* 0x10 */ void *gpReg;
	/* 0x14 */ int initPriority;
	/* 0x18 */ int currentPriority;
	/* 0x1c */ u_int attr;
	/* 0x20 */ u_int option;
	/* 0x24 */ int waitType;
	/* 0x28 */ int waitId;
	/* 0x2c */ int wakeupCount;
};

struct SemaParam { // 0x18
	/* 0x00 */ int currentCount;
	/* 0x04 */ int maxCount;
	/* 0x08 */ int initCount;
	/* 0x0c */ int numWaitThreads;
	/* 0x10 */ u_int attr;
	/* 0x14 */ u_int option;
};

typedef struct { // 0x240
	/* 0x000 */ u_long128 vf[32];
	/* 0x200 */ u_int status;
	/* 0x204 */ u_int mac;
	/* 0x208 */ u_int clipping;
	/* 0x20c */ u_int r;
	/* 0x210 */ u_int i;
	/* 0x214 */ u_int q;
	/* 0x218 */ u_short vi[16];
} sceDevVu0Cnd;

typedef struct { // 0x240
	/* 0x000 */ u_long128 vf[32];
	/* 0x200 */ u_int status;
	/* 0x204 */ u_int mac;
	/* 0x208 */ u_int clipping;
	/* 0x20c */ u_int r;
	/* 0x210 */ u_int i;
	/* 0x214 */ u_int q;
	/* 0x218 */ u_int p;
	/* 0x21c */ u_short vi[16];
} sceDevVu1Cnd;

typedef struct { // 0x30
	/* 0x00 */ u_long128 tag;
	/* 0x10 */ u_int stat;
	/* 0x14 */ u_int count;
	/* 0x18 */ u_int p3count;
	/* 0x1c */ u_int p3tag;
	/* 0x20 */ u_int pad;
} sceDevGifCnd;

typedef struct { // 0x3c
	/* 0x00 */ u_int row[4];
	/* 0x10 */ u_int col[4];
	/* 0x20 */ u_int mask;
	/* 0x24 */ u_int code;
	/* 0x28 */ u_int stat;
	/* 0x2c */ u_short itop;
	/* 0x2e */ u_short itops;
	/* 0x30 */ u_short mark;
	/* 0x32 */ u_short num;
	/* 0x34 */ u_char error;
	/* 0x35 */ u_char cl;
	/* 0x36 */ u_char wl;
	/* 0x37 */ u_char cmod;
	/* 0x38 */ u_char pad;
} sceDevVif0Cnd;

typedef struct { // 0x44
	/* 0x00 */ u_int row[4];
	/* 0x10 */ u_int col[4];
	/* 0x20 */ u_int mask;
	/* 0x24 */ u_int code;
	/* 0x28 */ u_int stat;
	/* 0x2c */ u_short itop;
	/* 0x2e */ u_short itops;
	/* 0x30 */ u_short base;
	/* 0x32 */ u_short offset;
	/* 0x34 */ u_short top;
	/* 0x36 */ u_short tops;
	/* 0x38 */ u_short mark;
	/* 0x3a */ u_short num;
	/* 0x3c */ u_char error;
	/* 0x3d */ u_char cl;
	/* 0x3e */ u_char wl;
	/* 0x3f */ u_char cmod;
	/* 0x40 */ u_char pad;
} sceDevVif1Cnd;

typedef struct { // 0x10
	/* 0x0:0 */ long unsigned int NLOOP : 15;
	/* 0x1:7 */ long unsigned int EOP : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int id : 14;
	/* 0x5:6 */ long unsigned int PRE : 1;
	/* 0x5:7 */ long unsigned int PRIM : 11;
	/* 0x7:2 */ long unsigned int FLG : 2;
	/* 0x7:4 */ long unsigned int NREG : 4;
	/* 0x8:0 */ long unsigned int REGS0 : 4;
	/* 0x8:4 */ long unsigned int REGS1 : 4;
	/* 0x9:0 */ long unsigned int REGS2 : 4;
	/* 0x9:4 */ long unsigned int REGS3 : 4;
	/* 0xa:0 */ long unsigned int REGS4 : 4;
	/* 0xa:4 */ long unsigned int REGS5 : 4;
	/* 0xb:0 */ long unsigned int REGS6 : 4;
	/* 0xb:4 */ long unsigned int REGS7 : 4;
	/* 0xc:0 */ long unsigned int REGS8 : 4;
	/* 0xc:4 */ long unsigned int REGS9 : 4;
	/* 0xd:0 */ long unsigned int REGS10 : 4;
	/* 0xd:4 */ long unsigned int REGS11 : 4;
	/* 0xe:0 */ long unsigned int REGS12 : 4;
	/* 0xe:4 */ long unsigned int REGS13 : 4;
	/* 0xf:0 */ long unsigned int REGS14 : 4;
	/* 0xf:4 */ long unsigned int REGS15 : 4;
} sceGifTag;

struct _sceGifPackRgbaq { // 0x10
	/* 0x0 */ u_int R;
	/* 0x4 */ u_int G;
	/* 0x8 */ u_int B;
	/* 0xc */ u_int A;
};

typedef _sceGifPackRgbaq sceGifPackRgbaq;

struct _sceGifPackAd { // 0x10
	/* 0x0 */ u_long DATA;
	/* 0x8 */ u_long ADDR;
};

typedef _sceGifPackAd sceGifPackAd;

struct _sceGifPackSt { // 0x10
	/* 0x0 */ float S;
	/* 0x4 */ float T;
	/* 0x8 */ float Q;
	/* 0xc */ u_int pad96;
};

typedef _sceGifPackSt sceGifPackSt;

struct _sceGifPackUv { // 0x10
	/* 0x0 */ int U;
	/* 0x4 */ int V;
	/* 0x8 */ long int pad64;
};

typedef _sceGifPackUv sceGifPackUv;

struct _sceGifPackXyzf { // 0x10
	/* 0x0 */ int X;
	/* 0x4 */ int Y;
	/* 0x8 */ u_int Z;
	/* 0xc:0 */ u_int F : 12;
	/* 0xd:4 */ u_int pad108 : 3;
	/* 0xd:7 */ u_int ADC : 1;
	/* 0xe:0 */ u_int pad112 : 16;
};

typedef _sceGifPackXyzf sceGifPackXyzf;

struct _sceGifPackXyz { // 0x10
	/* 0x0 */ int X;
	/* 0x4 */ int Y;
	/* 0x8 */ u_int Z;
	/* 0xc:0 */ u_int pad96 : 15;
	/* 0xd:7 */ u_int ADC : 1;
	/* 0xe:0 */ u_int pad112 : 16;
};

typedef _sceGifPackXyz sceGifPackXyz;

struct _sceGifPackFog { // 0x10
	/* 0x0 */ u_int pad[3];
	/* 0xc */ u_int F;
};

typedef _sceGifPackFog sceGifPackFog;

struct _sceGifPackNop { // 0x10
	/* 0x0 */ u_long pad[2];
};

typedef _sceGifPackNop sceGifPackNop;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int A : 2;
	/* 0x0:2 */ long unsigned int B : 2;
	/* 0x0:4 */ long unsigned int C : 2;
	/* 0x0:6 */ long unsigned int D : 2;
	/* 0x1:0 */ long unsigned int pad8 : 24;
	/* 0x4:0 */ long unsigned int FIX : 8;
	/* 0x5:0 */ long unsigned int pad40 : 24;
} sceGsAlpha;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SBP : 14;
	/* 0x1:6 */ long unsigned int pad14 : 2;
	/* 0x2:0 */ long unsigned int SBW : 6;
	/* 0x2:6 */ long unsigned int pad22 : 2;
	/* 0x3:0 */ long unsigned int SPSM : 6;
	/* 0x3:6 */ long unsigned int pad30 : 2;
	/* 0x4:0 */ long unsigned int DBP : 14;
	/* 0x5:6 */ long unsigned int pad46 : 2;
	/* 0x6:0 */ long unsigned int DBW : 6;
	/* 0x6:6 */ long unsigned int pad54 : 2;
	/* 0x7:0 */ long unsigned int DPSM : 6;
	/* 0x7:6 */ long unsigned int pad62 : 2;
} sceGsBitbltbuf;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int WMS : 2;
	/* 0x0:2 */ long unsigned int WMT : 2;
	/* 0x0:4 */ long unsigned int MINU : 10;
	/* 0x1:6 */ long unsigned int MAXU : 10;
	/* 0x3:0 */ long unsigned int MINV : 10;
	/* 0x4:2 */ long unsigned int MAXV : 10;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsClamp;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int CLAMP : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsColclamp;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int DIMX00 : 3;
	/* 0x0:3 */ long unsigned int pad00 : 1;
	/* 0x0:4 */ long unsigned int DIMX01 : 3;
	/* 0x0:7 */ long unsigned int pad01 : 1;
	/* 0x1:0 */ long unsigned int DIMX02 : 3;
	/* 0x1:3 */ long unsigned int pad02 : 1;
	/* 0x1:4 */ long unsigned int DIMX03 : 3;
	/* 0x1:7 */ long unsigned int pad03 : 1;
	/* 0x2:0 */ long unsigned int DIMX10 : 3;
	/* 0x2:3 */ long unsigned int pad10 : 1;
	/* 0x2:4 */ long unsigned int DIMX11 : 3;
	/* 0x2:7 */ long unsigned int pad11 : 1;
	/* 0x3:0 */ long unsigned int DIMX12 : 3;
	/* 0x3:3 */ long unsigned int pad12 : 1;
	/* 0x3:4 */ long unsigned int DIMX13 : 3;
	/* 0x3:7 */ long unsigned int pad13 : 1;
	/* 0x4:0 */ long unsigned int DIMX20 : 3;
	/* 0x4:3 */ long unsigned int pad20 : 1;
	/* 0x4:4 */ long unsigned int DIMX21 : 3;
	/* 0x4:7 */ long unsigned int pad21 : 1;
	/* 0x5:0 */ long unsigned int DIMX22 : 3;
	/* 0x5:3 */ long unsigned int pad22 : 1;
	/* 0x5:4 */ long unsigned int DIMX23 : 3;
	/* 0x5:7 */ long unsigned int pad23 : 1;
	/* 0x6:0 */ long unsigned int DIMX30 : 3;
	/* 0x6:3 */ long unsigned int pad30 : 1;
	/* 0x6:4 */ long unsigned int DIMX31 : 3;
	/* 0x6:7 */ long unsigned int pad31 : 1;
	/* 0x7:0 */ long unsigned int DIMX32 : 3;
	/* 0x7:3 */ long unsigned int pad32 : 1;
	/* 0x7:4 */ long unsigned int DIMX33 : 3;
	/* 0x7:7 */ long unsigned int pad33 : 1;
} sceGsDimx;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int DTHE : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsDthe;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FBA : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsFba;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int pad00;
} sceGsFinish;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 56;
	/* 0x7:0 */ long unsigned int F : 8;
} sceGsFog;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FCR : 8;
	/* 0x1:0 */ long unsigned int FCG : 8;
	/* 0x2:0 */ long unsigned int FCB : 8;
	/* 0x3:0 */ long unsigned int pad24 : 40;
} sceGsFogcol;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FBP : 9;
	/* 0x1:1 */ long unsigned int pad09 : 7;
	/* 0x2:0 */ long unsigned int FBW : 6;
	/* 0x2:6 */ long unsigned int pad22 : 2;
	/* 0x3:0 */ long unsigned int PSM : 6;
	/* 0x3:6 */ long unsigned int pad30 : 2;
	/* 0x4:0 */ long unsigned int FBMSK : 32;
} sceGsFrame;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int WDATA;
} sceGsHwreg;

typedef struct { // 0x8
	/* 0x0 */ u_int ID;
	/* 0x4 */ u_int IDMSK;
} sceGsLabel;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP1 : 14;
	/* 0x1:6 */ long unsigned int TBW1 : 6;
	/* 0x2:4 */ long unsigned int TBP2 : 14;
	/* 0x4:2 */ long unsigned int TBW2 : 6;
	/* 0x5:0 */ long unsigned int TBP3 : 14;
	/* 0x6:6 */ long unsigned int TBW3 : 6;
	/* 0x7:4 */ long unsigned int pad60 : 4;
} sceGsMiptbp1;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP4 : 14;
	/* 0x1:6 */ long unsigned int TBW4 : 6;
	/* 0x2:4 */ long unsigned int TBP5 : 14;
	/* 0x4:2 */ long unsigned int TBW5 : 6;
	/* 0x5:0 */ long unsigned int TBP6 : 14;
	/* 0x6:6 */ long unsigned int TBW6 : 6;
	/* 0x7:4 */ long unsigned int pad60 : 4;
} sceGsMiptbp2;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int PABE : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsPabe;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int PRIM : 3;
	/* 0x0:3 */ long unsigned int IIP : 1;
	/* 0x0:4 */ long unsigned int TME : 1;
	/* 0x0:5 */ long unsigned int FGE : 1;
	/* 0x0:6 */ long unsigned int ABE : 1;
	/* 0x0:7 */ long unsigned int AA1 : 1;
	/* 0x1:0 */ long unsigned int FST : 1;
	/* 0x1:1 */ long unsigned int CTXT : 1;
	/* 0x1:2 */ long unsigned int FIX : 1;
	/* 0x1:3 */ long unsigned int pad11 : 53;
} sceGsPrim;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 3;
	/* 0x0:3 */ long unsigned int IIP : 1;
	/* 0x0:4 */ long unsigned int TME : 1;
	/* 0x0:5 */ long unsigned int FGE : 1;
	/* 0x0:6 */ long unsigned int ABE : 1;
	/* 0x0:7 */ long unsigned int AA1 : 1;
	/* 0x1:0 */ long unsigned int FST : 1;
	/* 0x1:1 */ long unsigned int CTXT : 1;
	/* 0x1:2 */ long unsigned int FIX : 1;
	/* 0x1:3 */ long unsigned int pad11 : 53;
} sceGsPrmode;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int AC : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsPrmodecont;

typedef struct { // 0x8
	/* 0x0:0 */ u_int R : 8;
	/* 0x1:0 */ u_int G : 8;
	/* 0x2:0 */ u_int B : 8;
	/* 0x3:0 */ u_int A : 8;
	/* 0x4 */ float Q;
} sceGsRgbaq;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int MSK : 2;
	/* 0x0:2 */ long unsigned int pad02 : 62;
} sceGsScanmsk;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SCAX0 : 11;
	/* 0x1:3 */ long unsigned int pad11 : 5;
	/* 0x2:0 */ long unsigned int SCAX1 : 11;
	/* 0x3:3 */ long unsigned int pad27 : 5;
	/* 0x4:0 */ long unsigned int SCAY0 : 11;
	/* 0x5:3 */ long unsigned int pad43 : 5;
	/* 0x6:0 */ long unsigned int SCAY1 : 11;
	/* 0x7:3 */ long unsigned int pad59 : 5;
} sceGsScissor;

typedef struct { // 0x8
	/* 0x0 */ u_int ID;
	/* 0x4 */ u_int IDMSK;
} sceGsSignal;

typedef struct { // 0x8
	/* 0x0 */ float S;
	/* 0x4 */ float T;
} sceGsSt;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int ATE : 1;
	/* 0x0:1 */ long unsigned int ATST : 3;
	/* 0x0:4 */ long unsigned int AREF : 8;
	/* 0x1:4 */ long unsigned int AFAIL : 2;
	/* 0x1:6 */ long unsigned int DATE : 1;
	/* 0x1:7 */ long unsigned int DATM : 1;
	/* 0x2:0 */ long unsigned int ZTE : 1;
	/* 0x2:1 */ long unsigned int ZTST : 2;
	/* 0x2:3 */ long unsigned int pad19 : 45;
} sceGsTest;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP0 : 14;
	/* 0x1:6 */ long unsigned int TBW : 6;
	/* 0x2:4 */ long unsigned int PSM : 6;
	/* 0x3:2 */ long unsigned int TW : 4;
	/* 0x3:6 */ long unsigned int TH : 4;
	/* 0x4:2 */ long unsigned int TCC : 1;
	/* 0x4:3 */ long unsigned int TFX : 2;
	/* 0x4:5 */ long unsigned int CBP : 14;
	/* 0x6:3 */ long unsigned int CPSM : 4;
	/* 0x6:7 */ long unsigned int CSM : 1;
	/* 0x7:0 */ long unsigned int CSA : 5;
	/* 0x7:5 */ long unsigned int CLD : 3;
} sceGsTex0;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int LCM : 1;
	/* 0x0:1 */ long unsigned int pad01 : 1;
	/* 0x0:2 */ long unsigned int MXL : 3;
	/* 0x0:5 */ long unsigned int MMAG : 1;
	/* 0x0:6 */ long unsigned int MMIN : 3;
	/* 0x1:1 */ long unsigned int MTBA : 1;
	/* 0x1:2 */ long unsigned int pad10 : 9;
	/* 0x2:3 */ long unsigned int L : 2;
	/* 0x2:5 */ long unsigned int pad21 : 11;
	/* 0x4:0 */ long unsigned int K : 12;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsTex1;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 20;
	/* 0x2:4 */ long unsigned int PSM : 6;
	/* 0x3:2 */ long unsigned int pad26 : 11;
	/* 0x4:5 */ long unsigned int CBP : 14;
	/* 0x6:3 */ long unsigned int CPSM : 4;
	/* 0x6:7 */ long unsigned int CSM : 1;
	/* 0x7:0 */ long unsigned int CSA : 5;
	/* 0x7:5 */ long unsigned int CLD : 3;
} sceGsTex2;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TA0 : 8;
	/* 0x1:0 */ long unsigned int pad08 : 7;
	/* 0x1:7 */ long unsigned int AEM : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int TA1 : 8;
	/* 0x5:0 */ long unsigned int pad40 : 24;
} sceGsTexa;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int CBW : 6;
	/* 0x0:6 */ long unsigned int COU : 6;
	/* 0x1:4 */ long unsigned int COV : 10;
	/* 0x2:6 */ long unsigned int pad22 : 42;
} sceGsTexclut;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int pad00;
} sceGsTexflush;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int XDR : 2;
	/* 0x0:2 */ long unsigned int pad02 : 62;
} sceGsTrxdir;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SSAX : 11;
	/* 0x1:3 */ long unsigned int pad11 : 5;
	/* 0x2:0 */ long unsigned int SSAY : 11;
	/* 0x3:3 */ long unsigned int pad27 : 5;
	/* 0x4:0 */ long unsigned int DSAX : 11;
	/* 0x5:3 */ long unsigned int pad43 : 5;
	/* 0x6:0 */ long unsigned int DSAY : 11;
	/* 0x7:3 */ long unsigned int DIR : 2;
	/* 0x7:5 */ long unsigned int pad61 : 3;
} sceGsTrxpos;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int RRW : 12;
	/* 0x1:4 */ long unsigned int pad12 : 20;
	/* 0x4:0 */ long unsigned int RRH : 12;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsTrxreg;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int U : 14;
	/* 0x1:6 */ long unsigned int pad14 : 2;
	/* 0x2:0 */ long unsigned int V : 14;
	/* 0x3:6 */ long unsigned int pad30 : 34;
} sceGsUv;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int OFX : 16;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int OFY : 16;
	/* 0x6:0 */ long unsigned int pad48 : 16;
} sceGsXyoffset;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int X : 16;
	/* 0x2:0 */ long unsigned int Y : 16;
	/* 0x4:0 */ long unsigned int Z : 32;
} sceGsXyz;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int X : 16;
	/* 0x2:0 */ long unsigned int Y : 16;
	/* 0x4:0 */ long unsigned int Z : 24;
	/* 0x7:0 */ long unsigned int F : 8;
} sceGsXyzf;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int ZBP : 9;
	/* 0x1:1 */ long unsigned int pad09 : 15;
	/* 0x3:0 */ long unsigned int PSM : 4;
	/* 0x3:4 */ long unsigned int pad28 : 4;
	/* 0x4:0 */ long unsigned int ZMSK : 1;
	/* 0x4:1 */ long unsigned int pad33 : 31;
} sceGsZbuf;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int COUNT : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_COUNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CLKS : 2;
	/* 0x0:2 */ unsigned int GATE : 1;
	/* 0x0:3 */ unsigned int GATS : 1;
	/* 0x0:4 */ unsigned int GATM : 2;
	/* 0x0:6 */ unsigned int ZRET : 1;
	/* 0x0:7 */ unsigned int CUE : 1;
	/* 0x1:0 */ unsigned int CMPE : 1;
	/* 0x1:1 */ unsigned int OVFE : 1;
	/* 0x1:2 */ unsigned int EQUF : 1;
	/* 0x1:3 */ unsigned int OVFF : 1;
	/* 0x1:4 */ unsigned int p0 : 20;
} tT_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int COMP : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_COMP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int HOLD : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_HOLD;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int OPTION : 28;
	/* 0x3:4 */ unsigned int CODE : 4;
} tIPU_CMD_write;

typedef struct { // 0x8
	/* 0x0 */ unsigned int DATA;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
} tIPU_CMD_read;

typedef struct { // 0x8
	/* 0x0 */ unsigned int BSTOP;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
} tIPU_TOP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int IFC : 4;
	/* 0x0:4 */ unsigned int OFC : 4;
	/* 0x1:0 */ unsigned int CBP : 6;
	/* 0x1:6 */ unsigned int ECD : 1;
	/* 0x1:7 */ unsigned int SCD : 1;
	/* 0x2:0 */ unsigned int IDP : 2;
	/* 0x2:2 */ unsigned int p0 : 2;
	/* 0x2:4 */ unsigned int AS : 1;
	/* 0x2:5 */ unsigned int IVF : 1;
	/* 0x2:6 */ unsigned int QST : 1;
	/* 0x2:7 */ unsigned int MP1 : 1;
	/* 0x3:0 */ unsigned int PCT : 3;
	/* 0x3:3 */ unsigned int p1 : 3;
	/* 0x3:6 */ unsigned int RST : 1;
	/* 0x3:7 */ unsigned int BUSY : 1;
} tIPU_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int BP : 7;
	/* 0x0:7 */ unsigned int p0 : 1;
	/* 0x1:0 */ unsigned int IFC : 4;
	/* 0x1:4 */ unsigned int p1 : 4;
	/* 0x2:0 */ unsigned int FP : 2;
	/* 0x2:2 */ unsigned int p2 : 14;
} tIPU_BP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int p0 : 2;
	/* 0x0:3 */ unsigned int PSE : 1;
	/* 0x0:4 */ unsigned int p1 : 28;
} tGIF_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int M3R : 1;
	/* 0x0:1 */ unsigned int p0 : 1;
	/* 0x0:2 */ unsigned int IMT : 1;
	/* 0x0:3 */ unsigned int p1 : 29;
} tGIF_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int M3R : 1;
	/* 0x0:1 */ unsigned int M3P : 1;
	/* 0x0:2 */ unsigned int IMT : 1;
	/* 0x0:3 */ unsigned int PSE : 1;
	/* 0x0:4 */ unsigned int p0 : 1;
	/* 0x0:5 */ unsigned int IP3 : 1;
	/* 0x0:6 */ unsigned int P3Q : 1;
	/* 0x0:7 */ unsigned int P2Q : 1;
	/* 0x1:0 */ unsigned int P1Q : 1;
	/* 0x1:1 */ unsigned int OPH : 1;
	/* 0x1:2 */ unsigned int APATH : 2;
	/* 0x1:4 */ unsigned int DIR : 1;
	/* 0x1:5 */ unsigned int p1 : 11;
	/* 0x3:0 */ unsigned int FQC : 5;
	/* 0x3:5 */ unsigned int p2 : 3;
} tGIF_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int NLOOP : 15;
	/* 0x1:7 */ unsigned int EOP : 1;
	/* 0x2:0 */ unsigned int tag : 16;
} tGIF_TAG0;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int tag : 14;
	/* 0x1:6 */ unsigned int PRE : 1;
	/* 0x1:7 */ unsigned int PRIM : 11;
	/* 0x3:2 */ unsigned int FLG : 2;
	/* 0x3:4 */ unsigned int NREG : 4;
} tGIF_TAG1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int tag;
} tGIF_TAG2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int tag;
} tGIF_TAG3;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int LOOPCNT : 15;
	/* 0x1:7 */ unsigned int p0 : 1;
	/* 0x2:0 */ unsigned int REGCNT : 4;
	/* 0x2:4 */ unsigned int VUADDR : 10;
	/* 0x3:6 */ unsigned int p1 : 2;
} tGIF_CNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int P3CNT : 15;
	/* 0x1:7 */ unsigned int p0 : 17;
} tGIF_P3CNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int LOOPCNT : 15;
	/* 0x1:7 */ unsigned int EOP : 1;
	/* 0x2:0 */ unsigned int p0 : 16;
} tGIF_P3TAG;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int p0 : 3;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int p1 : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p2 : 10;
	/* 0x3:0 */ unsigned int FQC : 4;
	/* 0x3:4 */ unsigned int p3 : 4;
} tVIF0_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int FBK : 1;
	/* 0x0:2 */ unsigned int STP : 1;
	/* 0x0:3 */ unsigned int STC : 1;
	/* 0x0:4 */ unsigned int p0 : 28;
} tVIF0_FBRST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MII : 1;
	/* 0x0:1 */ unsigned int ME0 : 1;
	/* 0x0:2 */ unsigned int ME1 : 1;
	/* 0x0:3 */ unsigned int p0 : 29;
} tVIF0_ERR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MARK : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tVIF_MARK;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CL : 8;
	/* 0x1:0 */ unsigned int WL : 8;
	/* 0x2:0 */ unsigned int p0 : 16;
} tVIF_CYCLE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MOD : 2;
	/* 0x0:2 */ unsigned int p0 : 30;
} tVIF_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int num : 8;
	/* 0x1:0 */ unsigned int p0 : 24;
} tVIF0_NUM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int m0 : 2;
	/* 0x0:2 */ unsigned int m1 : 2;
	/* 0x0:4 */ unsigned int m2 : 2;
	/* 0x0:6 */ unsigned int m3 : 2;
	/* 0x1:0 */ unsigned int m4 : 2;
	/* 0x1:2 */ unsigned int m5 : 2;
	/* 0x1:4 */ unsigned int m6 : 2;
	/* 0x1:6 */ unsigned int m7 : 2;
	/* 0x2:0 */ unsigned int m8 : 2;
	/* 0x2:2 */ unsigned int m9 : 2;
	/* 0x2:4 */ unsigned int m10 : 2;
	/* 0x2:6 */ unsigned int m11 : 2;
	/* 0x3:0 */ unsigned int m12 : 2;
	/* 0x3:2 */ unsigned int m13 : 2;
	/* 0x3:4 */ unsigned int m14 : 2;
	/* 0x3:6 */ unsigned int m15 : 2;
} tVIF_MASK;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int immediate : 16;
	/* 0x2:0 */ unsigned int num : 8;
	/* 0x3:0 */ unsigned int CMD : 8;
} tVIF_CODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ITOPS : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF_ITOPS;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ITOP : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF_ITOP;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R0;
} tVIF_R0;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R1;
} tVIF_R1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R2;
} tVIF_R2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R3;
} tVIF_R3;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C0;
} tVIF_C0;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C1;
} tVIF_C1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C2;
} tVIF_C2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C3;
} tVIF_C3;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int VGW : 1;
	/* 0x0:4 */ unsigned int p0 : 2;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int DBF : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p1 : 9;
	/* 0x2:7 */ unsigned int FDR : 1;
	/* 0x3:0 */ unsigned int FQC : 5;
	/* 0x3:5 */ unsigned int p2 : 3;
} tVIF1_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int FBK : 1;
	/* 0x0:2 */ unsigned int STP : 1;
	/* 0x0:3 */ unsigned int STC : 1;
	/* 0x0:4 */ unsigned int p0 : 28;
} tVIF1_FBRST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MII : 1;
	/* 0x0:1 */ unsigned int ME0 : 1;
	/* 0x0:2 */ unsigned int ME1 : 1;
	/* 0x0:3 */ unsigned int p0 : 29;
} tVIF1_ERR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int num : 8;
	/* 0x1:0 */ unsigned int p0 : 24;
} tVIF1_NUM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int BASE : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_BASE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int OFFSET : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_OFST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int TOPS : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_TOPS;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int TOP : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_TOP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DIR : 1;
	/* 0x0:1 */ unsigned int p0 : 1;
	/* 0x0:2 */ unsigned int MOD : 2;
	/* 0x0:4 */ unsigned int ASP : 2;
	/* 0x0:6 */ unsigned int TTE : 1;
	/* 0x0:7 */ unsigned int TIE : 1;
	/* 0x1:0 */ unsigned int STR : 1;
	/* 0x1:1 */ unsigned int p1 : 7;
	/* 0x2:0 */ unsigned int TAG : 16;
} tD_CHCR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_MADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int QWC : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tD_QWC;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_TADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_ASR0;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_ASR1;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 14;
	/* 0x1:6 */ unsigned int p0 : 18;
} tD_SADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DMAE : 1;
	/* 0x0:1 */ unsigned int RELE : 1;
	/* 0x0:2 */ unsigned int MFD : 2;
	/* 0x0:4 */ unsigned int STS : 2;
	/* 0x0:6 */ unsigned int STD : 2;
	/* 0x1:0 */ unsigned int RCYC : 3;
	/* 0x1:3 */ unsigned int p0 : 21;
} tD_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CIS0 : 1;
	/* 0x0:1 */ unsigned int CIS1 : 1;
	/* 0x0:2 */ unsigned int CIS2 : 1;
	/* 0x0:3 */ unsigned int CIS3 : 1;
	/* 0x0:4 */ unsigned int CIS4 : 1;
	/* 0x0:5 */ unsigned int CIS5 : 1;
	/* 0x0:6 */ unsigned int CIS6 : 1;
	/* 0x0:7 */ unsigned int CIS7 : 1;
	/* 0x1:0 */ unsigned int CIS8 : 1;
	/* 0x1:1 */ unsigned int CIS9 : 1;
	/* 0x1:2 */ unsigned int p0 : 3;
	/* 0x1:5 */ unsigned int SIS : 1;
	/* 0x1:6 */ unsigned int MEIS : 1;
	/* 0x1:7 */ unsigned int BEIS : 1;
	/* 0x2:0 */ unsigned int CIM0 : 1;
	/* 0x2:1 */ unsigned int CIM1 : 1;
	/* 0x2:2 */ unsigned int CIM2 : 1;
	/* 0x2:3 */ unsigned int CIM3 : 1;
	/* 0x2:4 */ unsigned int CIM4 : 1;
	/* 0x2:5 */ unsigned int CIM5 : 1;
	/* 0x2:6 */ unsigned int CIM6 : 1;
	/* 0x2:7 */ unsigned int CIM7 : 1;
	/* 0x3:0 */ unsigned int CIM8 : 1;
	/* 0x3:1 */ unsigned int CIM9 : 1;
	/* 0x3:2 */ unsigned int p1 : 3;
	/* 0x3:5 */ unsigned int SIM : 1;
	/* 0x3:6 */ unsigned int MEIM : 1;
	/* 0x3:7 */ unsigned int p2 : 1;
} tD_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CPC0 : 1;
	/* 0x0:1 */ unsigned int CPC1 : 1;
	/* 0x0:2 */ unsigned int CPC2 : 1;
	/* 0x0:3 */ unsigned int CPC3 : 1;
	/* 0x0:4 */ unsigned int CPC4 : 1;
	/* 0x0:5 */ unsigned int CPC5 : 1;
	/* 0x0:6 */ unsigned int CPC6 : 1;
	/* 0x0:7 */ unsigned int CPC7 : 1;
	/* 0x1:0 */ unsigned int CPC8 : 1;
	/* 0x1:1 */ unsigned int CPC9 : 1;
	/* 0x1:2 */ unsigned int p0 : 6;
	/* 0x2:0 */ unsigned int CDE0 : 1;
	/* 0x2:1 */ unsigned int CDE1 : 1;
	/* 0x2:2 */ unsigned int CDE2 : 1;
	/* 0x2:3 */ unsigned int CDE3 : 1;
	/* 0x2:4 */ unsigned int CDE4 : 1;
	/* 0x2:5 */ unsigned int CDE5 : 1;
	/* 0x2:6 */ unsigned int CDE6 : 1;
	/* 0x2:7 */ unsigned int CDE7 : 1;
	/* 0x3:0 */ unsigned int CDE8 : 1;
	/* 0x3:1 */ unsigned int CDE9 : 1;
	/* 0x3:2 */ unsigned int p1 : 5;
	/* 0x3:7 */ unsigned int PCE : 1;
} tD_PCR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int SQWC : 8;
	/* 0x1:0 */ unsigned int p0 : 8;
	/* 0x2:0 */ unsigned int TQWC : 8;
	/* 0x3:0 */ unsigned int p1 : 8;
} tD_SQWC;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RMSK : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_RBSR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_RBOR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_STADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 16;
	/* 0x2:0 */ unsigned int CPND : 1;
	/* 0x2:1 */ unsigned int p1 : 15;
} tD_ENABLER;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 16;
	/* 0x2:0 */ unsigned int CPND : 1;
	/* 0x2:1 */ unsigned int p1 : 15;
} tD_ENABLEW;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int EN1 : 1;
	/* 0x0:1 */ unsigned int EN2 : 1;
	/* 0x0:2 */ unsigned int CRTMD : 3;
	/* 0x0:5 */ unsigned int MMOD : 1;
	/* 0x0:6 */ unsigned int AMOD : 1;
	/* 0x0:7 */ unsigned int SLBG : 1;
	/* 0x1:0 */ unsigned int ALP : 8;
	/* 0x2:0 */ unsigned int p0 : 16;
	/* 0x4 */ unsigned int p1;
} tGS_PMODE;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int INT : 1;
	/* 0x0:1 */ unsigned int FFMD : 1;
	/* 0x0:2 */ unsigned int DPMS : 2;
	/* 0x0:4 */ unsigned int p0 : 28;
	/* 0x4 */ unsigned int p1;
} tGS_SMODE2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int FBP : 9;
	/* 0x1:1 */ unsigned int FBW : 6;
	/* 0x1:7 */ unsigned int PSM : 5;
	/* 0x2:4 */ unsigned int p0 : 12;
	/* 0x4:0 */ unsigned int DBX : 11;
	/* 0x5:3 */ unsigned int DBY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_DISPFB1;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DX : 12;
	/* 0x1:4 */ unsigned int DY : 11;
	/* 0x2:7 */ unsigned int MAGH : 4;
	/* 0x3:3 */ unsigned int MAGV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int DW : 12;
	/* 0x5:4 */ unsigned int DH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_DISPLAY1;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int FBP : 9;
	/* 0x1:1 */ unsigned int FBW : 6;
	/* 0x1:7 */ unsigned int PSM : 5;
	/* 0x2:4 */ unsigned int p0 : 12;
	/* 0x4:0 */ unsigned int DBX : 11;
	/* 0x5:3 */ unsigned int DBY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_DISPFB2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DX : 12;
	/* 0x1:4 */ unsigned int DY : 11;
	/* 0x2:7 */ unsigned int MAGH : 4;
	/* 0x3:3 */ unsigned int MAGV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int DW : 12;
	/* 0x5:4 */ unsigned int DH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_DISPLAY2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int EXBP : 14;
	/* 0x1:6 */ unsigned int EXBW : 6;
	/* 0x2:4 */ unsigned int FBIN : 2;
	/* 0x2:6 */ unsigned int WFFMD : 1;
	/* 0x2:7 */ unsigned int EMODA : 2;
	/* 0x3:1 */ unsigned int EMODC : 2;
	/* 0x3:3 */ unsigned int p0 : 5;
	/* 0x4:0 */ unsigned int WDX : 11;
	/* 0x5:3 */ unsigned int WDY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_EXTBUF;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int SX : 12;
	/* 0x1:4 */ unsigned int SY : 11;
	/* 0x2:7 */ unsigned int SMPH : 4;
	/* 0x3:3 */ unsigned int SMPV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int WW : 12;
	/* 0x5:4 */ unsigned int WH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_EXTDATA;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int WRITE : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
} tGS_EXTWRITE;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int R : 8;
	/* 0x1:0 */ unsigned int G : 8;
	/* 0x2:0 */ unsigned int B : 8;
	/* 0x3:0 */ unsigned int p0 : 8;
	/* 0x4 */ unsigned int p1;
} tGS_BGCOLOR;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int SIGNAL : 1;
	/* 0x0:1 */ unsigned int FINISH : 1;
	/* 0x0:2 */ unsigned int HSINT : 1;
	/* 0x0:3 */ unsigned int VSINT : 1;
	/* 0x0:4 */ unsigned int EDWINT : 1;
	/* 0x0:5 */ unsigned int p0 : 3;
	/* 0x1:0 */ unsigned int FLUSH : 1;
	/* 0x1:1 */ unsigned int RESET : 1;
	/* 0x1:2 */ unsigned int p1 : 2;
	/* 0x1:4 */ unsigned int NFIELD : 1;
	/* 0x1:5 */ unsigned int FIELD : 1;
	/* 0x1:6 */ unsigned int FIFO : 2;
	/* 0x2:0 */ unsigned int REV : 8;
	/* 0x3:0 */ unsigned int ID : 8;
	/* 0x4 */ unsigned int p2;
} tGS_CSR;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int p0 : 8;
	/* 0x1:0 */ unsigned int SIGMSK : 1;
	/* 0x1:1 */ unsigned int FINISHMSK : 1;
	/* 0x1:2 */ unsigned int HSMSK : 1;
	/* 0x1:3 */ unsigned int VSMSK : 1;
	/* 0x1:4 */ unsigned int EDWMSK : 1;
	/* 0x1:5 */ unsigned int p1 : 19;
	/* 0x4 */ unsigned int p2;
} tGS_IMR;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DIR : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
} tGS_BUSDIR;

typedef struct { // 0x8
	/* 0x0 */ unsigned int SIGID;
	/* 0x4 */ unsigned int LBLID;
} tGS_SIGLBLID;

struct _sceDmaTag { // 0x10
	/* 0x0 */ u_short qwc;
	/* 0x2 */ u_char mark;
	/* 0x3 */ u_char id;
	/* 0x4 */ _sceDmaTag *next;
	/* 0x8 */ u_int p[2];
};

typedef _sceDmaTag sceDmaTag;

typedef struct { // 0x14
	/* 0x00 */ u_char sts;
	/* 0x01 */ u_char std;
	/* 0x02 */ u_char mfd;
	/* 0x03 */ u_char rcycle;
	/* 0x04 */ u_short express;
	/* 0x06 */ u_short notify;
	/* 0x08 */ u_short sqwc;
	/* 0x0a */ u_short tqwc;
	/* 0x0c */ void *rbadr;
	/* 0x10 */ u_int rbmsk;
} sceDmaEnv;

typedef struct { // 0x90
	/* 0x00 */ tD_CHCR chcr;
	/* 0x04 */ u_int p0[3];
	/* 0x10 */ void *madr;
	/* 0x14 */ u_int p1[3];
	/* 0x20 */ u_int qwc;
	/* 0x24 */ u_int p2[3];
	/* 0x30 */ sceDmaTag *tadr;
	/* 0x34 */ u_int p3[3];
	/* 0x40 */ void *as0;
	/* 0x44 */ u_int p4[3];
	/* 0x50 */ void *as1;
	/* 0x54 */ u_int p5[3];
	/* 0x60 */ u_int p6[4];
	/* 0x70 */ u_int p7[4];
	/* 0x80 */ void *sadr;
	/* 0x84 */ u_int p8[3];
} sceDmaChan;

typedef struct { // 0x28
	/* 0x00 */ tGS_PMODE pmode;
	/* 0x08 */ tGS_SMODE2 smode2;
	/* 0x10 */ tGS_DISPFB2 dispfb;
	/* 0x18 */ tGS_DISPLAY2 display;
	/* 0x20 */ tGS_BGCOLOR bgcolor;
} sceGsDispEnv;

typedef struct { // 0x80
	/* 0x00 */ sceGsFrame frame1;
	/* 0x08 */ u_long frame1addr;
	/* 0x10 */ sceGsZbuf zbuf1;
	/* 0x18 */ long int zbuf1addr;
	/* 0x20 */ sceGsXyoffset xyoffset1;
	/* 0x28 */ long int xyoffset1addr;
	/* 0x30 */ sceGsScissor scissor1;
	/* 0x38 */ long int scissor1addr;
	/* 0x40 */ sceGsPrmodecont prmodecont;
	/* 0x48 */ long int prmodecontaddr;
	/* 0x50 */ sceGsColclamp colclamp;
	/* 0x58 */ long int colclampaddr;
	/* 0x60 */ sceGsDthe dthe;
	/* 0x68 */ long int dtheaddr;
	/* 0x70 */ sceGsTest test1;
	/* 0x78 */ long int test1addr;
} sceGsDrawEnv1;

typedef struct { // 0x80
	/* 0x00 */ sceGsFrame frame2;
	/* 0x08 */ u_long frame2addr;
	/* 0x10 */ sceGsZbuf zbuf2;
	/* 0x18 */ long int zbuf2addr;
	/* 0x20 */ sceGsXyoffset xyoffset2;
	/* 0x28 */ long int xyoffset2addr;
	/* 0x30 */ sceGsScissor scissor2;
	/* 0x38 */ long int scissor2addr;
	/* 0x40 */ sceGsPrmodecont prmodecont;
	/* 0x48 */ long int prmodecontaddr;
	/* 0x50 */ sceGsColclamp colclamp;
	/* 0x58 */ long int colclampaddr;
	/* 0x60 */ sceGsDthe dthe;
	/* 0x68 */ long int dtheaddr;
	/* 0x70 */ sceGsTest test2;
	/* 0x78 */ long int test2addr;
} sceGsDrawEnv2;

typedef struct { // 0x60
	/* 0x00 */ sceGsTest testa;
	/* 0x08 */ long int testaaddr;
	/* 0x10 */ sceGsPrim prim;
	/* 0x18 */ long int primaddr;
	/* 0x20 */ sceGsRgbaq rgbaq;
	/* 0x28 */ long int rgbaqaddr;
	/* 0x30 */ sceGsXyz xyz2a;
	/* 0x38 */ long int xyz2aaddr;
	/* 0x40 */ sceGsXyz xyz2b;
	/* 0x48 */ long int xyz2baddr;
	/* 0x50 */ sceGsTest testb;
	/* 0x58 */ long int testbaddr;
} sceGsClear;

typedef struct { // 0x230
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ sceGifTag giftag0;
	/* 0x060 */ sceGsDrawEnv1 draw0;
	/* 0x0e0 */ sceGsClear clear0;
	/* 0x140 */ sceGifTag giftag1;
	/* 0x150 */ sceGsDrawEnv1 draw1;
	/* 0x1d0 */ sceGsClear clear1;
} sceGsDBuff;

typedef struct { // 0x330
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ sceGifTag giftag0;
	/* 0x060 */ sceGsDrawEnv1 draw01;
	/* 0x0e0 */ sceGsDrawEnv2 draw02;
	/* 0x160 */ sceGsClear clear0;
	/* 0x1c0 */ sceGifTag giftag1;
	/* 0x1d0 */ sceGsDrawEnv1 draw11;
	/* 0x250 */ sceGsDrawEnv2 draw12;
	/* 0x2d0 */ sceGsClear clear1;
} sceGsDBuffDc;

typedef struct { // 0x40
	/* 0x00 */ sceGsTexflush texflush;
	/* 0x08 */ long int texflushaddr;
	/* 0x10 */ sceGsTex1 tex11;
	/* 0x18 */ long int tex11addr;
	/* 0x20 */ sceGsTex0 tex01;
	/* 0x28 */ long int tex01addr;
	/* 0x30 */ sceGsClamp clamp1;
	/* 0x38 */ long int clamp1addr;
} sceGsTexEnv;

typedef struct { // 0x40
	/* 0x00 */ sceGsTexflush texflush;
	/* 0x08 */ long int texflushaddr;
	/* 0x10 */ sceGsTex1 tex12;
	/* 0x18 */ long int tex12addr;
	/* 0x20 */ sceGsTex0 tex02;
	/* 0x28 */ long int tex02addr;
	/* 0x30 */ sceGsClamp clamp2;
	/* 0x38 */ long int clamp2addr;
} sceGsTexEnv2;

typedef struct { // 0x40
	/* 0x00 */ sceGsAlpha alpha1;
	/* 0x08 */ long int alpha1addr;
	/* 0x10 */ sceGsPabe pabe;
	/* 0x18 */ long int pabeaddr;
	/* 0x20 */ sceGsTexa texa;
	/* 0x28 */ long int texaaddr;
	/* 0x30 */ sceGsFba fba1;
	/* 0x38 */ long int fba1addr;
} sceGsAlphaEnv;

typedef struct { // 0x40
	/* 0x00 */ sceGsAlpha alpha2;
	/* 0x08 */ long int alpha2addr;
	/* 0x10 */ sceGsPabe pabe;
	/* 0x18 */ long int pabeaddr;
	/* 0x20 */ sceGsTexa texa;
	/* 0x28 */ long int texaaddr;
	/* 0x30 */ sceGsFba fba2;
	/* 0x38 */ long int fba2addr;
} sceGsAlphaEnv2;

typedef struct { // 0x60
	/* 0x00 */ sceGifTag giftag0;
	/* 0x10 */ sceGsBitbltbuf bitbltbuf;
	/* 0x18 */ long int bitbltbufaddr;
	/* 0x20 */ sceGsTrxpos trxpos;
	/* 0x28 */ long int trxposaddr;
	/* 0x30 */ sceGsTrxreg trxreg;
	/* 0x38 */ long int trxregaddr;
	/* 0x40 */ sceGsTrxdir trxdir;
	/* 0x48 */ long int trxdiraddr;
	/* 0x50 */ sceGifTag giftag1;
} sceGsLoadImage;

typedef struct { // 0x70
	/* 0x00 */ u_int vifcode[4];
	/* 0x10 */ sceGifTag giftag;
	/* 0x20 */ sceGsBitbltbuf bitbltbuf;
	/* 0x28 */ long int bitbltbufaddr;
	/* 0x30 */ sceGsTrxpos trxpos;
	/* 0x38 */ long int trxposaddr;
	/* 0x40 */ sceGsTrxreg trxreg;
	/* 0x48 */ long int trxregaddr;
	/* 0x50 */ sceGsFinish finish;
	/* 0x58 */ long int finishaddr;
	/* 0x60 */ sceGsTrxdir trxdir;
	/* 0x68 */ long int trxdiraddr;
} sceGsStoreImage;

typedef struct { // 0x10
	/* 0x0 */ short int sceGsInterMode;
	/* 0x2 */ short int sceGsOutMode;
	/* 0x4 */ short int sceGsFFMode;
	/* 0x6 */ short int sceGsVersion;
	/* 0x8 */ int (*sceGsVSCfunc)(/* parameters unknown */);
	/* 0xc */ int sceGsVSCid;
} sceGsGParam;

typedef struct { // 0x10
	/* 0x0 */ u_int *pCurrent;
	/* 0x4 */ u_long128 *pBase;
	/* 0x8 */ u_long128 *pDmaTag;
	/* 0xc */ u_long *pGifTag;
} sceGifPacket;

typedef int qword[4];
typedef int sceVu0IVECTOR[4];
typedef float sceVu0FVECTOR[4];
typedef float sceVu0FMATRIX[4][4];
typedef char Sint8;
typedef short int Sint16;
typedef int Sint32;
typedef long int Sint64;
typedef long128 Sint128;
typedef u_char Uint8;
typedef u_short Uint16;
typedef u_int Uint32;
typedef u_long Uint64;
typedef u_long128 Uint128;
typedef float Float32;

struct gf_dma_tag { // 0x18
	/* 0x00:0 */ long unsigned int QWC : 16;
	/* 0x02:0 */ long unsigned int pad16 : 10;
	/* 0x03:2 */ long unsigned int PCE : 2;
	/* 0x03:4 */ long unsigned int ID : 3;
	/* 0x03:7 */ long unsigned int IRQ : 1;
	/* 0x04:0 */ long unsigned int ADDR : 31;
	/* 0x07:7 */ long unsigned int SPR : 1;
	/* 0x08 */ long unsigned int vif_code[2];
};

typedef gf_dma_tag GF_DMA_TAG;

struct _qdata643232 { // 0x10
	/* 0x0 */ Uint64 u64;
	/* 0x8 */ Uint32 u32[2];
};

typedef _qdata643232 QDATA643232;

struct pod_header { // 0x20
	/* 0x00 */ Uint32 magic;
	/* 0x04 */ Uint16 version;
	/* 0x06 */ Uint16 pad;
	/* 0x08 */ Sint32 shapeNum;
	/* 0x0c */ Sint32 rootShape;
	/* 0x10 */ Uint32 extBlockNum;
	/* 0x14 */ Sint32 pad2[3];
};

typedef pod_header PodHEADER;

struct pod_shapetbl { // 0x50
	/* 0x00 */ Uint16 parent;
	/* 0x02 */ Uint16 child;
	/* 0x04 */ Uint16 sibling;
	/* 0x08 */ Uint32 shape;
	/* 0x0c */ Uint32 flag;
	/* 0x10 */ union { // 0x40
		/* 0x10 */ sceVu0FMATRIX matrix;
		/* 0x10 */ struct { // 0x30
			/* 0x10 */ sceVu0FVECTOR rotate;
			/* 0x20 */ sceVu0FVECTOR scale;
			/* 0x30 */ sceVu0FVECTOR translate;
		} vector;
	} rel;
};

typedef pod_shapetbl PodSHAPETBL;

struct pod_extendtbl { // 0x10
	/* 0x0 */ Uint32 extId;
	/* 0x4 */ Uint32 free[3];
};

typedef pod_extendtbl PodEXTENDTBL;

struct pod_shape { // 0x30
	/* 0x00 */ Sint32 matNum;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ Sint32 pad;
	/* 0x0c */ Sint32 free;
	/* 0x10 */ sceVu0FVECTOR min;
	/* 0x20 */ sceVu0FVECTOR max;
};

typedef pod_shape PodSHAPE;

struct pod_material { // 0x60
	/* 0x00 */ Sint32 geomNum;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ Sint32 texIdx;
	/* 0x0c */ Sint32 pad0;
	/* 0x10 */ Float32 shininess;
	/* 0x14 */ Float32 transparency;
	/* 0x18 */ Sint32 pad1[2];
	/* 0x20 */ sceVu0FVECTOR ambient;
	/* 0x30 */ sceVu0FVECTOR diffuse;
	/* 0x40 */ sceVu0FVECTOR specular;
	/* 0x50 */ sceVu0FVECTOR emission;
};

typedef pod_material PodMATERIAL;

struct pod_geometry { // 0x10
	/* 0x0 */ Sint32 vertNum;
	/* 0x4 */ Uint32 prim;
	/* 0x8 */ Sint32 pad[2];
};

typedef pod_geometry PodGEOMETRY;

struct pod_share { // 0x10
	/* 0x0 */ Uint32 extId;
	/* 0x4 */ Uint32 shapeNo;
	/* 0x8 */ Uint32 offset;
	/* 0xc */ Uint32 pad;
};

typedef pod_share PodSHARE;

struct pmt_header { // 0x10
	/* 0x0 */ Uint32 magic;
	/* 0x4 */ Uint32 version;
	/* 0x8 */ Sint32 shapeNum;
	/* 0xc */ Sint32 free;
};

typedef pmt_header PmtHEADER;

struct pmt_shapeofs { // 0x50
	/* 0x00 */ Uint32 offset;
	/* 0x04 */ Sint32 keyNum;
	/* 0x08 */ Uint32 flag;
	/* 0x0c */ Sint32 pad;
	/* 0x10 */ sceVu0FMATRIX mat;
};

typedef pmt_shapeofs PmtSHAPEOFS;
typedef Float32 PmtQUATERNION[4];

struct pmt_shapekeyhead { // 0x10
	/* 0x0 */ Uint32 frame;
	/* 0x4 */ Sint32 pad[3];
};

typedef pmt_shapekeyhead PmtSHAPEKEYHEAD;

struct gf_pig_ref { // 0x8
	/* 0x0 */ Uint32 offset;
	/* 0x4 */ Uint32 size;
};

typedef gf_pig_ref GF_PIG_REF;

struct gf_pig_head { // 0x80
	/* 0x00 */ Uint32 magic;
	/* 0x04 */ Uint16 version;
	/* 0x06 */ Uint16 reserved0;
	/* 0x08 */ Uint32 reserved1;
	/* 0x0c */ Uint16 flag;
	/* 0x0e */ Uint16 imageNum;
	/* 0x10 */ Uint64 guid[2];
	/* 0x20 */ Uint16 width;
	/* 0x22 */ Uint16 height;
	/* 0x24 */ Uint8 psm;
	/* 0x25 */ Uint8 cpsm;
	/* 0x26 */ Uint16 reserved2;
	/* 0x28 */ Uint32 vram;
	/* 0x2c */ Uint32 vramClut;
	/* 0x30 */ qword free;
	/* 0x40 */ GF_PIG_REF clutRef;
	/* 0x48 */ GF_PIG_REF imageRef[7];
};

typedef gf_pig_head GF_PIG_HEAD;

struct gf_texdb_head { // 0x10
	/* 0x0 */ Uint32 size;
	/* 0x4 */ Uint32 textureMax;
	/* 0x8 */ Uint32 textureNum;
	/* 0xc */ Uint32 pad;
};

typedef gf_texdb_head GF_TEXDB_HEAD;

struct gf_texdb { // 0x48
	/* 0x00 */ Uint64 guid[2];
	/* 0x10 */ Uint16 flag;
	/* 0x12 */ Uint16 pig_flag;
	/* 0x14 */ Uint32 *pig;
	/* 0x18 */ Sint32 score;
	/* 0x1c */ Uint16 allocSize;
	/* 0x1e */ Uint16 pad;
	/* 0x20 */ sceGsTex0 tex0;
	/* 0x28 */ sceGsTex1 tex1;
	/* 0x30 */ sceGsMiptbp1 miptbp1;
	/* 0x38 */ sceGsMiptbp2 miptbp2;
	/* 0x40 */ sceGsClamp clamp;
};

typedef gf_texdb GF_TEXDB;

struct gf_micro { // 0xc
	/* 0x0 */ Uint32 *micro;
	/* 0x4 */ qword *packet;
	/* 0x8 */ Uint32 workSize;
};

typedef gf_micro GF_MICRO;

struct gf_packet { // 0xc
	/* 0x0 */ qword *top;
	/* 0x4 */ qword *cur;
	/* 0x8 */ Sint32 size;
};

typedef gf_packet GF_PACKET;

struct gf_screen { // 0x40
	/* 0x00 */ Float32 screenDist;
	/* 0x04 */ Float32 xAspect;
	/* 0x08 */ Float32 yAspect;
	/* 0x0c */ Float32 gsXSize;
	/* 0x10 */ Float32 gsYSize;
	/* 0x14 */ Float32 zMini;
	/* 0x18 */ Float32 zMax;
	/* 0x1c */ Float32 nearZ;
	/* 0x20 */ Float32 farZ;
	/* 0x30 */ sceVu0FVECTOR clipVolume;
};

typedef gf_screen GF_SCREEN;

struct gf_light { // 0x90
	/* 0x00 */ sceVu0FMATRIX paraVect;
	/* 0x40 */ sceVu0FMATRIX paraCol;
	/* 0x80 */ qword *packet;
};

typedef gf_light GF_LIGHT;

struct gf_point_light { // 0x10
	/* 0x0 */ struct { // 0x20
		/* 0x0 */ sceVu0FVECTOR paraPosPow;
		/* 0x10 */ sceVu0FVECTOR paraCol;
	} lt[0];
	/* 0x0 */ qword *packet;
};

typedef gf_point_light GF_POINT_LIGHT;

struct gf_spot_light { // 0x10
	/* 0x0 */ struct { // 0x30
		/* 0x0 */ sceVu0FVECTOR paraPosPow;
		/* 0x10 */ sceVu0FVECTOR paraCol;
		/* 0x20 */ sceVu0FVECTOR paraVect;
	} lt[0];
	/* 0x0 */ qword *packet;
};

typedef gf_spot_light GF_SPOT_LIGHT;

struct gf_specular { // 0x40
	/* 0x00 */ sceVu0FVECTOR vect;
	/* 0x10 */ sceVu0FVECTOR col;
	/* 0x20 */ sceVu0FVECTOR other;
	/* 0x30 */ qword *packet;
};

typedef gf_specular GF_SPECULAR;

struct gf_fog { // 0x50
	/* 0x00 */ Float32 min;
	/* 0x04 */ Float32 max;
	/* 0x08 */ Float32 near;
	/* 0x0c */ Float32 far;
	/* 0x10 */ Uint8 col[4];
	/* 0x20 */ sceVu0FVECTOR fogA;
	/* 0x30 */ sceVu0FVECTOR fogB;
	/* 0x40 */ qword *packet;
};

typedef gf_fog GF_FOG;

struct gf_shapeofs { // 0x10
	/* 0x0 */ qword *packet;
	/* 0x4 */ PodSHAPETBL *shapeTbl;
	/* 0x8 */ Sint32 index;
	/* 0xc */ Uint32 npoly;
};

typedef gf_shapeofs GfSHAPEOFS;

struct gf_model { // 0x30
	/* 0x00 */ Uint32 *podData;
	/* 0x04 */ GfSHAPEOFS *shapeOfs;
	/* 0x08 */ qword *packet;
	/* 0x0c */ Sint32 pad;
	/* 0x10 */ sceVu0FVECTOR boundBox[2];
};

typedef gf_model GF_MODEL;

typedef enum {
	GF_INST_TYPE_NULL = 0,
	GF_INST_TYPE_OBJECT = 1,
	GF_INST_TYPE_SHAPE = 2,
	GF_INST_TYPE_SPRITE = 3,
	GF_INST_TYPE_SCENE = 4,
	GF_INST_TYPE_FOG = 5,
	GF_INST_TYPE_USER = 6
} GF_INST_TYPE;

typedef void (*gf_inst_evalfunc)(/* parameters unknown */);
typedef qword* (*gf_inst_drawfunc)(/* parameters unknown */);

struct gf_inst_head { // 0x100
	/* 0x00 */ sceVu0FMATRIX localMatrix;
	/* 0x40 */ sceVu0FMATRIX worldMatrix;
	/* 0x80 */ sceVu0FMATRIX lightMatrix;
	/* 0xc0 */ gf_inst_head *parent;
	/* 0xc4 */ gf_inst_head *bros;
	/* 0xc8 */ gf_inst_head *child;
	/* 0xcc */ GF_INST_TYPE type;
	/* 0xd0 */ Uint32 flag;
	/* 0xd4 */ Float32 sortKey;
	/* 0xd8 */ gf_inst_evalfunc *evalFunc;
	/* 0xdc */ gf_inst_drawfunc *drawFunc;
	/* 0xe0 */ gf_inst_head *before;
	/* 0xe4 */ gf_inst_head *next;
	/* 0xe8 */ gf_inst_head *beforeGroup;
	/* 0xec */ gf_inst_head *groupEnd;
	/* 0xf0 */ void *user;
};

typedef gf_inst_head GF_INST_HEAD;
typedef gf_inst_head GF_INSTANCE;
typedef gf_inst_head GF_INST_NULL;

struct gf_scene { // 0x2f0
	/* 0x000 */ GF_INST_HEAD head;
	/* 0x100 */ sceVu0FMATRIX worldView;
	/* 0x140 */ sceVu0FMATRIX viewScreen;
	/* 0x180 */ sceVu0FMATRIX viewClip;
	/* 0x1c0 */ sceVu0FMATRIX clipScreen;
	/* 0x200 */ sceVu0FMATRIX worldScreen;
	/* 0x240 */ sceVu0FMATRIX worldClip;
	/* 0x280 */ sceVu0FVECTOR cameraPos;
	/* 0x290 */ GF_FOG fog;
	/* 0x2e0 */ qword *packet;
};

typedef gf_scene GF_INST_SCENE;

struct gf_inst { // 0x170
	/* 0x000 */ GF_INST_HEAD head;
	/* 0x100 */ Uint32 flag;
	/* 0x104 */ Sint32 no;
	/* 0x108 */ PodSHAPETBL *shapeTbl;
	/* 0x10c */ PodSHAPE *shape;
	/* 0x110 */ gf_object *object;
	/* 0x114 */ qword *packet;
	/* 0x118 */ qword *extPacket;
	/* 0x11c */ GF_MICRO *micro;
	/* 0x120 */ GF_LIGHT *light;
	/* 0x124 */ GF_POINT_LIGHT *point_light;
	/* 0x128 */ GF_SPOT_LIGHT *spot_light;
	/* 0x12c */ Uint32 flagAnim;
	/* 0x130 */ PmtSHAPEKEYHEAD *keyHead;
	/* 0x134 */ PmtSHAPEOFS *shapeOffs;
	/* 0x138 */ Sint32 curKey;
	/* 0x13c */ Float32 curFrame;
	/* 0x140 */ PmtSHAPEKEYHEAD *keyHeadComp;
	/* 0x144 */ PmtSHAPEOFS *shapeOffsComp;
	/* 0x148 */ Sint32 curKeyComp;
	/* 0x14c */ Float32 curFrameComp;
	/* 0x150 */ sceVu0FVECTOR col;
	/* 0x160 */ Uint64 alpha;
};

typedef gf_inst GF_INST_SHAPE;

struct gf_sprite { // 0x130
	/* 0x000 */ GF_INST_HEAD head;
	/* 0x100 */ GF_MICRO *micro;
	/* 0x104 */ GF_LIGHT *light;
	/* 0x108 */ Float32 col[4];
	/* 0x118 */ Uint32 texIdx;
	/* 0x11c */ Uint32 prim;
	/* 0x120 */ Uint32 flag;
};

typedef gf_sprite GF_INST_SPRITE;
typedef void (*GF_CallBackFunction)(/* parameters unknown */);

struct gf_object { // 0x160
	/* 0x000 */ GF_INST_HEAD head;
	/* 0x100 */ Uint32 flag;
	/* 0x104 */ GF_MICRO *micro;
	/* 0x108 */ GF_LIGHT *light;
	/* 0x10c */ GF_POINT_LIGHT *point_light;
	/* 0x110 */ GF_SPOT_LIGHT *spot_light;
	/* 0x114 */ GF_MODEL *model;
	/* 0x118 */ Sint32 nShape;
	/* 0x11c */ GF_INST_SHAPE *shape;
	/* 0x120 */ Uint32 flagAnim;
	/* 0x124 */ PmtHEADER *curAnim;
	/* 0x128 */ Float32 speedAnim;
	/* 0x12c */ PmtHEADER *compNextAnim;
	/* 0x130 */ Uint32 compAllTimeAnim;
	/* 0x134 */ Uint32 compCurTimeAnim;
	/* 0x138 */ GF_CallBackFunction func;
	/* 0x140 */ sceVu0FVECTOR col;
	/* 0x150 */ Uint64 alpha;
};

typedef gf_object GF_INST_OBJECT;

struct gf_user { // 0x110
	/* 0x000 */ GF_INST_HEAD head;
	/* 0x100 */ void (*funcInstUserEval)(/* parameters unknown */);
	/* 0x104 */ qword* (*funcInstUserDraw)(/* parameters unknown */);
};

typedef gf_user GF_INST_USER;

struct gf_vu1pkt_head { // 0x20
	/* 0x00 */ sceGifTag giftag;
	/* 0x10 */ sceGifTag giftagTriFan;
};

typedef gf_vu1pkt_head GF_VU1PKT_HEAD;

enum gf_modelpkt_make {
	GF_MODELPKT_MAKE_ALL = 0,
	GF_MODELPKT_MAKE_VERTEX_ONLY = 1,
	GF_MODELPKT_MAKE_TEXTURE_ONLY = 2
};

struct gf_cache_head { // 0x10
	/* 0x0 */ Uint32 size;
	/* 0x4 */ Uint32 cellMax;
	/* 0x8 */ Uint16 cache_pos;
	/* 0xa */ Uint16 cache_size;
	/* 0xc */ Uint16 preset_pos;
	/* 0xe */ Uint16 pad;
};

typedef gf_cache_head GF_CACHE_HEAD;

struct gf_cache_cell { // 0x20
	/* 0x00 */ gf_cache_cell *next;
	/* 0x04 */ Uint8 stat;
	/* 0x05 */ Uint8 used_flag;
	/* 0x06 */ Uint16 pad;
	/* 0x08 */ Sint32 score;
	/* 0x0c */ Uint32 guid;
	/* 0x10 */ Uint32 pad2[3];
	/* 0x1c */ Uint16 pos;
	/* 0x1e */ Uint16 size;
};

typedef gf_cache_cell GF_CACHE_CELL;

union __dmath { // 0x8
	/* 0x0 */ __uint32_t i[2];
	/* 0x0 */ double d;
};

struct exception { // 0x28
	/* 0x00 */ int type;
	/* 0x04 */ char *name;
	/* 0x08 */ double arg1;
	/* 0x10 */ double arg2;
	/* 0x18 */ double retval;
	/* 0x20 */ int err;
};

enum __fdlibm_version {
	__fdlibm_ieee = -1,
	__fdlibm_svid = 0,
	__fdlibm_xopen = 1,
	__fdlibm_posix = 2
};

struct _gf_animcomp { // 0x30
	/* 0x00 */ union { // 0x10
		/* 0x00 */ PmtQUATERNION qrot;
		/* 0x00 */ sceVu0FVECTOR vrot;
	} rot;
	/* 0x10 */ sceVu0FVECTOR trans;
	/* 0x20 */ sceVu0FVECTOR scale;
};

typedef _gf_animcomp _GF_ANIMCOMPDATA;

struct gf_vram_cell { // 0x10
	/* 0x0 */ gf_vram_cell *prev;
	/* 0x4 */ gf_vram_cell *next;
	/* 0x8 */ Uint8 stat;
	/* 0x9 */ Uint8 pad;
	/* 0xa */ Uint8 used_flag;
	/* 0xb */ Uint8 reserved_flag;
	/* 0xc */ Uint16 pos;
	/* 0xe */ Uint16 size;
};

typedef gf_vram_cell GF_VRAM_CELL;

struct gf_vram_head { // 0xc
	/* 0x0 */ Uint32 size;
	/* 0x4 */ Uint32 cellMax;
	/* 0x8 */ GF_VRAM_CELL *top_cell;
};

typedef gf_vram_head GF_VRAM_HEAD;

typedef struct { // 0xc
	/* 0x0 */ Uint32 w;
	/* 0x4 */ Uint32 h;
	/* 0x8 */ Uint32 psm;
} GF_VRAM_RECT;

typedef struct { // 0x24
	/* 0x00 */ GF_VRAM_RECT screen;
	/* 0x0c */ GF_VRAM_RECT frameBuffer;
	/* 0x18 */ GF_VRAM_RECT zBuffer;
} GF_VRAM_SCREEN_INFO;

struct sce_stat { // 0x40
	/* 0x00 */ unsigned int st_mode;
	/* 0x04 */ unsigned int st_attr;
	/* 0x08 */ unsigned int st_size;
	/* 0x0c */ unsigned char st_ctime[8];
	/* 0x14 */ unsigned char st_atime[8];
	/* 0x1c */ unsigned char st_mtime[8];
	/* 0x24 */ unsigned int st_hisize;
	/* 0x28 */ unsigned int st_private[6];
};

struct sce_dirent { // 0x144
	/* 0x000 */ sce_stat d_stat;
	/* 0x040 */ char d_name[256];
	/* 0x140 */ void *d_private;
};

typedef struct { // 0x10
	/* 0x0 */ unsigned int epc;
	/* 0x4 */ unsigned int gp;
	/* 0x8 */ unsigned int sp;
	/* 0xc */ unsigned int dummy;
} sceExecData;

struct _sif_rpc_data { // 0x10
	/* 0x0 */ void *paddr;
	/* 0x4 */ unsigned int pid;
	/* 0x8 */ int tid;
	/* 0xc */ unsigned int mode;
};

typedef _sif_rpc_data sceSifRpcData;
typedef void (*sceSifEndFunc)(/* parameters unknown */);

struct _sif_client_data { // 0x28
	/* 0x00 */ _sif_rpc_data rpcd;
	/* 0x10 */ unsigned int command;
	/* 0x14 */ void *buff;
	/* 0x18 */ void *cbuff;
	/* 0x1c */ sceSifEndFunc func;
	/* 0x20 */ void *para;
	/* 0x24 */ _sif_serve_data *serve;
};

typedef _sif_client_data sceSifClientData;

struct _sif_receive_data { // 0x1c
	/* 0x00 */ _sif_rpc_data rpcd;
	/* 0x10 */ void *src;
	/* 0x14 */ void *dest;
	/* 0x18 */ int size;
};

typedef _sif_receive_data sceSifReceiveData;
typedef void* (*sceSifRpcFunc)(/* parameters unknown */);

struct _sif_serve_data { // 0x44
	/* 0x00 */ unsigned int command;
	/* 0x04 */ sceSifRpcFunc func;
	/* 0x08 */ void *buff;
	/* 0x0c */ int size;
	/* 0x10 */ sceSifRpcFunc cfunc;
	/* 0x14 */ void *cbuff;
	/* 0x18 */ int csize;
	/* 0x1c */ sceSifClientData *client;
	/* 0x20 */ void *paddr;
	/* 0x24 */ unsigned int fno;
	/* 0x28 */ void *receive;
	/* 0x2c */ int rsize;
	/* 0x30 */ int rmode;
	/* 0x34 */ unsigned int rid;
	/* 0x38 */ _sif_serve_data *link;
	/* 0x3c */ _sif_serve_data *next;
	/* 0x40 */ _sif_queue_data *base;
};

typedef _sif_serve_data sceSifServeData;

struct _sif_queue_data { // 0x18
	/* 0x00 */ int key;
	/* 0x04 */ int active;
	/* 0x08 */ _sif_serve_data *link;
	/* 0x0c */ _sif_serve_data *start;
	/* 0x10 */ _sif_serve_data *end;
	/* 0x14 */ _sif_queue_data *next;
};

typedef _sif_queue_data sceSifQueueData;

struct nm_TimerRegAdr_tag { // 0x10
	/* 0x0 */ u_int *count;
	/* 0x4 */ u_int *mode;
	/* 0x8 */ u_int *comp;
	/* 0xc */ u_int *hold;
};

typedef nm_TimerRegAdr_tag nm_TimerRegAdr_t;

typedef union { // 0x8
	/* 0x0 */ double value;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ __uint32_t lsw;
		/* 0x4 */ __uint32_t msw;
	} parts;
} ieee_double_shape_type;

typedef union { // 0x4
	/* 0x0 */ float value;
	/* 0x0 */ __uint32_t word;
} ieee_float_shape_type;

enum cmp_type {
	CMP_SI = 0,
	CMP_DI = 1,
	CMP_SF = 2,
	CMP_DF = 3,
	CMP_MAX = 4
};

enum delay_type {
	DELAY_NONE = 0,
	DELAY_LOAD = 1,
	DELAY_HILO = 2,
	DELAY_HILO1 = 3,
	DELAY_FCMP = 4
};

enum processor_type {
	PROCESSOR_DEFAULT = 0,
	PROCESSOR_R3000 = 1,
	PROCESSOR_R3900 = 2,
	PROCESSOR_R6000 = 3,
	PROCESSOR_R4000 = 4,
	PROCESSOR_R4100 = 5,
	PROCESSOR_R4300 = 6,
	PROCESSOR_R4600 = 7,
	PROCESSOR_R4650 = 8,
	PROCESSOR_R5000 = 9,
	PROCESSOR_R5400 = 10,
	PROCESSOR_R5900 = 11,
	PROCESSOR_R8000 = 12
};

enum mips_abicalls_type {
	MIPS_ABICALLS_NO = 0,
	MIPS_ABICALLS_YES = 1
};

enum block_move_type {
	BLOCK_MOVE_NORMAL = 0,
	BLOCK_MOVE_NOT_LAST = 1,
	BLOCK_MOVE_LAST = 2
};

enum reg_class {
	NO_REGS = 0,
	ARGP_REGS = 1,
	M16_NA_REGS = 2,
	M16_REGS = 3,
	T_REG = 4,
	M16_T_REGS = 5,
	GR_REGS = 6,
	FP_REGS = 7,
	HI_REG = 8,
	LO_REG = 9,
	HILO_REG = 10,
	MD_REGS = 11,
	AP_AND_GR_REGS = 12,
	HI_AND_GR_REGS = 13,
	LO_AND_GR_REGS = 14,
	HILO_AND_GR_REGS = 15,
	HI1_REG = 16,
	LO1_REG = 17,
	HILO1_REG = 18,
	MD1_REGS = 19,
	HI1_AND_GR_REGS = 20,
	LO1_AND_GR_REGS = 21,
	HILO1_AND_GR_REGS = 22,
	HI01_REG = 23,
	LO01_REG = 24,
	HILO01_REG = 25,
	MD01_REGS = 26,
	HI01_AND_GR_REGS = 27,
	LO01_AND_GR_REGS = 28,
	HILO01_AND_GR_REGS = 29,
	ST_REGS = 30,
	ALL_REGS = 31,
	LIM_REG_CLASSES = 32
};

enum frameinfo_state {
	fi_blank = 0,
	fi_partially_initialized = 1,
	fi_modes_known = 2,
	fi_initialized = 3
};

struct mips_frame_info { // 0x80
	/* 0x00 */ long int total_size;
	/* 0x08 */ long int var_size;
	/* 0x10 */ long int args_size;
	/* 0x18 */ long int extra_size;
	/* 0x20 */ int gp_reg_size;
	/* 0x24 */ int fp_reg_size;
	/* 0x28 */ int gp_quad_size;
	/* 0x30 */ long int mask;
	/* 0x38 */ long int fmask;
	/* 0x40 */ long int gp_save_offset;
	/* 0x48 */ long int fp_save_offset;
	/* 0x50 */ long int gp_sp_offset;
	/* 0x58 */ long int rap_offset;
	/* 0x60 */ long int fp_sp_offset;
	/* 0x68 */ frameinfo_state state;
	/* 0x6c */ int num_gp;
	/* 0x70 */ int num_fp;
	/* 0x78 */ long int insns_len;
};

struct mips_args { // 0x3c
	/* 0x00 */ int gp_reg_found;
	/* 0x04 */ unsigned int arg_number;
	/* 0x08 */ unsigned int arg_words;
	/* 0x0c */ unsigned int fp_arg_words;
	/* 0x10 */ int last_arg_fp;
	/* 0x14 */ int fp_code;
	/* 0x18 */ unsigned int num_adjusts;
	/* 0x1c */ rtx_def *adjust[8];
};

typedef mips_args CUMULATIVE_ARGS;

enum mips_builtins {
	MIPS5900_BUILTIN_PABSH = 0,
	MIPS5900_BUILTIN_PABSW = 1,
	MIPS5900_BUILTIN_PADDB = 2,
	MIPS5900_BUILTIN_PADDH = 3,
	MIPS5900_BUILTIN_PADDSB = 4,
	MIPS5900_BUILTIN_PADDSH = 5,
	MIPS5900_BUILTIN_PADDSW = 6,
	MIPS5900_BUILTIN_PADDUB = 7,
	MIPS5900_BUILTIN_PADDUH = 8,
	MIPS5900_BUILTIN_PADDUW = 9,
	MIPS5900_BUILTIN_PADDW = 10,
	MIPS5900_BUILTIN_PADSBH = 11,
	MIPS5900_BUILTIN_PAND = 12,
	MIPS5900_BUILTIN_PCEQB = 13,
	MIPS5900_BUILTIN_PCEQH = 14,
	MIPS5900_BUILTIN_PCEQW = 15,
	MIPS5900_BUILTIN_PCGTB = 16,
	MIPS5900_BUILTIN_PCGTH = 17,
	MIPS5900_BUILTIN_PCGTW = 18,
	MIPS5900_BUILTIN_PCPYH = 19,
	MIPS5900_BUILTIN_PCPYLD = 20,
	MIPS5900_BUILTIN_PCPYUD = 21,
	MIPS5900_BUILTIN_PDIVBW = 22,
	MIPS5900_BUILTIN_PDIVUW = 23,
	MIPS5900_BUILTIN_PDIVW = 24,
	MIPS5900_BUILTIN_PHMADH = 25,
	MIPS5900_BUILTIN_PHMSBH = 26,
	MIPS5900_BUILTIN_PMADDH = 27,
	MIPS5900_BUILTIN_PMADDUW = 28,
	MIPS5900_BUILTIN_PMADDW = 29,
	MIPS5900_BUILTIN_PMSUBH = 30,
	MIPS5900_BUILTIN_PMSUBW = 31,
	MIPS5900_BUILTIN_PMTHI = 32,
	MIPS5900_BUILTIN_PMTLO = 33,
	MIPS5900_BUILTIN_PMTHL_LW = 34,
	MIPS5900_BUILTIN_PMULTH = 35,
	MIPS5900_BUILTIN_PMULTUW = 36,
	MIPS5900_BUILTIN_PMULTW = 37,
	MIPS5900_BUILTIN_PEXCH = 38,
	MIPS5900_BUILTIN_PEXCW = 39,
	MIPS5900_BUILTIN_PEXEH = 40,
	MIPS5900_BUILTIN_PEXEW = 41,
	MIPS5900_BUILTIN_PEXT5 = 42,
	MIPS5900_BUILTIN_PEXTLB = 43,
	MIPS5900_BUILTIN_PEXTLH = 44,
	MIPS5900_BUILTIN_PEXTLW = 45,
	MIPS5900_BUILTIN_PEXTUB = 46,
	MIPS5900_BUILTIN_PEXTUH = 47,
	MIPS5900_BUILTIN_PEXTUW = 48,
	MIPS5900_BUILTIN_PINTH = 49,
	MIPS5900_BUILTIN_PINTEH = 50,
	MIPS5900_BUILTIN_PLZCW = 51,
	MIPS5900_BUILTIN_PMAXH = 52,
	MIPS5900_BUILTIN_PMAXW = 53,
	MIPS5900_BUILTIN_PMINH = 54,
	MIPS5900_BUILTIN_PMINW = 55,
	MIPS5900_BUILTIN_PNOR = 56,
	MIPS5900_BUILTIN_POR = 57,
	MIPS5900_BUILTIN_PPAC5 = 58,
	MIPS5900_BUILTIN_PPACB = 59,
	MIPS5900_BUILTIN_PPACH = 60,
	MIPS5900_BUILTIN_PPACW = 61,
	MIPS5900_BUILTIN_PREVH = 62,
	MIPS5900_BUILTIN_PROT3W = 63,
	MIPS5900_BUILTIN_PSLLH = 64,
	MIPS5900_BUILTIN_PSLLVW = 65,
	MIPS5900_BUILTIN_PSLLW = 66,
	MIPS5900_BUILTIN_PSRAH = 67,
	MIPS5900_BUILTIN_PSRAVW = 68,
	MIPS5900_BUILTIN_PSRAW = 69,
	MIPS5900_BUILTIN_PSRLH = 70,
	MIPS5900_BUILTIN_PSRLVW = 71,
	MIPS5900_BUILTIN_PSRLW = 72,
	MIPS5900_BUILTIN_PSUBB = 73,
	MIPS5900_BUILTIN_PSUBH = 74,
	MIPS5900_BUILTIN_PSUBSB = 75,
	MIPS5900_BUILTIN_PSUBSH = 76,
	MIPS5900_BUILTIN_PSUBSW = 77,
	MIPS5900_BUILTIN_PSUBUB = 78,
	MIPS5900_BUILTIN_PSUBUH = 79,
	MIPS5900_BUILTIN_PSUBUW = 80,
	MIPS5900_BUILTIN_PSUBW = 81,
	MIPS5900_BUILTIN_PXOR = 82,
	MIPS5900_BUILTIN_MFSA = 83,
	MIPS5900_BUILTIN_MTSA = 84,
	MIPS5900_BUILTIN_MTSAB = 85,
	MIPS5900_BUILTIN_MTSAH = 86,
	MIPS5900_BUILTIN_QFSRV = 87,
	MIPS5900_BUILTIN_PMFHI = 88,
	MIPS5900_BUILTIN_PMFLO = 89,
	MIPS5900_BUILTIN_PMFHL_LW = 90,
	MIPS5900_BUILTIN_PMFHL_UW = 91,
	MIPS5900_BUILTIN_PMFHL_SLW = 92,
	MIPS5900_BUILTIN_PMFHL_LH = 93,
	MIPS5900_BUILTIN_PMFHL_SH = 94,
	MIPS_BUILTIN_MAX = 95
};

typedef int ptrdiff_t;

enum machine_mode {
	VOIDmode = 0,
	BImode = 1,
	QImode = 2,
	HImode = 3,
	SImode = 4,
	DImode = 5,
	TImode = 6,
	OImode = 7,
	PQImode = 8,
	PHImode = 9,
	PSImode = 10,
	PDImode = 11,
	QFmode = 12,
	HFmode = 13,
	TQFmode = 14,
	SFmode = 15,
	DFmode = 16,
	XFmode = 17,
	TFmode = 18,
	QCmode = 19,
	HCmode = 20,
	SCmode = 21,
	DCmode = 22,
	XCmode = 23,
	TCmode = 24,
	CQImode = 25,
	CHImode = 26,
	CSImode = 27,
	CDImode = 28,
	CTImode = 29,
	COImode = 30,
	V2QImode = 31,
	V2HImode = 32,
	V2SImode = 33,
	V2DImode = 34,
	V4QImode = 35,
	V4HImode = 36,
	V4SImode = 37,
	V4DImode = 38,
	V8QImode = 39,
	V8HImode = 40,
	V8SImode = 41,
	V8DImode = 42,
	V16QImode = 43,
	V2SFmode = 44,
	V2DFmode = 45,
	V4SFmode = 46,
	V4DFmode = 47,
	V8SFmode = 48,
	V8DFmode = 49,
	BLKmode = 50,
	CCmode = 51,
	MAX_MACHINE_MODE = 52
};

enum mode_class {
	MODE_RANDOM = 0,
	MODE_INT = 1,
	MODE_FLOAT = 2,
	MODE_PARTIAL_INT = 3,
	MODE_CC = 4,
	MODE_COMPLEX_INT = 5,
	MODE_COMPLEX_FLOAT = 6,
	MODE_VECTOR_INT = 7,
	MODE_VECTOR_FLOAT = 8,
	MAX_MODE_CLASS = 9
};

typedef signed char QItype;
typedef unsigned char UQItype;
typedef short int HItype;
typedef short unsigned int UHItype;
typedef int SItype;
typedef unsigned int USItype;
typedef long int DItype;
typedef long unsigned int UDItype;
typedef float SFtype;
typedef double DFtype;
typedef long int word_type;

struct DWstruct { // 0x8
	/* 0x0 */ SItype low;
	/* 0x4 */ SItype high;
};

typedef union { // 0x8
	/* 0x0 */ DWstruct s;
	/* 0x0 */ DItype ll;
} DWunion;

typedef void (*func_ptr)(/* parameters unknown */);

typedef struct { // 0x478
	/* 0x000 */ void *cfa;
	/* 0x004 */ void *eh_ptr;
	/* 0x008 */ long int cfa_offset;
	/* 0x010 */ long int base_offset;
	/* 0x018 */ long int args_size;
	/* 0x020 */ long int reg_or_offset[123];
	/* 0x3f8 */ short unsigned int cfa_reg;
	/* 0x3fa */ short unsigned int retaddr_column;
	/* 0x3fc */ char saved[123];
	/* 0x477 */ char indirect;
} frame_state;

struct object { // 0x18
	/* 0x00 */ void *pc_begin;
	/* 0x04 */ void *pc_end;
	/* 0x08 */ dwarf_fde *fde_begin;
	/* 0x0c */ dwarf_fde **fde_array;
	/* 0x10 */ size_t count;
	/* 0x14 */ object *next;
};

// warning: multiple differing types with the same name (type name not equal)
typedef USItype fractype;
// warning: multiple differing types with the same name (type name not equal)
typedef UHItype halffractype;
// warning: multiple differing types with the same name (type name not equal)
typedef SFtype FLO_type;
// warning: multiple differing types with the same name (type name not equal)
typedef SItype intfrac;

typedef enum {
	CLASS_SNAN = 0,
	CLASS_QNAN = 1,
	CLASS_ZERO = 2,
	CLASS_NUMBER = 3,
	CLASS_INFINITY = 4
} fp_class_type;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x10
	/* 0x0 */ fp_class_type class;
	/* 0x4 */ unsigned int sign;
	/* 0x8 */ int normal_exp;
	/* 0xc */ union { // 0x4
		/* 0xc */ fractype ll;
		/* 0xc */ halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (size not equal)
typedef union { // 0x4
	/* 0x0 */ FLO_type value;
	/* 0x0 */ fractype value_raw;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ fractype fraction : 23;
		/* 0x2:7 */ unsigned int exp : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} bits;
} FLO_union_type;

// warning: multiple differing types with the same name (type name not equal)
typedef UDItype fractype;
// warning: multiple differing types with the same name (type name not equal)
typedef USItype halffractype;
// warning: multiple differing types with the same name (type name not equal)
typedef DFtype FLO_type;
// warning: multiple differing types with the same name (type name not equal)
typedef DItype intfrac;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x18
	/* 0x00 */ fp_class_type class;
	/* 0x04 */ unsigned int sign;
	/* 0x08 */ int normal_exp;
	/* 0x10 */ union { // 0x8
		/* 0x10 */ fractype ll;
		/* 0x10 */ halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (size not equal)
typedef union { // 0x8
	/* 0x0 */ FLO_type value;
	/* 0x0 */ fractype value_raw;
	/* 0x0 */ halffractype words[2];
	/* 0x0 */ struct { // 0x8
		/* 0x0:0 */ fractype fraction : 52;
		/* 0x6:4 */ unsigned int exp : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} bits;
} FLO_union_type;

enum dwarf_tag {
	DW_TAG_padding = 0,
	DW_TAG_array_type = 1,
	DW_TAG_class_type = 2,
	DW_TAG_entry_point = 3,
	DW_TAG_enumeration_type = 4,
	DW_TAG_formal_parameter = 5,
	DW_TAG_imported_declaration = 8,
	DW_TAG_label = 10,
	DW_TAG_lexical_block = 11,
	DW_TAG_member = 13,
	DW_TAG_pointer_type = 15,
	DW_TAG_reference_type = 16,
	DW_TAG_compile_unit = 17,
	DW_TAG_string_type = 18,
	DW_TAG_structure_type = 19,
	DW_TAG_subroutine_type = 21,
	DW_TAG_typedef = 22,
	DW_TAG_union_type = 23,
	DW_TAG_unspecified_parameters = 24,
	DW_TAG_variant = 25,
	DW_TAG_common_block = 26,
	DW_TAG_common_inclusion = 27,
	DW_TAG_inheritance = 28,
	DW_TAG_inlined_subroutine = 29,
	DW_TAG_module = 30,
	DW_TAG_ptr_to_member_type = 31,
	DW_TAG_set_type = 32,
	DW_TAG_subrange_type = 33,
	DW_TAG_with_stmt = 34,
	DW_TAG_access_declaration = 35,
	DW_TAG_base_type = 36,
	DW_TAG_catch_block = 37,
	DW_TAG_const_type = 38,
	DW_TAG_constant = 39,
	DW_TAG_enumerator = 40,
	DW_TAG_file_type = 41,
	DW_TAG_friend = 42,
	DW_TAG_namelist = 43,
	DW_TAG_namelist_item = 44,
	DW_TAG_packed_type = 45,
	DW_TAG_subprogram = 46,
	DW_TAG_template_type_param = 47,
	DW_TAG_template_value_param = 48,
	DW_TAG_thrown_type = 49,
	DW_TAG_try_block = 50,
	DW_TAG_variant_part = 51,
	DW_TAG_variable = 52,
	DW_TAG_volatile_type = 53,
	DW_TAG_MIPS_loop = 16513,
	DW_TAG_format_label = 16641,
	DW_TAG_function_template = 16642,
	DW_TAG_class_template = 16643
};

enum dwarf_form {
	DW_FORM_addr = 1,
	DW_FORM_block2 = 3,
	DW_FORM_block4 = 4,
	DW_FORM_data2 = 5,
	DW_FORM_data4 = 6,
	DW_FORM_data8 = 7,
	DW_FORM_string = 8,
	DW_FORM_block = 9,
	DW_FORM_block1 = 10,
	DW_FORM_data1 = 11,
	DW_FORM_flag = 12,
	DW_FORM_sdata = 13,
	DW_FORM_strp = 14,
	DW_FORM_udata = 15,
	DW_FORM_ref_addr = 16,
	DW_FORM_ref1 = 17,
	DW_FORM_ref2 = 18,
	DW_FORM_ref4 = 19,
	DW_FORM_ref8 = 20,
	DW_FORM_ref_udata = 21,
	DW_FORM_indirect = 22
};

enum dwarf_attribute {
	DW_AT_sibling = 1,
	DW_AT_location = 2,
	DW_AT_name = 3,
	DW_AT_ordering = 9,
	DW_AT_subscr_data = 10,
	DW_AT_byte_size = 11,
	DW_AT_bit_offset = 12,
	DW_AT_bit_size = 13,
	DW_AT_element_list = 15,
	DW_AT_stmt_list = 16,
	DW_AT_low_pc = 17,
	DW_AT_high_pc = 18,
	DW_AT_language = 19,
	DW_AT_member = 20,
	DW_AT_discr = 21,
	DW_AT_discr_value = 22,
	DW_AT_visibility = 23,
	DW_AT_import = 24,
	DW_AT_string_length = 25,
	DW_AT_common_reference = 26,
	DW_AT_comp_dir = 27,
	DW_AT_const_value = 28,
	DW_AT_containing_type = 29,
	DW_AT_default_value = 30,
	DW_AT_inline = 32,
	DW_AT_is_optional = 33,
	DW_AT_lower_bound = 34,
	DW_AT_producer = 37,
	DW_AT_prototyped = 39,
	DW_AT_return_addr = 42,
	DW_AT_start_scope = 44,
	DW_AT_stride_size = 46,
	DW_AT_upper_bound = 47,
	DW_AT_abstract_origin = 49,
	DW_AT_accessibility = 50,
	DW_AT_address_class = 51,
	DW_AT_artificial = 52,
	DW_AT_base_types = 53,
	DW_AT_calling_convention = 54,
	DW_AT_count = 55,
	DW_AT_data_member_location = 56,
	DW_AT_decl_column = 57,
	DW_AT_decl_file = 58,
	DW_AT_decl_line = 59,
	DW_AT_declaration = 60,
	DW_AT_discr_list = 61,
	DW_AT_encoding = 62,
	DW_AT_external = 63,
	DW_AT_frame_base = 64,
	DW_AT_friend = 65,
	DW_AT_identifier_case = 66,
	DW_AT_macro_info = 67,
	DW_AT_namelist_items = 68,
	DW_AT_priority = 69,
	DW_AT_segment = 70,
	DW_AT_specification = 71,
	DW_AT_static_link = 72,
	DW_AT_type = 73,
	DW_AT_use_location = 74,
	DW_AT_variable_parameter = 75,
	DW_AT_virtuality = 76,
	DW_AT_vtable_elem_location = 77,
	DW_AT_MIPS_fde = 8193,
	DW_AT_MIPS_loop_begin = 8194,
	DW_AT_MIPS_tail_loop_begin = 8195,
	DW_AT_MIPS_epilog_begin = 8196,
	DW_AT_MIPS_loop_unroll_factor = 8197,
	DW_AT_MIPS_software_pipeline_depth = 8198,
	DW_AT_MIPS_linkage_name = 8199,
	DW_AT_MIPS_stride = 8200,
	DW_AT_MIPS_abstract_name = 8201,
	DW_AT_MIPS_clone_origin = 8202,
	DW_AT_MIPS_has_inlines = 8203,
	DW_AT_sf_names = 8449,
	DW_AT_src_info = 8450,
	DW_AT_mac_info = 8451,
	DW_AT_src_coords = 8452,
	DW_AT_body_begin = 8453,
	DW_AT_body_end = 8454
};

enum dwarf_location_atom {
	DW_OP_addr = 3,
	DW_OP_deref = 6,
	DW_OP_const1u = 8,
	DW_OP_const1s = 9,
	DW_OP_const2u = 10,
	DW_OP_const2s = 11,
	DW_OP_const4u = 12,
	DW_OP_const4s = 13,
	DW_OP_const8u = 14,
	DW_OP_const8s = 15,
	DW_OP_constu = 16,
	DW_OP_consts = 17,
	DW_OP_dup = 18,
	DW_OP_drop = 19,
	DW_OP_over = 20,
	DW_OP_pick = 21,
	DW_OP_swap = 22,
	DW_OP_rot = 23,
	DW_OP_xderef = 24,
	DW_OP_abs = 25,
	DW_OP_and = 26,
	DW_OP_div = 27,
	DW_OP_minus = 28,
	DW_OP_mod = 29,
	DW_OP_mul = 30,
	DW_OP_neg = 31,
	DW_OP_not = 32,
	DW_OP_or = 33,
	DW_OP_plus = 34,
	DW_OP_plus_uconst = 35,
	DW_OP_shl = 36,
	DW_OP_shr = 37,
	DW_OP_shra = 38,
	DW_OP_xor = 39,
	DW_OP_bra = 40,
	DW_OP_eq = 41,
	DW_OP_ge = 42,
	DW_OP_gt = 43,
	DW_OP_le = 44,
	DW_OP_lt = 45,
	DW_OP_ne = 46,
	DW_OP_skip = 47,
	DW_OP_lit0 = 48,
	DW_OP_lit1 = 49,
	DW_OP_lit2 = 50,
	DW_OP_lit3 = 51,
	DW_OP_lit4 = 52,
	DW_OP_lit5 = 53,
	DW_OP_lit6 = 54,
	DW_OP_lit7 = 55,
	DW_OP_lit8 = 56,
	DW_OP_lit9 = 57,
	DW_OP_lit10 = 58,
	DW_OP_lit11 = 59,
	DW_OP_lit12 = 60,
	DW_OP_lit13 = 61,
	DW_OP_lit14 = 62,
	DW_OP_lit15 = 63,
	DW_OP_lit16 = 64,
	DW_OP_lit17 = 65,
	DW_OP_lit18 = 66,
	DW_OP_lit19 = 67,
	DW_OP_lit20 = 68,
	DW_OP_lit21 = 69,
	DW_OP_lit22 = 70,
	DW_OP_lit23 = 71,
	DW_OP_lit24 = 72,
	DW_OP_lit25 = 73,
	DW_OP_lit26 = 74,
	DW_OP_lit27 = 75,
	DW_OP_lit28 = 76,
	DW_OP_lit29 = 77,
	DW_OP_lit30 = 78,
	DW_OP_lit31 = 79,
	DW_OP_reg0 = 80,
	DW_OP_reg1 = 81,
	DW_OP_reg2 = 82,
	DW_OP_reg3 = 83,
	DW_OP_reg4 = 84,
	DW_OP_reg5 = 85,
	DW_OP_reg6 = 86,
	DW_OP_reg7 = 87,
	DW_OP_reg8 = 88,
	DW_OP_reg9 = 89,
	DW_OP_reg10 = 90,
	DW_OP_reg11 = 91,
	DW_OP_reg12 = 92,
	DW_OP_reg13 = 93,
	DW_OP_reg14 = 94,
	DW_OP_reg15 = 95,
	DW_OP_reg16 = 96,
	DW_OP_reg17 = 97,
	DW_OP_reg18 = 98,
	DW_OP_reg19 = 99,
	DW_OP_reg20 = 100,
	DW_OP_reg21 = 101,
	DW_OP_reg22 = 102,
	DW_OP_reg23 = 103,
	DW_OP_reg24 = 104,
	DW_OP_reg25 = 105,
	DW_OP_reg26 = 106,
	DW_OP_reg27 = 107,
	DW_OP_reg28 = 108,
	DW_OP_reg29 = 109,
	DW_OP_reg30 = 110,
	DW_OP_reg31 = 111,
	DW_OP_breg0 = 112,
	DW_OP_breg1 = 113,
	DW_OP_breg2 = 114,
	DW_OP_breg3 = 115,
	DW_OP_breg4 = 116,
	DW_OP_breg5 = 117,
	DW_OP_breg6 = 118,
	DW_OP_breg7 = 119,
	DW_OP_breg8 = 120,
	DW_OP_breg9 = 121,
	DW_OP_breg10 = 122,
	DW_OP_breg11 = 123,
	DW_OP_breg12 = 124,
	DW_OP_breg13 = 125,
	DW_OP_breg14 = 126,
	DW_OP_breg15 = 127,
	DW_OP_breg16 = 128,
	DW_OP_breg17 = 129,
	DW_OP_breg18 = 130,
	DW_OP_breg19 = 131,
	DW_OP_breg20 = 132,
	DW_OP_breg21 = 133,
	DW_OP_breg22 = 134,
	DW_OP_breg23 = 135,
	DW_OP_breg24 = 136,
	DW_OP_breg25 = 137,
	DW_OP_breg26 = 138,
	DW_OP_breg27 = 139,
	DW_OP_breg28 = 140,
	DW_OP_breg29 = 141,
	DW_OP_breg30 = 142,
	DW_OP_breg31 = 143,
	DW_OP_regx = 144,
	DW_OP_fbreg = 145,
	DW_OP_bregx = 146,
	DW_OP_piece = 147,
	DW_OP_deref_size = 148,
	DW_OP_xderef_size = 149,
	DW_OP_nop = 150
};

enum dwarf_type {
	DW_ATE_void = 0,
	DW_ATE_address = 1,
	DW_ATE_boolean = 2,
	DW_ATE_complex_float = 3,
	DW_ATE_float = 4,
	DW_ATE_signed = 5,
	DW_ATE_signed_char = 6,
	DW_ATE_unsigned = 7,
	DW_ATE_unsigned_char = 8
};

enum dwarf_array_dim_ordering {
	DW_ORD_row_major = 0,
	DW_ORD_col_major = 1
};

enum dwarf_access_attribute {
	DW_ACCESS_public = 1,
	DW_ACCESS_protected = 2,
	DW_ACCESS_private = 3
};

enum dwarf_visibility_attribute {
	DW_VIS_local = 1,
	DW_VIS_exported = 2,
	DW_VIS_qualified = 3
};

enum dwarf_virtuality_attribute {
	DW_VIRTUALITY_none = 0,
	DW_VIRTUALITY_virtual = 1,
	DW_VIRTUALITY_pure_virtual = 2
};

enum dwarf_id_case {
	DW_ID_case_sensitive = 0,
	DW_ID_up_case = 1,
	DW_ID_down_case = 2,
	DW_ID_case_insensitive = 3
};

enum dwarf_calling_convention {
	DW_CC_normal = 1,
	DW_CC_program = 2,
	DW_CC_nocall = 3
};

enum dwarf_inline_attribute {
	DW_INL_not_inlined = 0,
	DW_INL_inlined = 1,
	DW_INL_declared_not_inlined = 2,
	DW_INL_declared_inlined = 3
};

enum dwarf_discrim_list {
	DW_DSC_label = 0,
	DW_DSC_range = 1
};

enum dwarf_line_number_ops {
	DW_LNS_extended_op = 0,
	DW_LNS_copy = 1,
	DW_LNS_advance_pc = 2,
	DW_LNS_advance_line = 3,
	DW_LNS_set_file = 4,
	DW_LNS_set_column = 5,
	DW_LNS_negate_stmt = 6,
	DW_LNS_set_basic_block = 7,
	DW_LNS_const_add_pc = 8,
	DW_LNS_fixed_advance_pc = 9
};

enum dwarf_line_number_x_ops {
	DW_LNE_end_sequence = 1,
	DW_LNE_set_address = 2,
	DW_LNE_define_file = 3
};

enum dwarf_call_frame_info {
	DW_CFA_advance_loc = 64,
	DW_CFA_offset = 128,
	DW_CFA_restore = 192,
	DW_CFA_nop = 0,
	DW_CFA_set_loc = 1,
	DW_CFA_advance_loc1 = 2,
	DW_CFA_advance_loc2 = 3,
	DW_CFA_advance_loc4 = 4,
	DW_CFA_offset_extended = 5,
	DW_CFA_restore_extended = 6,
	DW_CFA_undefined = 7,
	DW_CFA_same_value = 8,
	DW_CFA_register = 9,
	DW_CFA_remember_state = 10,
	DW_CFA_restore_state = 11,
	DW_CFA_def_cfa = 12,
	DW_CFA_def_cfa_register = 13,
	DW_CFA_def_cfa_offset = 14,
	DW_CFA_def_cfa_expression = 15,
	DW_CFA_expression = 16,
	DW_CFA_MIPS_advance_loc8 = 29,
	DW_CFA_GNU_window_save = 45,
	DW_CFA_GNU_args_size = 46,
	DW_CFA_GNU_negative_offset_extended = 47
};

enum dwarf_source_language {
	DW_LANG_C89 = 1,
	DW_LANG_C = 2,
	DW_LANG_Ada83 = 3,
	DW_LANG_C_plus_plus = 4,
	DW_LANG_Cobol74 = 5,
	DW_LANG_Cobol85 = 6,
	DW_LANG_Fortran77 = 7,
	DW_LANG_Fortran90 = 8,
	DW_LANG_Pascal83 = 9,
	DW_LANG_Modula2 = 10,
	DW_LANG_Java = 11,
	DW_LANG_Mips_Assembler = 32769
};

enum dwarf_macinfo_record_type {
	DW_MACINFO_define = 1,
	DW_MACINFO_undef = 2,
	DW_MACINFO_start_file = 3,
	DW_MACINFO_end_file = 4,
	DW_MACINFO_vendor_ext = 255
};

typedef int __gthread_key_t;
typedef int __gthread_once_t;
typedef int __gthread_mutex_t;
typedef int sword;
typedef unsigned int uword;
typedef unsigned int uaddr;
typedef int saddr;
typedef unsigned char ubyte;

struct dwarf_cie { // 0xc
	/* 0x0 */ uword length;
	/* 0x4 */ sword CIE_id;
	/* 0x8 */ ubyte version;
	/* 0x9 */ char augmentation[0];
};

struct dwarf_fde { // 0x10
	/* 0x0 */ uword length;
	/* 0x4 */ sword CIE_delta;
	/* 0x8 */ void *pc_begin;
	/* 0xc */ uaddr pc_range;
};

typedef dwarf_fde fde;

struct cie_info { // 0x14
	/* 0x00 */ char *augmentation;
	/* 0x04 */ void *eh_ptr;
	/* 0x08 */ int code_align;
	/* 0x0c */ int data_align;
	/* 0x10 */ unsigned int ra_regno;
};

struct frame_state_internal { // 0x480
	/* 0x000 */ frame_state s;
	/* 0x478 */ frame_state_internal *saved_state;
};

union unaligned { // 0x8
	/* 0x0 */ void *p;
	/* 0x0 */ short unsigned int b2;
	/* 0x0 */ unsigned int b4;
	/* 0x0 */ long unsigned int b8;
};

typedef struct { // 0x8
	/* 0x0 */ fde **array;
	/* 0x4 */ size_t count;
} fde_vector;

typedef struct { // 0x10
	/* 0x0 */ fde_vector linear;
	/* 0x8 */ fde_vector erratic;
} fde_accumulator;

typedef short unsigned int ushort;
typedef unsigned int uint;
typedef long int daddr_t;
typedef char *caddr_t;
typedef short unsigned int ino_t;
typedef short int dev_t;
typedef long int off_t;
typedef short unsigned int uid_t;
typedef short unsigned int gid_t;
typedef int pid_t;
typedef long int key_t;
typedef long int ssize_t;
typedef unsigned int mode_t;
typedef short unsigned int nlink_t;
typedef long int fd_mask;

typedef struct { // 0x8
	/* 0x0 */ fd_mask fds_bits[1];
} _types_fd_set;

typedef long unsigned int sigset_t;

struct sigaction { // 0x18
	/* 0x00 */ void (*sa_handler)(/* parameters unknown */);
	/* 0x08 */ sigset_t sa_mask;
	/* 0x10 */ int sa_flags;
};

typedef int sig_atomic_t;
typedef void (*_sig_func_ptr)(/* parameters unknown */);
typedef long int _off_t;
typedef long int _ssize_t;

struct mallinfo { // 0x28
	/* 0x00 */ int arena;
	/* 0x04 */ int ordblks;
	/* 0x08 */ int smblks;
	/* 0x0c */ int hblks;
	/* 0x10 */ int hblkhd;
	/* 0x14 */ int usmblks;
	/* 0x18 */ int fsmblks;
	/* 0x1c */ int uordblks;
	/* 0x20 */ int fordblks;
	/* 0x24 */ int keepcost;
};

struct malloc_chunk { // 0x10
	/* 0x0 */ size_t prev_size;
	/* 0x4 */ size_t size;
	/* 0x8 */ malloc_chunk *fd;
	/* 0xc */ malloc_chunk *bk;
};

typedef malloc_chunk *mchunkptr;
typedef malloc_chunk *mbinptr;
typedef __gnuc_va_list va_list;

struct __siov { // 0x8
	/* 0x0 */ void *iov_base;
	/* 0x4 */ size_t iov_len;
};

struct __suio { // 0xc
	/* 0x0 */ __siov *uio_iov;
	/* 0x4 */ int uio_iovcnt;
	/* 0x8 */ int uio_resid;
};

typedef union { // 0x10
	/* 0x0 */ double value;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ unsigned int fraction1;
		/* 0x4:0 */ unsigned int fraction0 : 20;
		/* 0x6:4 */ unsigned int exponent : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} number;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ unsigned int function1;
		/* 0x4:0 */ unsigned int function0 : 19;
		/* 0x6:3 */ unsigned int quiet : 1;
		/* 0x6:4 */ unsigned int exponent : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} nan;
	/* 0x0 */ struct { // 0x10
		/* 0x0 */ long unsigned int lsw;
		/* 0x8 */ long unsigned int msw;
	} parts;
	/* 0x0 */ long int aslong[2];
} __ieee_double_shape_type;

typedef union { // 0x8
	/* 0x0 */ float value;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ unsigned int fraction0 : 7;
		/* 0x0:7 */ unsigned int fraction1 : 16;
		/* 0x2:7 */ unsigned int exponent : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} number;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ unsigned int function1 : 16;
		/* 0x2:0 */ unsigned int function0 : 6;
		/* 0x2:6 */ unsigned int quiet : 1;
		/* 0x2:7 */ unsigned int exponent : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} nan;
	/* 0x0 */ long int p1;
} __ieee_float_shape_type;

typedef int fp_rnd;
typedef int fp_except;
typedef int fp_rdi;

union double_union { // 0x8
	/* 0x0 */ double d;
	/* 0x0 */ __uint32_t i[2];
};

struct lconv { // 0x30
	/* 0x00 */ char *decimal_point;
	/* 0x04 */ char *thousands_sep;
	/* 0x08 */ char *grouping;
	/* 0x0c */ char *int_curr_symbol;
	/* 0x10 */ char *currency_symbol;
	/* 0x14 */ char *mon_decimal_point;
	/* 0x18 */ char *mon_thousands_sep;
	/* 0x1c */ char *mon_grouping;
	/* 0x20 */ char *positive_sign;
	/* 0x24 */ char *negative_sign;
	/* 0x28 */ char int_frac_digits;
	/* 0x29 */ char frac_digits;
	/* 0x2a */ char p_cs_precedes;
	/* 0x2b */ char p_sep_by_space;
	/* 0x2c */ char n_cs_precedes;
	/* 0x2d */ char n_sep_by_space;
	/* 0x2e */ char p_sign_posn;
	/* 0x2f */ char n_sign_posn;
};

enum {
	OCT = 0,
	DEC = 1,
	HEX = 2
};

struct flock { // 0x20
	/* 0x00 */ short int l_type;
	/* 0x02 */ short int l_whence;
	/* 0x08 */ long int l_start;
	/* 0x10 */ long int l_len;
	/* 0x18 */ short int l_pid;
	/* 0x1a */ short int l_xxx;
};

struct eflock { // 0x30
	/* 0x00 */ short int l_type;
	/* 0x02 */ short int l_whence;
	/* 0x08 */ long int l_start;
	/* 0x10 */ long int l_len;
	/* 0x18 */ short int l_pid;
	/* 0x1a */ short int l_xxx;
	/* 0x20 */ long int l_rpid;
	/* 0x28 */ long int l_rsys;
};

struct stat { // 0x68
	/* 0x00 */ dev_t st_dev;
	/* 0x02 */ ino_t st_ino;
	/* 0x04 */ mode_t st_mode;
	/* 0x08 */ nlink_t st_nlink;
	/* 0x0a */ uid_t st_uid;
	/* 0x0c */ gid_t st_gid;
	/* 0x0e */ dev_t st_rdev;
	/* 0x10 */ off_t st_size;
	/* 0x18 */ time_t st_atime;
	/* 0x20 */ long int st_spare1;
	/* 0x28 */ time_t st_mtime;
	/* 0x30 */ long int st_spare2;
	/* 0x38 */ time_t st_ctime;
	/* 0x40 */ long int st_spare3;
	/* 0x48 */ long int st_blksize;
	/* 0x50 */ long int st_blocks;
	/* 0x58 */ long int st_spare4[2];
};

// warning: multiple differing types with the same name (type name not equal)
typedef unsigned int __ULong;
struct rtx_def;

// lost+found.h

typedef struct {
	int real;
	int imag;
} complex int;

typedef void *__builtin_va_list;
typedef long unsigned int clock_t;

struct tm {
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};

typedef struct {
	_Bigint *_next;
	int _k;
	int _maxwds;
	int _sign;
	int _wds;
	__ULong _x[1];
} _Bigint;

struct _atexit {
	_atexit *_next;
	int _ind;
	void (*_fns[32])(/* parameters unknown */);
};

struct __sbuf {
	unsigned char *_base;
	int _size;
};

struct __sFILE {
	unsigned char *_p;
	int _r;
	int _w;
	short int _flags;
	short int _file;
	__sbuf _bf;
	int _lbfsize;
	void *_cookie;
	int (*_read)(/* parameters unknown */);
	int (*_write)(/* parameters unknown */);
	_fpos_t (*_seek)(/* parameters unknown */);
	int (*_close)(/* parameters unknown */);
	__sbuf _ub;
	unsigned char *_up;
	int _ur;
	unsigned char _ubuf[3];
	unsigned char _nbuf[1];
	__sbuf _lb;
	int _blksize;
	int _offset;
	_reent *_data;
};

struct _reent {
	int _errno;
	__sFILE *_stdin;
	__sFILE *_stdout;
	__sFILE *_stderr;
	int _inc;
	char _emergency[25];
	int _current_category;
	char *_current_locale;
	int __sdidinit;
	void (*__cleanup)(/* parameters unknown */);
	_Bigint *_result;
	int _result_k;
	_Bigint *_p5s;
	_Bigint **_freelist;
	int _cvtlen;
	char *_cvtbuf;
	union {
		struct {
			unsigned int _unused_rand;
			char *_strtok_last;
			char _asctime_buf[26];
			tm _localtime_buf;
			int _gamma_signgam;
			long long unsigned int _rand_next;
		} _reent;
		struct {
			unsigned char *_nextf[30];
			unsigned int _nmalloc[30];
		} _unused;
	} _new;
	_atexit *_atexit;
	_atexit _atexit0;
	void (**_sig_func)(/* parameters unknown */);
	_glue __sglue;
	__sFILE __sf[3];
};

typedef struct {
	int quot;
	int rem;
} div_t;

typedef struct {
	long int quot;
	long int rem;
} ldiv_t;

typedef long unsigned int u_long;

struct ThreadParam {
	int status;
	void *entry;
	void *stack;
	int stackSize;
	void *gpReg;
	int initPriority;
	int currentPriority;
	u_int attr;
	u_int option;
	int waitType;
	int waitId;
	int wakeupCount;
};

struct SemaParam {
	int currentCount;
	int maxCount;
	int initCount;
	int numWaitThreads;
	u_int attr;
	u_int option;
};

typedef struct {
	u_long128 vf[32];
	u_int status;
	u_int mac;
	u_int clipping;
	u_int r;
	u_int i;
	u_int q;
	u_short vi[16];
} sceDevVu0Cnd;

typedef struct {
	u_long128 vf[32];
	u_int status;
	u_int mac;
	u_int clipping;
	u_int r;
	u_int i;
	u_int q;
	u_int p;
	u_short vi[16];
} sceDevVu1Cnd;

typedef struct {
	u_long128 tag;
	u_int stat;
	u_int count;
	u_int p3count;
	u_int p3tag;
	u_int pad;
} sceDevGifCnd;

typedef struct {
	u_int row[4];
	u_int col[4];
	u_int mask;
	u_int code;
	u_int stat;
	u_short itop;
	u_short itops;
	u_short mark;
	u_short num;
	u_char error;
	u_char cl;
	u_char wl;
	u_char cmod;
	u_char pad;
} sceDevVif0Cnd;

typedef struct {
	u_int row[4];
	u_int col[4];
	u_int mask;
	u_int code;
	u_int stat;
	u_short itop;
	u_short itops;
	u_short base;
	u_short offset;
	u_short top;
	u_short tops;
	u_short mark;
	u_short num;
	u_char error;
	u_char cl;
	u_char wl;
	u_char cmod;
	u_char pad;
} sceDevVif1Cnd;

struct _sceGifPackRgbaq {
	u_int R;
	u_int G;
	u_int B;
	u_int A;
};

typedef _sceGifPackRgbaq sceGifPackRgbaq;

struct _sceGifPackAd {
	u_long DATA;
	u_long ADDR;
};

typedef _sceGifPackAd sceGifPackAd;

struct _sceGifPackSt {
	float S;
	float T;
	float Q;
	u_int pad96;
};

typedef _sceGifPackSt sceGifPackSt;

struct _sceGifPackUv {
	int U;
	int V;
	long int pad64;
};

typedef _sceGifPackUv sceGifPackUv;

struct _sceGifPackXyzf {
	int X;
	int Y;
	u_int Z;
	u_int F : 12;
	u_int pad108 : 3;
	u_int ADC : 1;
	u_int pad112 : 16;
};

typedef _sceGifPackXyzf sceGifPackXyzf;

struct _sceGifPackXyz {
	int X;
	int Y;
	u_int Z;
	u_int pad96 : 15;
	u_int ADC : 1;
	u_int pad112 : 16;
};

typedef _sceGifPackXyz sceGifPackXyz;

struct _sceGifPackFog {
	u_int pad[3];
	u_int F;
};

typedef _sceGifPackFog sceGifPackFog;

struct _sceGifPackNop {
	u_long pad[2];
};

typedef _sceGifPackNop sceGifPackNop;

typedef struct {
	long unsigned int A : 2;
	long unsigned int B : 2;
	long unsigned int C : 2;
	long unsigned int D : 2;
	long unsigned int pad8 : 24;
	long unsigned int FIX : 8;
	long unsigned int pad40 : 24;
} sceGsAlpha;

typedef struct {
	long unsigned int SBP : 14;
	long unsigned int pad14 : 2;
	long unsigned int SBW : 6;
	long unsigned int pad22 : 2;
	long unsigned int SPSM : 6;
	long unsigned int pad30 : 2;
	long unsigned int DBP : 14;
	long unsigned int pad46 : 2;
	long unsigned int DBW : 6;
	long unsigned int pad54 : 2;
	long unsigned int DPSM : 6;
	long unsigned int pad62 : 2;
} sceGsBitbltbuf;

typedef struct {
	long unsigned int WMS : 2;
	long unsigned int WMT : 2;
	long unsigned int MINU : 10;
	long unsigned int MAXU : 10;
	long unsigned int MINV : 10;
	long unsigned int MAXV : 10;
	long unsigned int pad44 : 20;
} sceGsClamp;

typedef struct {
	long unsigned int CLAMP : 1;
	long unsigned int pad01 : 63;
} sceGsColclamp;

typedef struct {
	long unsigned int DIMX00 : 3;
	long unsigned int pad00 : 1;
	long unsigned int DIMX01 : 3;
	long unsigned int pad01 : 1;
	long unsigned int DIMX02 : 3;
	long unsigned int pad02 : 1;
	long unsigned int DIMX03 : 3;
	long unsigned int pad03 : 1;
	long unsigned int DIMX10 : 3;
	long unsigned int pad10 : 1;
	long unsigned int DIMX11 : 3;
	long unsigned int pad11 : 1;
	long unsigned int DIMX12 : 3;
	long unsigned int pad12 : 1;
	long unsigned int DIMX13 : 3;
	long unsigned int pad13 : 1;
	long unsigned int DIMX20 : 3;
	long unsigned int pad20 : 1;
	long unsigned int DIMX21 : 3;
	long unsigned int pad21 : 1;
	long unsigned int DIMX22 : 3;
	long unsigned int pad22 : 1;
	long unsigned int DIMX23 : 3;
	long unsigned int pad23 : 1;
	long unsigned int DIMX30 : 3;
	long unsigned int pad30 : 1;
	long unsigned int DIMX31 : 3;
	long unsigned int pad31 : 1;
	long unsigned int DIMX32 : 3;
	long unsigned int pad32 : 1;
	long unsigned int DIMX33 : 3;
	long unsigned int pad33 : 1;
} sceGsDimx;

typedef struct {
	long unsigned int DTHE : 1;
	long unsigned int pad01 : 63;
} sceGsDthe;

typedef struct {
	long unsigned int FBA : 1;
	long unsigned int pad01 : 63;
} sceGsFba;

typedef struct {
	long unsigned int pad00;
} sceGsFinish;

typedef struct {
	long unsigned int pad00 : 56;
	long unsigned int F : 8;
} sceGsFog;

typedef struct {
	long unsigned int FCR : 8;
	long unsigned int FCG : 8;
	long unsigned int FCB : 8;
	long unsigned int pad24 : 40;
} sceGsFogcol;

typedef struct {
	long unsigned int FBP : 9;
	long unsigned int pad09 : 7;
	long unsigned int FBW : 6;
	long unsigned int pad22 : 2;
	long unsigned int PSM : 6;
	long unsigned int pad30 : 2;
	long unsigned int FBMSK : 32;
} sceGsFrame;

typedef struct {
	long unsigned int WDATA;
} sceGsHwreg;

typedef struct {
	u_int ID;
	u_int IDMSK;
} sceGsLabel;

typedef struct {
	long unsigned int TBP1 : 14;
	long unsigned int TBW1 : 6;
	long unsigned int TBP2 : 14;
	long unsigned int TBW2 : 6;
	long unsigned int TBP3 : 14;
	long unsigned int TBW3 : 6;
	long unsigned int pad60 : 4;
} sceGsMiptbp1;

typedef struct {
	long unsigned int TBP4 : 14;
	long unsigned int TBW4 : 6;
	long unsigned int TBP5 : 14;
	long unsigned int TBW5 : 6;
	long unsigned int TBP6 : 14;
	long unsigned int TBW6 : 6;
	long unsigned int pad60 : 4;
} sceGsMiptbp2;

typedef struct {
	long unsigned int PABE : 1;
	long unsigned int pad01 : 63;
} sceGsPabe;

typedef struct {
	long unsigned int PRIM : 3;
	long unsigned int IIP : 1;
	long unsigned int TME : 1;
	long unsigned int FGE : 1;
	long unsigned int ABE : 1;
	long unsigned int AA1 : 1;
	long unsigned int FST : 1;
	long unsigned int CTXT : 1;
	long unsigned int FIX : 1;
	long unsigned int pad11 : 53;
} sceGsPrim;

typedef struct {
	long unsigned int pad00 : 3;
	long unsigned int IIP : 1;
	long unsigned int TME : 1;
	long unsigned int FGE : 1;
	long unsigned int ABE : 1;
	long unsigned int AA1 : 1;
	long unsigned int FST : 1;
	long unsigned int CTXT : 1;
	long unsigned int FIX : 1;
	long unsigned int pad11 : 53;
} sceGsPrmode;

typedef struct {
	long unsigned int AC : 1;
	long unsigned int pad01 : 63;
} sceGsPrmodecont;

typedef struct {
	u_int R : 8;
	u_int G : 8;
	u_int B : 8;
	u_int A : 8;
	float Q;
} sceGsRgbaq;

typedef struct {
	long unsigned int MSK : 2;
	long unsigned int pad02 : 62;
} sceGsScanmsk;

typedef struct {
	long unsigned int SCAX0 : 11;
	long unsigned int pad11 : 5;
	long unsigned int SCAX1 : 11;
	long unsigned int pad27 : 5;
	long unsigned int SCAY0 : 11;
	long unsigned int pad43 : 5;
	long unsigned int SCAY1 : 11;
	long unsigned int pad59 : 5;
} sceGsScissor;

typedef struct {
	u_int ID;
	u_int IDMSK;
} sceGsSignal;

typedef struct {
	float S;
	float T;
} sceGsSt;

typedef struct {
	long unsigned int ATE : 1;
	long unsigned int ATST : 3;
	long unsigned int AREF : 8;
	long unsigned int AFAIL : 2;
	long unsigned int DATE : 1;
	long unsigned int DATM : 1;
	long unsigned int ZTE : 1;
	long unsigned int ZTST : 2;
	long unsigned int pad19 : 45;
} sceGsTest;

typedef struct {
	long unsigned int TBP0 : 14;
	long unsigned int TBW : 6;
	long unsigned int PSM : 6;
	long unsigned int TW : 4;
	long unsigned int TH : 4;
	long unsigned int TCC : 1;
	long unsigned int TFX : 2;
	long unsigned int CBP : 14;
	long unsigned int CPSM : 4;
	long unsigned int CSM : 1;
	long unsigned int CSA : 5;
	long unsigned int CLD : 3;
} sceGsTex0;

typedef struct {
	long unsigned int LCM : 1;
	long unsigned int pad01 : 1;
	long unsigned int MXL : 3;
	long unsigned int MMAG : 1;
	long unsigned int MMIN : 3;
	long unsigned int MTBA : 1;
	long unsigned int pad10 : 9;
	long unsigned int L : 2;
	long unsigned int pad21 : 11;
	long unsigned int K : 12;
	long unsigned int pad44 : 20;
} sceGsTex1;

typedef struct {
	long unsigned int pad00 : 20;
	long unsigned int PSM : 6;
	long unsigned int pad26 : 11;
	long unsigned int CBP : 14;
	long unsigned int CPSM : 4;
	long unsigned int CSM : 1;
	long unsigned int CSA : 5;
	long unsigned int CLD : 3;
} sceGsTex2;

typedef struct {
	long unsigned int TA0 : 8;
	long unsigned int pad08 : 7;
	long unsigned int AEM : 1;
	long unsigned int pad16 : 16;
	long unsigned int TA1 : 8;
	long unsigned int pad40 : 24;
} sceGsTexa;

typedef struct {
	long unsigned int CBW : 6;
	long unsigned int COU : 6;
	long unsigned int COV : 10;
	long unsigned int pad22 : 42;
} sceGsTexclut;

typedef struct {
	long unsigned int pad00;
} sceGsTexflush;

typedef struct {
	long unsigned int XDR : 2;
	long unsigned int pad02 : 62;
} sceGsTrxdir;

typedef struct {
	long unsigned int SSAX : 11;
	long unsigned int pad11 : 5;
	long unsigned int SSAY : 11;
	long unsigned int pad27 : 5;
	long unsigned int DSAX : 11;
	long unsigned int pad43 : 5;
	long unsigned int DSAY : 11;
	long unsigned int DIR : 2;
	long unsigned int pad61 : 3;
} sceGsTrxpos;

typedef struct {
	long unsigned int RRW : 12;
	long unsigned int pad12 : 20;
	long unsigned int RRH : 12;
	long unsigned int pad44 : 20;
} sceGsTrxreg;

typedef struct {
	long unsigned int U : 14;
	long unsigned int pad14 : 2;
	long unsigned int V : 14;
	long unsigned int pad30 : 34;
} sceGsUv;

typedef struct {
	long unsigned int OFX : 16;
	long unsigned int pad16 : 16;
	long unsigned int OFY : 16;
	long unsigned int pad48 : 16;
} sceGsXyoffset;

typedef struct {
	long unsigned int X : 16;
	long unsigned int Y : 16;
	long unsigned int Z : 32;
} sceGsXyz;

typedef struct {
	long unsigned int X : 16;
	long unsigned int Y : 16;
	long unsigned int Z : 24;
	long unsigned int F : 8;
} sceGsXyzf;

typedef struct {
	long unsigned int ZBP : 9;
	long unsigned int pad09 : 15;
	long unsigned int PSM : 4;
	long unsigned int pad28 : 4;
	long unsigned int ZMSK : 1;
	long unsigned int pad33 : 31;
} sceGsZbuf;

typedef struct {
	unsigned int COUNT : 16;
	unsigned int p0 : 16;
} tT_COUNT;

typedef struct {
	unsigned int CLKS : 2;
	unsigned int GATE : 1;
	unsigned int GATS : 1;
	unsigned int GATM : 2;
	unsigned int ZRET : 1;
	unsigned int CUE : 1;
	unsigned int CMPE : 1;
	unsigned int OVFE : 1;
	unsigned int EQUF : 1;
	unsigned int OVFF : 1;
	unsigned int p0 : 20;
} tT_MODE;

typedef struct {
	unsigned int COMP : 16;
	unsigned int p0 : 16;
} tT_COMP;

typedef struct {
	unsigned int HOLD : 16;
	unsigned int p0 : 16;
} tT_HOLD;

typedef struct {
	unsigned int OPTION : 28;
	unsigned int CODE : 4;
} tIPU_CMD_write;

typedef struct {
	unsigned int DATA;
	unsigned int p0 : 31;
	unsigned int BUSY : 1;
} tIPU_CMD_read;

typedef struct {
	unsigned int BSTOP;
	unsigned int p0 : 31;
	unsigned int BUSY : 1;
} tIPU_TOP;

typedef struct {
	unsigned int IFC : 4;
	unsigned int OFC : 4;
	unsigned int CBP : 6;
	unsigned int ECD : 1;
	unsigned int SCD : 1;
	unsigned int IDP : 2;
	unsigned int p0 : 2;
	unsigned int AS : 1;
	unsigned int IVF : 1;
	unsigned int QST : 1;
	unsigned int MP1 : 1;
	unsigned int PCT : 3;
	unsigned int p1 : 3;
	unsigned int RST : 1;
	unsigned int BUSY : 1;
} tIPU_CTRL;

typedef struct {
	unsigned int BP : 7;
	unsigned int p0 : 1;
	unsigned int IFC : 4;
	unsigned int p1 : 4;
	unsigned int FP : 2;
	unsigned int p2 : 14;
} tIPU_BP;

typedef struct {
	unsigned int RST : 1;
	unsigned int p0 : 2;
	unsigned int PSE : 1;
	unsigned int p1 : 28;
} tGIF_CTRL;

typedef struct {
	unsigned int M3R : 1;
	unsigned int p0 : 1;
	unsigned int IMT : 1;
	unsigned int p1 : 29;
} tGIF_MODE;

typedef struct {
	unsigned int M3R : 1;
	unsigned int M3P : 1;
	unsigned int IMT : 1;
	unsigned int PSE : 1;
	unsigned int p0 : 1;
	unsigned int IP3 : 1;
	unsigned int P3Q : 1;
	unsigned int P2Q : 1;
	unsigned int P1Q : 1;
	unsigned int OPH : 1;
	unsigned int APATH : 2;
	unsigned int DIR : 1;
	unsigned int p1 : 11;
	unsigned int FQC : 5;
	unsigned int p2 : 3;
} tGIF_STAT;

typedef struct {
	unsigned int NLOOP : 15;
	unsigned int EOP : 1;
	unsigned int tag : 16;
} tGIF_TAG0;

typedef struct {
	unsigned int tag : 14;
	unsigned int PRE : 1;
	unsigned int PRIM : 11;
	unsigned int FLG : 2;
	unsigned int NREG : 4;
} tGIF_TAG1;

typedef struct {
	unsigned int tag;
} tGIF_TAG2;

typedef struct {
	unsigned int tag;
} tGIF_TAG3;

typedef struct {
	unsigned int LOOPCNT : 15;
	unsigned int p0 : 1;
	unsigned int REGCNT : 4;
	unsigned int VUADDR : 10;
	unsigned int p1 : 2;
} tGIF_CNT;

typedef struct {
	unsigned int P3CNT : 15;
	unsigned int p0 : 17;
} tGIF_P3CNT;

typedef struct {
	unsigned int LOOPCNT : 15;
	unsigned int EOP : 1;
	unsigned int p0 : 16;
} tGIF_P3TAG;

typedef struct {
	unsigned int VPS : 2;
	unsigned int VEW : 1;
	unsigned int p0 : 3;
	unsigned int MRK : 1;
	unsigned int p1 : 1;
	unsigned int VSS : 1;
	unsigned int VFS : 1;
	unsigned int VIS : 1;
	unsigned int INT : 1;
	unsigned int ERO : 1;
	unsigned int ER1 : 1;
	unsigned int p2 : 10;
	unsigned int FQC : 4;
	unsigned int p3 : 4;
} tVIF0_STAT;

typedef struct {
	unsigned int RST : 1;
	unsigned int FBK : 1;
	unsigned int STP : 1;
	unsigned int STC : 1;
	unsigned int p0 : 28;
} tVIF0_FBRST;

typedef struct {
	unsigned int MII : 1;
	unsigned int ME0 : 1;
	unsigned int ME1 : 1;
	unsigned int p0 : 29;
} tVIF0_ERR;

typedef struct {
	unsigned int MARK : 16;
	unsigned int p0 : 16;
} tVIF_MARK;

typedef struct {
	unsigned int CL : 8;
	unsigned int WL : 8;
	unsigned int p0 : 16;
} tVIF_CYCLE;

typedef struct {
	unsigned int MOD : 2;
	unsigned int p0 : 30;
} tVIF_MODE;

typedef struct {
	unsigned int num : 8;
	unsigned int p0 : 24;
} tVIF0_NUM;

typedef struct {
	unsigned int m0 : 2;
	unsigned int m1 : 2;
	unsigned int m2 : 2;
	unsigned int m3 : 2;
	unsigned int m4 : 2;
	unsigned int m5 : 2;
	unsigned int m6 : 2;
	unsigned int m7 : 2;
	unsigned int m8 : 2;
	unsigned int m9 : 2;
	unsigned int m10 : 2;
	unsigned int m11 : 2;
	unsigned int m12 : 2;
	unsigned int m13 : 2;
	unsigned int m14 : 2;
	unsigned int m15 : 2;
} tVIF_MASK;

typedef struct {
	unsigned int immediate : 16;
	unsigned int num : 8;
	unsigned int CMD : 8;
} tVIF_CODE;

typedef struct {
	unsigned int ITOPS : 10;
	unsigned int p0 : 22;
} tVIF_ITOPS;

typedef struct {
	unsigned int ITOP : 10;
	unsigned int p0 : 22;
} tVIF_ITOP;

typedef struct {
	unsigned int R0;
} tVIF_R0;

typedef struct {
	unsigned int R1;
} tVIF_R1;

typedef struct {
	unsigned int R2;
} tVIF_R2;

typedef struct {
	unsigned int R3;
} tVIF_R3;

typedef struct {
	unsigned int C0;
} tVIF_C0;

typedef struct {
	unsigned int C1;
} tVIF_C1;

typedef struct {
	unsigned int C2;
} tVIF_C2;

typedef struct {
	unsigned int C3;
} tVIF_C3;

typedef struct {
	unsigned int VPS : 2;
	unsigned int VEW : 1;
	unsigned int VGW : 1;
	unsigned int p0 : 2;
	unsigned int MRK : 1;
	unsigned int DBF : 1;
	unsigned int VSS : 1;
	unsigned int VFS : 1;
	unsigned int VIS : 1;
	unsigned int INT : 1;
	unsigned int ERO : 1;
	unsigned int ER1 : 1;
	unsigned int p1 : 9;
	unsigned int FDR : 1;
	unsigned int FQC : 5;
	unsigned int p2 : 3;
} tVIF1_STAT;

typedef struct {
	unsigned int RST : 1;
	unsigned int FBK : 1;
	unsigned int STP : 1;
	unsigned int STC : 1;
	unsigned int p0 : 28;
} tVIF1_FBRST;

typedef struct {
	unsigned int MII : 1;
	unsigned int ME0 : 1;
	unsigned int ME1 : 1;
	unsigned int p0 : 29;
} tVIF1_ERR;

typedef struct {
	unsigned int num : 8;
	unsigned int p0 : 24;
} tVIF1_NUM;

typedef struct {
	unsigned int BASE : 10;
	unsigned int p0 : 22;
} tVIF1_BASE;

typedef struct {
	unsigned int OFFSET : 10;
	unsigned int p0 : 22;
} tVIF1_OFST;

typedef struct {
	unsigned int TOPS : 10;
	unsigned int p0 : 22;
} tVIF1_TOPS;

typedef struct {
	unsigned int TOP : 10;
	unsigned int p0 : 22;
} tVIF1_TOP;

typedef struct {
	unsigned int DIR : 1;
	unsigned int p0 : 1;
	unsigned int MOD : 2;
	unsigned int ASP : 2;
	unsigned int TTE : 1;
	unsigned int TIE : 1;
	unsigned int STR : 1;
	unsigned int p1 : 7;
	unsigned int TAG : 16;
} tD_CHCR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_MADR;

typedef struct {
	unsigned int QWC : 16;
	unsigned int p0 : 16;
} tD_QWC;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_TADR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_ASR0;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_ASR1;

typedef struct {
	unsigned int ADDR : 14;
	unsigned int p0 : 18;
} tD_SADR;

typedef struct {
	unsigned int DMAE : 1;
	unsigned int RELE : 1;
	unsigned int MFD : 2;
	unsigned int STS : 2;
	unsigned int STD : 2;
	unsigned int RCYC : 3;
	unsigned int p0 : 21;
} tD_CTRL;

typedef struct {
	unsigned int CIS0 : 1;
	unsigned int CIS1 : 1;
	unsigned int CIS2 : 1;
	unsigned int CIS3 : 1;
	unsigned int CIS4 : 1;
	unsigned int CIS5 : 1;
	unsigned int CIS6 : 1;
	unsigned int CIS7 : 1;
	unsigned int CIS8 : 1;
	unsigned int CIS9 : 1;
	unsigned int p0 : 3;
	unsigned int SIS : 1;
	unsigned int MEIS : 1;
	unsigned int BEIS : 1;
	unsigned int CIM0 : 1;
	unsigned int CIM1 : 1;
	unsigned int CIM2 : 1;
	unsigned int CIM3 : 1;
	unsigned int CIM4 : 1;
	unsigned int CIM5 : 1;
	unsigned int CIM6 : 1;
	unsigned int CIM7 : 1;
	unsigned int CIM8 : 1;
	unsigned int CIM9 : 1;
	unsigned int p1 : 3;
	unsigned int SIM : 1;
	unsigned int MEIM : 1;
	unsigned int p2 : 1;
} tD_STAT;

typedef struct {
	unsigned int CPC0 : 1;
	unsigned int CPC1 : 1;
	unsigned int CPC2 : 1;
	unsigned int CPC3 : 1;
	unsigned int CPC4 : 1;
	unsigned int CPC5 : 1;
	unsigned int CPC6 : 1;
	unsigned int CPC7 : 1;
	unsigned int CPC8 : 1;
	unsigned int CPC9 : 1;
	unsigned int p0 : 6;
	unsigned int CDE0 : 1;
	unsigned int CDE1 : 1;
	unsigned int CDE2 : 1;
	unsigned int CDE3 : 1;
	unsigned int CDE4 : 1;
	unsigned int CDE5 : 1;
	unsigned int CDE6 : 1;
	unsigned int CDE7 : 1;
	unsigned int CDE8 : 1;
	unsigned int CDE9 : 1;
	unsigned int p1 : 5;
	unsigned int PCE : 1;
} tD_PCR;

typedef struct {
	unsigned int SQWC : 8;
	unsigned int p0 : 8;
	unsigned int TQWC : 8;
	unsigned int p1 : 8;
} tD_SQWC;

typedef struct {
	unsigned int RMSK : 31;
	unsigned int p0 : 1;
} tD_RBSR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int p0 : 1;
} tD_RBOR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int p0 : 1;
} tD_STADR;

typedef struct {
	unsigned int p0 : 16;
	unsigned int CPND : 1;
	unsigned int p1 : 15;
} tD_ENABLER;

typedef struct {
	unsigned int p0 : 16;
	unsigned int CPND : 1;
	unsigned int p1 : 15;
} tD_ENABLEW;

typedef struct {
	unsigned int EN1 : 1;
	unsigned int EN2 : 1;
	unsigned int CRTMD : 3;
	unsigned int MMOD : 1;
	unsigned int AMOD : 1;
	unsigned int SLBG : 1;
	unsigned int ALP : 8;
	unsigned int p0 : 16;
	unsigned int p1;
} tGS_PMODE;

typedef struct {
	unsigned int INT : 1;
	unsigned int FFMD : 1;
	unsigned int DPMS : 2;
	unsigned int p0 : 28;
	unsigned int p1;
} tGS_SMODE2;

typedef struct {
	unsigned int FBP : 9;
	unsigned int FBW : 6;
	unsigned int PSM : 5;
	unsigned int p0 : 12;
	unsigned int DBX : 11;
	unsigned int DBY : 11;
	unsigned int p1 : 10;
} tGS_DISPFB1;

typedef struct {
	unsigned int DX : 12;
	unsigned int DY : 11;
	unsigned int MAGH : 4;
	unsigned int MAGV : 2;
	unsigned int p0 : 3;
	unsigned int DW : 12;
	unsigned int DH : 11;
	unsigned int p1 : 9;
} tGS_DISPLAY1;

typedef struct {
	unsigned int FBP : 9;
	unsigned int FBW : 6;
	unsigned int PSM : 5;
	unsigned int p0 : 12;
	unsigned int DBX : 11;
	unsigned int DBY : 11;
	unsigned int p1 : 10;
} tGS_DISPFB2;

typedef struct {
	unsigned int DX : 12;
	unsigned int DY : 11;
	unsigned int MAGH : 4;
	unsigned int MAGV : 2;
	unsigned int p0 : 3;
	unsigned int DW : 12;
	unsigned int DH : 11;
	unsigned int p1 : 9;
} tGS_DISPLAY2;

typedef struct {
	unsigned int EXBP : 14;
	unsigned int EXBW : 6;
	unsigned int FBIN : 2;
	unsigned int WFFMD : 1;
	unsigned int EMODA : 2;
	unsigned int EMODC : 2;
	unsigned int p0 : 5;
	unsigned int WDX : 11;
	unsigned int WDY : 11;
	unsigned int p1 : 10;
} tGS_EXTBUF;

typedef struct {
	unsigned int SX : 12;
	unsigned int SY : 11;
	unsigned int SMPH : 4;
	unsigned int SMPV : 2;
	unsigned int p0 : 3;
	unsigned int WW : 12;
	unsigned int WH : 11;
	unsigned int p1 : 9;
} tGS_EXTDATA;

typedef struct {
	unsigned int WRITE : 1;
	unsigned int p0 : 31;
	unsigned int p1;
} tGS_EXTWRITE;

typedef struct {
	unsigned int R : 8;
	unsigned int G : 8;
	unsigned int B : 8;
	unsigned int p0 : 8;
	unsigned int p1;
} tGS_BGCOLOR;

typedef struct {
	unsigned int SIGNAL : 1;
	unsigned int FINISH : 1;
	unsigned int HSINT : 1;
	unsigned int VSINT : 1;
	unsigned int EDWINT : 1;
	unsigned int p0 : 3;
	unsigned int FLUSH : 1;
	unsigned int RESET : 1;
	unsigned int p1 : 2;
	unsigned int NFIELD : 1;
	unsigned int FIELD : 1;
	unsigned int FIFO : 2;
	unsigned int REV : 8;
	unsigned int ID : 8;
	unsigned int p2;
} tGS_CSR;

typedef struct {
	unsigned int p0 : 8;
	unsigned int SIGMSK : 1;
	unsigned int FINISHMSK : 1;
	unsigned int HSMSK : 1;
	unsigned int VSMSK : 1;
	unsigned int EDWMSK : 1;
	unsigned int p1 : 19;
	unsigned int p2;
} tGS_IMR;

typedef struct {
	unsigned int DIR : 1;
	unsigned int p0 : 31;
	unsigned int p1;
} tGS_BUSDIR;

typedef struct {
	unsigned int SIGID;
	unsigned int LBLID;
} tGS_SIGLBLID;

struct _sceDmaTag {
	u_short qwc;
	u_char mark;
	u_char id;
	_sceDmaTag *next;
	u_int p[2];
};

typedef _sceDmaTag sceDmaTag;

typedef struct {
	u_char sts;
	u_char std;
	u_char mfd;
	u_char rcycle;
	u_short express;
	u_short notify;
	u_short sqwc;
	u_short tqwc;
	void *rbadr;
	u_int rbmsk;
} sceDmaEnv;

typedef struct {
	tD_CHCR chcr;
	u_int p0[3];
	void *madr;
	u_int p1[3];
	u_int qwc;
	u_int p2[3];
	sceDmaTag *tadr;
	u_int p3[3];
	void *as0;
	u_int p4[3];
	void *as1;
	u_int p5[3];
	u_int p6[4];
	u_int p7[4];
	void *sadr;
	u_int p8[3];
} sceDmaChan;

typedef struct {
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
} sceGsDispEnv;

typedef struct {
	sceGsFrame frame1;
	u_long frame1addr;
	sceGsZbuf zbuf1;
	long int zbuf1addr;
	sceGsXyoffset xyoffset1;
	long int xyoffset1addr;
	sceGsScissor scissor1;
	long int scissor1addr;
	sceGsPrmodecont prmodecont;
	long int prmodecontaddr;
	sceGsColclamp colclamp;
	long int colclampaddr;
	sceGsDthe dthe;
	long int dtheaddr;
	sceGsTest test1;
	long int test1addr;
} sceGsDrawEnv1;

typedef struct {
	sceGsFrame frame2;
	u_long frame2addr;
	sceGsZbuf zbuf2;
	long int zbuf2addr;
	sceGsXyoffset xyoffset2;
	long int xyoffset2addr;
	sceGsScissor scissor2;
	long int scissor2addr;
	sceGsPrmodecont prmodecont;
	long int prmodecontaddr;
	sceGsColclamp colclamp;
	long int colclampaddr;
	sceGsDthe dthe;
	long int dtheaddr;
	sceGsTest test2;
	long int test2addr;
} sceGsDrawEnv2;

typedef struct {
	sceGsTest testa;
	long int testaaddr;
	sceGsPrim prim;
	long int primaddr;
	sceGsRgbaq rgbaq;
	long int rgbaqaddr;
	sceGsXyz xyz2a;
	long int xyz2aaddr;
	sceGsXyz xyz2b;
	long int xyz2baddr;
	sceGsTest testb;
	long int testbaddr;
} sceGsClear;

typedef struct {
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
} sceGsDBuff;

typedef struct {
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw01;
	sceGsDrawEnv2 draw02;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw11;
	sceGsDrawEnv2 draw12;
	sceGsClear clear1;
} sceGsDBuffDc;

typedef struct {
	sceGsTexflush texflush;
	long int texflushaddr;
	sceGsTex1 tex11;
	long int tex11addr;
	sceGsTex0 tex01;
	long int tex01addr;
	sceGsClamp clamp1;
	long int clamp1addr;
} sceGsTexEnv;

typedef struct {
	sceGsTexflush texflush;
	long int texflushaddr;
	sceGsTex1 tex12;
	long int tex12addr;
	sceGsTex0 tex02;
	long int tex02addr;
	sceGsClamp clamp2;
	long int clamp2addr;
} sceGsTexEnv2;

typedef struct {
	sceGsAlpha alpha1;
	long int alpha1addr;
	sceGsPabe pabe;
	long int pabeaddr;
	sceGsTexa texa;
	long int texaaddr;
	sceGsFba fba1;
	long int fba1addr;
} sceGsAlphaEnv;

typedef struct {
	sceGsAlpha alpha2;
	long int alpha2addr;
	sceGsPabe pabe;
	long int pabeaddr;
	sceGsTexa texa;
	long int texaaddr;
	sceGsFba fba2;
	long int fba2addr;
} sceGsAlphaEnv2;

typedef struct {
	sceGifTag giftag0;
	sceGsBitbltbuf bitbltbuf;
	long int bitbltbufaddr;
	sceGsTrxpos trxpos;
	long int trxposaddr;
	sceGsTrxreg trxreg;
	long int trxregaddr;
	sceGsTrxdir trxdir;
	long int trxdiraddr;
	sceGifTag giftag1;
} sceGsLoadImage;

typedef struct {
	u_int vifcode[4];
	sceGifTag giftag;
	sceGsBitbltbuf bitbltbuf;
	long int bitbltbufaddr;
	sceGsTrxpos trxpos;
	long int trxposaddr;
	sceGsTrxreg trxreg;
	long int trxregaddr;
	sceGsFinish finish;
	long int finishaddr;
	sceGsTrxdir trxdir;
	long int trxdiraddr;
} sceGsStoreImage;

typedef struct {
	short int sceGsInterMode;
	short int sceGsOutMode;
	short int sceGsFFMode;
	short int sceGsVersion;
	int (*sceGsVSCfunc)(/* parameters unknown */);
	int sceGsVSCid;
} sceGsGParam;

typedef struct {
	u_int *pCurrent;
	u_long128 *pBase;
	u_long128 *pDmaTag;
	u_long *pGifTag;
} sceGifPacket;

typedef int sceVu0IVECTOR[4];
typedef char Sint8;
typedef short int Sint16;
typedef long int Sint64;
typedef long128 Sint128;
typedef u_char Uint8;
typedef u_long Uint64;
typedef u_long128 Uint128;

struct gf_dma_tag {
	long unsigned int QWC : 16;
	long unsigned int pad16 : 10;
	long unsigned int PCE : 2;
	long unsigned int ID : 3;
	long unsigned int IRQ : 1;
	long unsigned int ADDR : 31;
	long unsigned int SPR : 1;
	long unsigned int vif_code[2];
};

typedef gf_dma_tag GF_DMA_TAG;

struct _qdata643232 {
	Uint64 u64;
	Uint32 u32[2];
};

typedef _qdata643232 QDATA643232;

struct pod_header {
	Uint32 magic;
	Uint16 version;
	Uint16 pad;
	Sint32 shapeNum;
	Sint32 rootShape;
	Uint32 extBlockNum;
	Sint32 pad2[3];
};

typedef pod_header PodHEADER;

struct pod_shapetbl {
	Uint16 parent;
	Uint16 child;
	Uint16 sibling;
	Uint32 shape;
	Uint32 flag;
	union {
		sceVu0FMATRIX matrix;
		struct {
			sceVu0FVECTOR rotate;
			sceVu0FVECTOR scale;
			sceVu0FVECTOR translate;
		} vector;
	} rel;
};

typedef pod_shapetbl PodSHAPETBL;

struct pod_extendtbl {
	Uint32 extId;
	Uint32 free[3];
};

typedef pod_extendtbl PodEXTENDTBL;

struct pod_geometry {
	Sint32 vertNum;
	Uint32 prim;
	Sint32 pad[2];
};

typedef pod_geometry PodGEOMETRY;

struct pod_share {
	Uint32 extId;
	Uint32 shapeNo;
	Uint32 offset;
	Uint32 pad;
};

typedef pod_share PodSHARE;

struct pmt_shapeofs {
	Uint32 offset;
	Sint32 keyNum;
	Uint32 flag;
	Sint32 pad;
	sceVu0FMATRIX mat;
};

typedef pmt_shapeofs PmtSHAPEOFS;

struct pmt_shapekeyhead {
	Uint32 frame;
	Sint32 pad[3];
};

typedef pmt_shapekeyhead PmtSHAPEKEYHEAD;

struct gf_pig_ref {
	Uint32 offset;
	Uint32 size;
};

typedef gf_pig_ref GF_PIG_REF;

struct gf_pig_head {
	Uint32 magic;
	Uint16 version;
	Uint16 reserved0;
	Uint32 reserved1;
	Uint16 flag;
	Uint16 imageNum;
	Uint64 guid[2];
	Uint16 width;
	Uint16 height;
	Uint8 psm;
	Uint8 cpsm;
	Uint16 reserved2;
	Uint32 vram;
	Uint32 vramClut;
	qword free;
	GF_PIG_REF clutRef;
	GF_PIG_REF imageRef[7];
};

typedef gf_pig_head GF_PIG_HEAD;

typedef enum {
	GF_INST_TYPE_NULL = 0,
	GF_INST_TYPE_OBJECT = 1,
	GF_INST_TYPE_SHAPE = 2,
	GF_INST_TYPE_SPRITE = 3,
	GF_INST_TYPE_SCENE = 4,
	GF_INST_TYPE_FOG = 5,
	GF_INST_TYPE_USER = 6
} GF_INST_TYPE;

typedef gf_inst_head GF_INST_HEAD;
typedef gf_inst_head GF_INST_NULL;

struct gf_object {
	GF_INST_HEAD head;
	Uint32 flag;
	GF_MICRO *micro;
	GF_LIGHT *light;
	GF_POINT_LIGHT *point_light;
	GF_SPOT_LIGHT *spot_light;
	GF_MODEL *model;
	Sint32 nShape;
	GF_INST_SHAPE *shape;
	Uint32 flagAnim;
	PmtHEADER *curAnim;
	Float32 speedAnim;
	PmtHEADER *compNextAnim;
	Uint32 compAllTimeAnim;
	Uint32 compCurTimeAnim;
	GF_CallBackFunction func;
	sceVu0FVECTOR col;
	Uint64 alpha;
};

struct gf_user {
	GF_INST_HEAD head;
	void (*funcInstUserEval)(/* parameters unknown */);
	qword* (*funcInstUserDraw)(/* parameters unknown */);
};

typedef gf_user GF_INST_USER;

struct gf_vu1pkt_head {
	sceGifTag giftag;
	sceGifTag giftagTriFan;
};

typedef gf_vu1pkt_head GF_VU1PKT_HEAD;

struct gf_cache_head {
	Uint32 size;
	Uint32 cellMax;
	Uint16 cache_pos;
	Uint16 cache_size;
	Uint16 preset_pos;
	Uint16 pad;
};

typedef gf_cache_head GF_CACHE_HEAD;

struct exception {
	int type;
	char *name;
	double arg1;
	double arg2;
	double retval;
	int err;
};

enum __fdlibm_version {
	__fdlibm_ieee = -1,
	__fdlibm_svid = 0,
	__fdlibm_xopen = 1,
	__fdlibm_posix = 2
};

struct gf_vram_cell {
	gf_vram_cell *prev;
	gf_vram_cell *next;
	Uint8 stat;
	Uint8 pad;
	Uint8 used_flag;
	Uint8 reserved_flag;
	Uint16 pos;
	Uint16 size;
};

typedef gf_vram_cell GF_VRAM_CELL;

struct gf_vram_head {
	Uint32 size;
	Uint32 cellMax;
	GF_VRAM_CELL *top_cell;
};

typedef gf_vram_head GF_VRAM_HEAD;

typedef union {
	double value;
	struct {
		__uint32_t lsw;
		__uint32_t msw;
	} parts;
} ieee_double_shape_type;

typedef union {
	float value;
	__uint32_t word;
} ieee_float_shape_type;

enum cmp_type {
	CMP_SI = 0,
	CMP_DI = 1,
	CMP_SF = 2,
	CMP_DF = 3,
	CMP_MAX = 4
};

enum delay_type {
	DELAY_NONE = 0,
	DELAY_LOAD = 1,
	DELAY_HILO = 2,
	DELAY_HILO1 = 3,
	DELAY_FCMP = 4
};

enum processor_type {
	PROCESSOR_DEFAULT = 0,
	PROCESSOR_R3000 = 1,
	PROCESSOR_R3900 = 2,
	PROCESSOR_R6000 = 3,
	PROCESSOR_R4000 = 4,
	PROCESSOR_R4100 = 5,
	PROCESSOR_R4300 = 6,
	PROCESSOR_R4600 = 7,
	PROCESSOR_R4650 = 8,
	PROCESSOR_R5000 = 9,
	PROCESSOR_R5400 = 10,
	PROCESSOR_R5900 = 11,
	PROCESSOR_R8000 = 12
};

enum mips_abicalls_type {
	MIPS_ABICALLS_NO = 0,
	MIPS_ABICALLS_YES = 1
};

enum block_move_type {
	BLOCK_MOVE_NORMAL = 0,
	BLOCK_MOVE_NOT_LAST = 1,
	BLOCK_MOVE_LAST = 2
};

enum reg_class {
	NO_REGS = 0,
	ARGP_REGS = 1,
	M16_NA_REGS = 2,
	M16_REGS = 3,
	T_REG = 4,
	M16_T_REGS = 5,
	GR_REGS = 6,
	FP_REGS = 7,
	HI_REG = 8,
	LO_REG = 9,
	HILO_REG = 10,
	MD_REGS = 11,
	AP_AND_GR_REGS = 12,
	HI_AND_GR_REGS = 13,
	LO_AND_GR_REGS = 14,
	HILO_AND_GR_REGS = 15,
	HI1_REG = 16,
	LO1_REG = 17,
	HILO1_REG = 18,
	MD1_REGS = 19,
	HI1_AND_GR_REGS = 20,
	LO1_AND_GR_REGS = 21,
	HILO1_AND_GR_REGS = 22,
	HI01_REG = 23,
	LO01_REG = 24,
	HILO01_REG = 25,
	MD01_REGS = 26,
	HI01_AND_GR_REGS = 27,
	LO01_AND_GR_REGS = 28,
	HILO01_AND_GR_REGS = 29,
	ST_REGS = 30,
	ALL_REGS = 31,
	LIM_REG_CLASSES = 32
};

enum frameinfo_state {
	fi_blank = 0,
	fi_partially_initialized = 1,
	fi_modes_known = 2,
	fi_initialized = 3
};

struct mips_frame_info {
	long int total_size;
	long int var_size;
	long int args_size;
	long int extra_size;
	int gp_reg_size;
	int fp_reg_size;
	int gp_quad_size;
	long int mask;
	long int fmask;
	long int gp_save_offset;
	long int fp_save_offset;
	long int gp_sp_offset;
	long int rap_offset;
	long int fp_sp_offset;
	frameinfo_state state;
	int num_gp;
	int num_fp;
	long int insns_len;
};

struct mips_args {
	int gp_reg_found;
	unsigned int arg_number;
	unsigned int arg_words;
	unsigned int fp_arg_words;
	int last_arg_fp;
	int fp_code;
	unsigned int num_adjusts;
	rtx_def *adjust[8];
};

typedef mips_args CUMULATIVE_ARGS;

enum mips_builtins {
	MIPS5900_BUILTIN_PABSH = 0,
	MIPS5900_BUILTIN_PABSW = 1,
	MIPS5900_BUILTIN_PADDB = 2,
	MIPS5900_BUILTIN_PADDH = 3,
	MIPS5900_BUILTIN_PADDSB = 4,
	MIPS5900_BUILTIN_PADDSH = 5,
	MIPS5900_BUILTIN_PADDSW = 6,
	MIPS5900_BUILTIN_PADDUB = 7,
	MIPS5900_BUILTIN_PADDUH = 8,
	MIPS5900_BUILTIN_PADDUW = 9,
	MIPS5900_BUILTIN_PADDW = 10,
	MIPS5900_BUILTIN_PADSBH = 11,
	MIPS5900_BUILTIN_PAND = 12,
	MIPS5900_BUILTIN_PCEQB = 13,
	MIPS5900_BUILTIN_PCEQH = 14,
	MIPS5900_BUILTIN_PCEQW = 15,
	MIPS5900_BUILTIN_PCGTB = 16,
	MIPS5900_BUILTIN_PCGTH = 17,
	MIPS5900_BUILTIN_PCGTW = 18,
	MIPS5900_BUILTIN_PCPYH = 19,
	MIPS5900_BUILTIN_PCPYLD = 20,
	MIPS5900_BUILTIN_PCPYUD = 21,
	MIPS5900_BUILTIN_PDIVBW = 22,
	MIPS5900_BUILTIN_PDIVUW = 23,
	MIPS5900_BUILTIN_PDIVW = 24,
	MIPS5900_BUILTIN_PHMADH = 25,
	MIPS5900_BUILTIN_PHMSBH = 26,
	MIPS5900_BUILTIN_PMADDH = 27,
	MIPS5900_BUILTIN_PMADDUW = 28,
	MIPS5900_BUILTIN_PMADDW = 29,
	MIPS5900_BUILTIN_PMSUBH = 30,
	MIPS5900_BUILTIN_PMSUBW = 31,
	MIPS5900_BUILTIN_PMTHI = 32,
	MIPS5900_BUILTIN_PMTLO = 33,
	MIPS5900_BUILTIN_PMTHL_LW = 34,
	MIPS5900_BUILTIN_PMULTH = 35,
	MIPS5900_BUILTIN_PMULTUW = 36,
	MIPS5900_BUILTIN_PMULTW = 37,
	MIPS5900_BUILTIN_PEXCH = 38,
	MIPS5900_BUILTIN_PEXCW = 39,
	MIPS5900_BUILTIN_PEXEH = 40,
	MIPS5900_BUILTIN_PEXEW = 41,
	MIPS5900_BUILTIN_PEXT5 = 42,
	MIPS5900_BUILTIN_PEXTLB = 43,
	MIPS5900_BUILTIN_PEXTLH = 44,
	MIPS5900_BUILTIN_PEXTLW = 45,
	MIPS5900_BUILTIN_PEXTUB = 46,
	MIPS5900_BUILTIN_PEXTUH = 47,
	MIPS5900_BUILTIN_PEXTUW = 48,
	MIPS5900_BUILTIN_PINTH = 49,
	MIPS5900_BUILTIN_PINTEH = 50,
	MIPS5900_BUILTIN_PLZCW = 51,
	MIPS5900_BUILTIN_PMAXH = 52,
	MIPS5900_BUILTIN_PMAXW = 53,
	MIPS5900_BUILTIN_PMINH = 54,
	MIPS5900_BUILTIN_PMINW = 55,
	MIPS5900_BUILTIN_PNOR = 56,
	MIPS5900_BUILTIN_POR = 57,
	MIPS5900_BUILTIN_PPAC5 = 58,
	MIPS5900_BUILTIN_PPACB = 59,
	MIPS5900_BUILTIN_PPACH = 60,
	MIPS5900_BUILTIN_PPACW = 61,
	MIPS5900_BUILTIN_PREVH = 62,
	MIPS5900_BUILTIN_PROT3W = 63,
	MIPS5900_BUILTIN_PSLLH = 64,
	MIPS5900_BUILTIN_PSLLVW = 65,
	MIPS5900_BUILTIN_PSLLW = 66,
	MIPS5900_BUILTIN_PSRAH = 67,
	MIPS5900_BUILTIN_PSRAVW = 68,
	MIPS5900_BUILTIN_PSRAW = 69,
	MIPS5900_BUILTIN_PSRLH = 70,
	MIPS5900_BUILTIN_PSRLVW = 71,
	MIPS5900_BUILTIN_PSRLW = 72,
	MIPS5900_BUILTIN_PSUBB = 73,
	MIPS5900_BUILTIN_PSUBH = 74,
	MIPS5900_BUILTIN_PSUBSB = 75,
	MIPS5900_BUILTIN_PSUBSH = 76,
	MIPS5900_BUILTIN_PSUBSW = 77,
	MIPS5900_BUILTIN_PSUBUB = 78,
	MIPS5900_BUILTIN_PSUBUH = 79,
	MIPS5900_BUILTIN_PSUBUW = 80,
	MIPS5900_BUILTIN_PSUBW = 81,
	MIPS5900_BUILTIN_PXOR = 82,
	MIPS5900_BUILTIN_MFSA = 83,
	MIPS5900_BUILTIN_MTSA = 84,
	MIPS5900_BUILTIN_MTSAB = 85,
	MIPS5900_BUILTIN_MTSAH = 86,
	MIPS5900_BUILTIN_QFSRV = 87,
	MIPS5900_BUILTIN_PMFHI = 88,
	MIPS5900_BUILTIN_PMFLO = 89,
	MIPS5900_BUILTIN_PMFHL_LW = 90,
	MIPS5900_BUILTIN_PMFHL_UW = 91,
	MIPS5900_BUILTIN_PMFHL_SLW = 92,
	MIPS5900_BUILTIN_PMFHL_LH = 93,
	MIPS5900_BUILTIN_PMFHL_SH = 94,
	MIPS_BUILTIN_MAX = 95
};

typedef int ptrdiff_t;

enum machine_mode {
	VOIDmode = 0,
	BImode = 1,
	QImode = 2,
	HImode = 3,
	SImode = 4,
	DImode = 5,
	TImode = 6,
	OImode = 7,
	PQImode = 8,
	PHImode = 9,
	PSImode = 10,
	PDImode = 11,
	QFmode = 12,
	HFmode = 13,
	TQFmode = 14,
	SFmode = 15,
	DFmode = 16,
	XFmode = 17,
	TFmode = 18,
	QCmode = 19,
	HCmode = 20,
	SCmode = 21,
	DCmode = 22,
	XCmode = 23,
	TCmode = 24,
	CQImode = 25,
	CHImode = 26,
	CSImode = 27,
	CDImode = 28,
	CTImode = 29,
	COImode = 30,
	V2QImode = 31,
	V2HImode = 32,
	V2SImode = 33,
	V2DImode = 34,
	V4QImode = 35,
	V4HImode = 36,
	V4SImode = 37,
	V4DImode = 38,
	V8QImode = 39,
	V8HImode = 40,
	V8SImode = 41,
	V8DImode = 42,
	V16QImode = 43,
	V2SFmode = 44,
	V2DFmode = 45,
	V4SFmode = 46,
	V4DFmode = 47,
	V8SFmode = 48,
	V8DFmode = 49,
	BLKmode = 50,
	CCmode = 51,
	MAX_MACHINE_MODE = 52
};

enum mode_class {
	MODE_RANDOM = 0,
	MODE_INT = 1,
	MODE_FLOAT = 2,
	MODE_PARTIAL_INT = 3,
	MODE_CC = 4,
	MODE_COMPLEX_INT = 5,
	MODE_COMPLEX_FLOAT = 6,
	MODE_VECTOR_INT = 7,
	MODE_VECTOR_FLOAT = 8,
	MAX_MODE_CLASS = 9
};

typedef signed char QItype;
typedef unsigned char UQItype;
typedef short int HItype;
typedef short unsigned int UHItype;
typedef long int word_type;

struct DWstruct {
	SItype low;
	SItype high;
};

typedef union {
	DWstruct s;
	DItype ll;
} DWunion;

// warning: multiple differing types with the same name (type name not equal)
typedef SItype intfrac;

typedef enum {
	CLASS_SNAN = 0,
	CLASS_QNAN = 1,
	CLASS_ZERO = 2,
	CLASS_NUMBER = 3,
	CLASS_INFINITY = 4
} fp_class_type;

// warning: multiple differing types with the same name (type name not equal)
typedef DItype intfrac;
typedef short unsigned int ushort;
typedef unsigned int uint;
typedef long int daddr_t;
typedef char *caddr_t;
typedef int pid_t;
typedef long int key_t;
typedef long int ssize_t;
typedef long int fd_mask;

typedef struct {
	fd_mask fds_bits[1];
} _types_fd_set;

typedef long unsigned int sigset_t;

struct sigaction {
	void (*sa_handler)(/* parameters unknown */);
	sigset_t sa_mask;
	int sa_flags;
};

typedef int sig_atomic_t;
typedef malloc_chunk *mchunkptr;

typedef union {
	double value;
	struct {
		unsigned int fraction1;
		unsigned int fraction0 : 20;
		unsigned int exponent : 11;
		unsigned int sign : 1;
	} number;
	struct {
		unsigned int function1;
		unsigned int function0 : 19;
		unsigned int quiet : 1;
		unsigned int exponent : 11;
		unsigned int sign : 1;
	} nan;
	struct {
		long unsigned int lsw;
		long unsigned int msw;
	} parts;
	long int aslong[2];
} __ieee_double_shape_type;

typedef union {
	float value;
	struct {
		unsigned int fraction0 : 7;
		unsigned int fraction1 : 16;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	} number;
	struct {
		unsigned int function1 : 16;
		unsigned int function0 : 6;
		unsigned int quiet : 1;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	} nan;
	long int p1;
} __ieee_float_shape_type;

typedef int fp_rnd;
typedef int fp_except;
typedef int fp_rdi;

union double_union {
	double d;
	__uint32_t i[2];
};

struct flock {
	short int l_type;
	short int l_whence;
	long int l_start;
	long int l_len;
	short int l_pid;
	short int l_xxx;
};

struct eflock {
	short int l_type;
	short int l_whence;
	long int l_start;
	long int l_len;
	short int l_pid;
	short int l_xxx;
	long int l_rpid;
	long int l_rsys;
};

// warning: multiple differing types with the same name (type name not equal)
typedef unsigned int __ULong;
struct rtx_def;
