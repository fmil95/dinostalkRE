// STATUS: NOT STARTED

#ifndef SCE_EE_GCC_SRC_GCC_LIBGCC2_H
#define SCE_EE_GCC_SRC_GCC_LIBGCC2_H

typedef long int DItype;
typedef float SFtype;
typedef long unsigned int UDItype;

DItype __muldi3(DItype u, DItype v);
DItype __fixunssfdi(SFtype original_a);
void __do_global_dtors();
void __do_global_ctors();
void __main();
DFtype __floatdidf(DItype u);
DItype __divdi3(DItype u, DItype v);
DItype __moddi3(DItype u, DItype v);
UDItype __udivdi3(UDItype n, UDItype d);
UDItype __umoddi3(UDItype u, UDItype v);
DItype __fixunsdfdi(DFtype a);
DItype __fixdfdi(DFtype a);

#endif // SCE_EE_GCC_SRC_GCC_LIBGCC2_H
