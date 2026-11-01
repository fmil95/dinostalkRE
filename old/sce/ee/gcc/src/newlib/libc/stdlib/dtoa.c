// STATUS: NOT STARTED

#include "dtoa.h"

static int quorem(_Bigint *b, _Bigint *S) {
	int n;
	__int32_t borrow;
	__int32_t y;
	__ULong carry;
	__ULong q;
	__ULong ys;
	__ULong *bx;
	__ULong *bxe;
	__ULong *sx;
	__ULong *sxe;
	__int32_t z;
	__ULong si;
	__ULong zs;
}

char* _dtoa_r(_reent *ptr, double _d, int mode, int ndigits, int *decpt, int *sign, char **rve) {
	int bbits;
	int b2;
	int b5;
	int be;
	int dig;
	int i;
	int ieps;
	int ilim;
	int ilim0;
	int ilim1;
	int j;
	int j1;
	int k;
	int k0;
	int k_check;
	int leftright;
	int m2;
	int m5;
	int s2;
	int s5;
	int spec_case;
	int try_quick;
	double_union d;
	double_union d2;
	double_union eps;
	__int32_t L;
	int denorm;
	__ULong x;
	_Bigint *b;
	_Bigint *b1;
	_Bigint *delta;
	_Bigint *mlo;
	_Bigint *mhi;
	_Bigint *S;
	double ds;
	char *s;
}
