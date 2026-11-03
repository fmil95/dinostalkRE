#include "gunsuv_usa/libgf/gfinstance.h"
#include "frozen_types.h"

void String_MakeInstance(Unknown3* prm0, int prm1, int prm2, int prm3) 
{
    GFInstance_InitHead((GF_INSTANCE*)prm0);
    
    GFInstance_SetFunc((GF_INSTANCE*)prm0, &gf_string_evalfunc, &gf_string_drawfunc);
    
    prm0->unk114 = 0;
    prm0->unk118 = prm1;
    
    prm0->unk10C = prm2;
    prm0->unk110 = prm3;
    
    prm0->unk100 = 2;
}

void String_SetString(void* a, int b)
{
    STRUCT_OFFSET(a, 0x114, int) = b;
    STRUCT_OFFSET(a, 0x100, int) = (STRUCT_OFFSET(a, 0x100, int) & -3);
}

void String_SetPosition(void* a, int b, int c)
{
    STRUCT_OFFSET(a, 0x108, int) = c;
    STRUCT_OFFSET(a, 0x104, int) = b;
    STRUCT_OFFSET(a, 0x100, int) = (STRUCT_OFFSET(a, 0x100, int) | 0x1);
}

INCLUDE_ASM("asm/nonmatchings/inststr", String_draw);
