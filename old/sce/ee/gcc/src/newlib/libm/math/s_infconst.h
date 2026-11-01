// STATUS: NOT STARTED

#ifndef SCE_EE_GCC_SRC_NEWLIB_LIBM_MATH_S_INFCONST_H
#define SCE_EE_GCC_SRC_NEWLIB_LIBM_MATH_S_INFCONST_H

union __dmath {
	__uint32_t i[2];
	double d;
};

extern __dmath __infinity[1];


#endif // SCE_EE_GCC_SRC_NEWLIB_LIBM_MATH_S_INFCONST_H
