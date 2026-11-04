#include "gunsuv_usa/libgf/gfinstance.h"

extern Sint32 eval_end_flag_00674cb0;
extern Sint32 eval_time_00674cb4;
static void gfInstance_Eval2(GF_INSTANCE* inst);
INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", gfInstance_MakeRotMatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", gfInstance_Eval2);

void GFInstance_Eval(GF_INSTANCE* inst)
{
    eval_time_00674cb4 = 0;

    do
    {
        eval_end_flag_00674cb0 = 1;
        gfInstance_Eval2(inst);
        eval_time_00674cb4++;
    } while (eval_end_flag_00674cb0 == 0);
}

void GFInstance_Start()
{
    Uint32 i;

    for (i = 0; i < 1001; i++)
    {
        gf_drawOt[i]    = NULL;
        gf_drawOtPtr[i] = NULL;
    }
}

void GFInstance_End()
{
    Uint32 i;

    for (i = 0; i < 1001; i++)
    {
        if (gf_drawOtPtr[i] != NULL)
        {
            gf_drawOtPtr[i]->next = NULL;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_Draw);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_InitHead);

void GFInstance_SetLocalMatrix(GF_INSTANCE* inst, sceVu0FMATRIX m) 
{
    sceVu0CopyMatrix(inst->localMatrix, m);
}

void GFInstance_AddChild(GF_INSTANCE* parent, GF_INSTANCE* child) 
{
    GF_INSTANCE* inst;
    GF_INSTANCE* temp, *temp2; // not from STAB

    child->parent = parent;
    
    if (parent->child != NULL) 
    {
        temp = parent->child->bros;
        
        inst = parent->child;
        
        while (inst->bros != NULL) 
        {
            inst = temp;
            
            temp2 = inst->bros;
            
            temp = temp2;
        } 
        
        inst->bros = child;
    }
    else 
    {
        parent->child = child;
    }
}

void GFInstance_Remove(GF_INSTANCE* inst)
{
    GF_INSTANCE* inst2;

    if (inst->parent->child == inst)
    {
        inst->parent->child = inst->bros;
    }
    else
    {
        inst2 = inst->parent->child;

        while (inst2->bros != inst)
        {
            inst2 = inst2->bros;
        }

        inst2->bros = inst->bros;
    }

    inst->bros   = NULL;
    inst->parent = NULL;
}

void GFInstance_ChangeParent(GF_INSTANCE* inst, GF_INSTANCE* parent)
{
    GFInstance_Remove(inst);

    GFInstance_AddChild(parent, inst);
}

void GFInstance_SetEvalFunc(GF_INSTANCE* inst, gf_inst_evalfunc* func)
{
    if (func != NULL)
    {
        inst->evalFunc = func;
    }
    else
    {
        if (inst->type < 5)
        {
            inst->evalFunc = gf_default_evalfunc[inst->type];
        }
        else
        {
            inst->evalFunc = gf_default_evalfunc[0];
        }
    }
}

void GFInstance_SetDrawFunc(GF_INSTANCE* inst, gf_inst_drawfunc* func)
{
    if (func != NULL)
    {
        inst->drawFunc = func;
    }
    else
    {
        if (inst->type < 5)
        {
            inst->drawFunc = gf_default_drawfunc[inst->type];
        }
        else
        {
            inst->drawFunc = gf_default_drawfunc[0];
        }
    }
}

void GFInstance_SetFunc(GF_INSTANCE* inst, gf_inst_evalfunc* eval, gf_inst_drawfunc* draw)
{
    GFInstance_SetEvalFunc(inst, eval);
    GFInstance_SetDrawFunc(inst, draw);
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_SetSortKeyMax);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_SetSortKeyMin);
