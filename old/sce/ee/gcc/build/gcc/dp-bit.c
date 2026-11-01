// STATUS: NOT STARTED

#include "dp-bit.h"

fp_number_type __thenan_df = {
	/* .class = */ CLASS_SNAN,
	/* .sign = */ 0,
	/* .normal_exp = */ 0,
	/* .fraction = */ {
		/* .ll = */ 0,
		/* .l = */ {
			/* [0] = */ 0,
			/* [1] = */ 0
		}
	}
};

static fp_number_type* _fpadd_parts(fp_number_type *a, fp_number_type *b, fp_number_type *tmp) {}

FLO_type dpadd(FLO_type arg_a, FLO_type arg_b) {}

FLO_type dpsub(FLO_type arg_a, FLO_type arg_b) {}

FLO_type dpmul(FLO_type arg_a, FLO_type arg_b) {}

FLO_type dpdiv(FLO_type arg_a, FLO_type arg_b) {}

SItype dpcmp(FLO_type arg_a, FLO_type arg_b) {}

FLO_type litodp(SItype arg_a) {}

SItype dptoli(FLO_type arg_a) {}

DFtype __make_dp(fp_class_type class, unsigned int sign, int exp, UDItype frac) {}

SFtype dptofp(DFtype arg_a) {}

USItype dptoul(FLO_type arg_a) {}

FLO_type __pack_d(fp_number_type *src) {}

void __unpack_d(FLO_union_type *src, fp_number_type *dst) {}

int __fpcmp_parts_d(fp_number_type *a, fp_number_type *b) {}
