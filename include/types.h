/**
 * @file types.h
 *
 * @brief Common types used across the codebase.
*/
#ifndef TYPES_H
#define TYPES_H

#include <stddef.h>
#include <eetypes.h>

// Exact-width integers (don't use these in most cases)
typedef signed char      int8_t;
typedef short            int16_t;
typedef int              int32_t;
typedef long long        int64_t;

typedef unsigned char    uint8_t;
typedef unsigned short   uint16_t;
typedef unsigned int     uint32_t;
typedef unsigned long long uint64_t;

// Unsigned aliases
typedef uint8_t     uchar;
typedef uint16_t    ushort;
typedef uint32_t    uint;
typedef uint64_t    ulong;

// Helper types for unknown struct fields
typedef uchar   undefined1;
typedef ushort  undefined2;
typedef uint    undefined4;
typedef ulong   undefined8;

// Misc
typedef uchar byte;
//typedef union QW;

#define FALSE 0
#define TRUE 1

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

#endif // TYPES_H
