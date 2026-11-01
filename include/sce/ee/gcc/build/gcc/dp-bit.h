// STATUS: NOT STARTED

#ifndef SCE_EE_GCC_BUILD_GCC_DP_BIT_H
#define SCE_EE_GCC_BUILD_GCC_DP_BIT_H

// warning: multiple differing types with the same name (type name not equal)
typedef DFtype FLO_type;
typedef int SItype;
typedef unsigned int USItype;
// warning: multiple differing types with the same name (type name not equal)
typedef UDItype fractype;
// warning: multiple differing types with the same name (type name not equal)
typedef USItype halffractype;

// warning: multiple differing types with the same name (size not equal)
typedef union {
	FLO_type value;
	fractype value_raw;
	halffractype words[2];
	struct {
		fractype fraction : 52;
		unsigned int exp : 11;
		unsigned int sign : 1;
	} bits;
} FLO_union_type;

// warning: multiple differing types with the same name (size not equal)
typedef struct {
	fp_class_type class;
	unsigned int sign;
	int normal_exp;
	union {
		fractype ll;
		halffractype l[2];
	} fraction;
} fp_number_type;

extern fp_number_type __thenan_df;

FLO_type dpadd(FLO_type arg_a, FLO_type arg_b);
FLO_type dpsub(FLO_type arg_a, FLO_type arg_b);
FLO_type dpmul(FLO_type arg_a, FLO_type arg_b);
FLO_type dpdiv(FLO_type arg_a, FLO_type arg_b);
SItype dpcmp(FLO_type arg_a, FLO_type arg_b);
FLO_type litodp(SItype arg_a);
SItype dptoli(FLO_type arg_a);
DFtype __make_dp(fp_class_type class, unsigned int sign, int exp, UDItype frac);
SFtype dptofp(DFtype arg_a);
USItype dptoul(FLO_type arg_a);
FLO_type __pack_d(fp_number_type *src);
void __unpack_d(FLO_union_type *src, fp_number_type *dst);
int __fpcmp_parts_d(fp_number_type *a, fp_number_type *b);

#endif // SCE_EE_GCC_BUILD_GCC_DP_BIT_H
