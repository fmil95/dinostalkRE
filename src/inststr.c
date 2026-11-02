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

INCLUDE_ASM("asm/nonmatchings/inststr", String_SetString);

INCLUDE_ASM("asm/nonmatchings/inststr", String_SetPosition);

INCLUDE_ASM("asm/nonmatchings/inststr", String_draw);
