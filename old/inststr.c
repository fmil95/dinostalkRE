// STATUS: NOT STARTED

#include "inststr.h"
#include "gfinstance.h"

gf_inst_drawfunc gf_string_drawfunc;

gf_inst_evalfunc gf_string_evalfunc;

/* 100% match */
void String_MakeInstance(Unknown3* arg0, int arg1, int arg2, int arg3) 
{
    GFInstance_InitHead((GF_INSTANCE*)arg0);
    
    GFInstance_SetFunc((GF_INSTANCE*)arg0, &gf_string_evalfunc, &gf_string_drawfunc);
    
    arg0->unk114 = 0;
    arg0->unk118 = arg1;
    arg0->unk10C = arg2;
    arg0->unk110 = arg3;
    
    arg0->unk100 = 2;
}

String_SetString() {}

String_SetPosition() {}

String_draw() {}
