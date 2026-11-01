// STATUS: NOT STARTED

#ifndef SCE_EE_GCC_SRC_GCC_FRAME_DWARF2_H
#define SCE_EE_GCC_SRC_GCC_FRAME_DWARF2_H

typedef struct {
	void *cfa;
	void *eh_ptr;
	long int cfa_offset;
	long int base_offset;
	long int args_size;
	long int reg_or_offset[123];
	short unsigned int cfa_reg;
	short unsigned int retaddr_column;
	char saved[123];
	char indirect;
} frame_state;

struct object {
	void *pc_begin;
	void *pc_end;
	dwarf_fde *fde_begin;
	dwarf_fde **fde_array;
	size_t count;
	object *next;
};

extern void *key_value[256];

void __register_frame_info(void *begin, object *ob);
void __register_frame(void *begin);
void __register_frame_info_table(void *begin, object *ob);
void __register_frame_table(void *begin);
void* __deregister_frame_info(void *begin);
void __deregister_frame(void *begin);
frame_state* __frame_state_for(void *pc_target, frame_state *state_in);

#endif // SCE_EE_GCC_SRC_GCC_FRAME_DWARF2_H
