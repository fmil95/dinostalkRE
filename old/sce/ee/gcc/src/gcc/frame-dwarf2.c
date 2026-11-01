// STATUS: NOT STARTED

#include "frame-dwarf2.h"

enum dwarf_tag {
	DW_TAG_padding = 0,
	DW_TAG_array_type = 1,
	DW_TAG_class_type = 2,
	DW_TAG_entry_point = 3,
	DW_TAG_enumeration_type = 4,
	DW_TAG_formal_parameter = 5,
	DW_TAG_imported_declaration = 8,
	DW_TAG_label = 10,
	DW_TAG_lexical_block = 11,
	DW_TAG_member = 13,
	DW_TAG_pointer_type = 15,
	DW_TAG_reference_type = 16,
	DW_TAG_compile_unit = 17,
	DW_TAG_string_type = 18,
	DW_TAG_structure_type = 19,
	DW_TAG_subroutine_type = 21,
	DW_TAG_typedef = 22,
	DW_TAG_union_type = 23,
	DW_TAG_unspecified_parameters = 24,
	DW_TAG_variant = 25,
	DW_TAG_common_block = 26,
	DW_TAG_common_inclusion = 27,
	DW_TAG_inheritance = 28,
	DW_TAG_inlined_subroutine = 29,
	DW_TAG_module = 30,
	DW_TAG_ptr_to_member_type = 31,
	DW_TAG_set_type = 32,
	DW_TAG_subrange_type = 33,
	DW_TAG_with_stmt = 34,
	DW_TAG_access_declaration = 35,
	DW_TAG_base_type = 36,
	DW_TAG_catch_block = 37,
	DW_TAG_const_type = 38,
	DW_TAG_constant = 39,
	DW_TAG_enumerator = 40,
	DW_TAG_file_type = 41,
	DW_TAG_friend = 42,
	DW_TAG_namelist = 43,
	DW_TAG_namelist_item = 44,
	DW_TAG_packed_type = 45,
	DW_TAG_subprogram = 46,
	DW_TAG_template_type_param = 47,
	DW_TAG_template_value_param = 48,
	DW_TAG_thrown_type = 49,
	DW_TAG_try_block = 50,
	DW_TAG_variant_part = 51,
	DW_TAG_variable = 52,
	DW_TAG_volatile_type = 53,
	DW_TAG_MIPS_loop = 16513,
	DW_TAG_format_label = 16641,
	DW_TAG_function_template = 16642,
	DW_TAG_class_template = 16643
};

enum dwarf_form {
	DW_FORM_addr = 1,
	DW_FORM_block2 = 3,
	DW_FORM_block4 = 4,
	DW_FORM_data2 = 5,
	DW_FORM_data4 = 6,
	DW_FORM_data8 = 7,
	DW_FORM_string = 8,
	DW_FORM_block = 9,
	DW_FORM_block1 = 10,
	DW_FORM_data1 = 11,
	DW_FORM_flag = 12,
	DW_FORM_sdata = 13,
	DW_FORM_strp = 14,
	DW_FORM_udata = 15,
	DW_FORM_ref_addr = 16,
	DW_FORM_ref1 = 17,
	DW_FORM_ref2 = 18,
	DW_FORM_ref4 = 19,
	DW_FORM_ref8 = 20,
	DW_FORM_ref_udata = 21,
	DW_FORM_indirect = 22
};

enum dwarf_attribute {
	DW_AT_sibling = 1,
	DW_AT_location = 2,
	DW_AT_name = 3,
	DW_AT_ordering = 9,
	DW_AT_subscr_data = 10,
	DW_AT_byte_size = 11,
	DW_AT_bit_offset = 12,
	DW_AT_bit_size = 13,
	DW_AT_element_list = 15,
	DW_AT_stmt_list = 16,
	DW_AT_low_pc = 17,
	DW_AT_high_pc = 18,
	DW_AT_language = 19,
	DW_AT_member = 20,
	DW_AT_discr = 21,
	DW_AT_discr_value = 22,
	DW_AT_visibility = 23,
	DW_AT_import = 24,
	DW_AT_string_length = 25,
	DW_AT_common_reference = 26,
	DW_AT_comp_dir = 27,
	DW_AT_const_value = 28,
	DW_AT_containing_type = 29,
	DW_AT_default_value = 30,
	DW_AT_inline = 32,
	DW_AT_is_optional = 33,
	DW_AT_lower_bound = 34,
	DW_AT_producer = 37,
	DW_AT_prototyped = 39,
	DW_AT_return_addr = 42,
	DW_AT_start_scope = 44,
	DW_AT_stride_size = 46,
	DW_AT_upper_bound = 47,
	DW_AT_abstract_origin = 49,
	DW_AT_accessibility = 50,
	DW_AT_address_class = 51,
	DW_AT_artificial = 52,
	DW_AT_base_types = 53,
	DW_AT_calling_convention = 54,
	DW_AT_count = 55,
	DW_AT_data_member_location = 56,
	DW_AT_decl_column = 57,
	DW_AT_decl_file = 58,
	DW_AT_decl_line = 59,
	DW_AT_declaration = 60,
	DW_AT_discr_list = 61,
	DW_AT_encoding = 62,
	DW_AT_external = 63,
	DW_AT_frame_base = 64,
	DW_AT_friend = 65,
	DW_AT_identifier_case = 66,
	DW_AT_macro_info = 67,
	DW_AT_namelist_items = 68,
	DW_AT_priority = 69,
	DW_AT_segment = 70,
	DW_AT_specification = 71,
	DW_AT_static_link = 72,
	DW_AT_type = 73,
	DW_AT_use_location = 74,
	DW_AT_variable_parameter = 75,
	DW_AT_virtuality = 76,
	DW_AT_vtable_elem_location = 77,
	DW_AT_MIPS_fde = 8193,
	DW_AT_MIPS_loop_begin = 8194,
	DW_AT_MIPS_tail_loop_begin = 8195,
	DW_AT_MIPS_epilog_begin = 8196,
	DW_AT_MIPS_loop_unroll_factor = 8197,
	DW_AT_MIPS_software_pipeline_depth = 8198,
	DW_AT_MIPS_linkage_name = 8199,
	DW_AT_MIPS_stride = 8200,
	DW_AT_MIPS_abstract_name = 8201,
	DW_AT_MIPS_clone_origin = 8202,
	DW_AT_MIPS_has_inlines = 8203,
	DW_AT_sf_names = 8449,
	DW_AT_src_info = 8450,
	DW_AT_mac_info = 8451,
	DW_AT_src_coords = 8452,
	DW_AT_body_begin = 8453,
	DW_AT_body_end = 8454
};

enum dwarf_location_atom {
	DW_OP_addr = 3,
	DW_OP_deref = 6,
	DW_OP_const1u = 8,
	DW_OP_const1s = 9,
	DW_OP_const2u = 10,
	DW_OP_const2s = 11,
	DW_OP_const4u = 12,
	DW_OP_const4s = 13,
	DW_OP_const8u = 14,
	DW_OP_const8s = 15,
	DW_OP_constu = 16,
	DW_OP_consts = 17,
	DW_OP_dup = 18,
	DW_OP_drop = 19,
	DW_OP_over = 20,
	DW_OP_pick = 21,
	DW_OP_swap = 22,
	DW_OP_rot = 23,
	DW_OP_xderef = 24,
	DW_OP_abs = 25,
	DW_OP_and = 26,
	DW_OP_div = 27,
	DW_OP_minus = 28,
	DW_OP_mod = 29,
	DW_OP_mul = 30,
	DW_OP_neg = 31,
	DW_OP_not = 32,
	DW_OP_or = 33,
	DW_OP_plus = 34,
	DW_OP_plus_uconst = 35,
	DW_OP_shl = 36,
	DW_OP_shr = 37,
	DW_OP_shra = 38,
	DW_OP_xor = 39,
	DW_OP_bra = 40,
	DW_OP_eq = 41,
	DW_OP_ge = 42,
	DW_OP_gt = 43,
	DW_OP_le = 44,
	DW_OP_lt = 45,
	DW_OP_ne = 46,
	DW_OP_skip = 47,
	DW_OP_lit0 = 48,
	DW_OP_lit1 = 49,
	DW_OP_lit2 = 50,
	DW_OP_lit3 = 51,
	DW_OP_lit4 = 52,
	DW_OP_lit5 = 53,
	DW_OP_lit6 = 54,
	DW_OP_lit7 = 55,
	DW_OP_lit8 = 56,
	DW_OP_lit9 = 57,
	DW_OP_lit10 = 58,
	DW_OP_lit11 = 59,
	DW_OP_lit12 = 60,
	DW_OP_lit13 = 61,
	DW_OP_lit14 = 62,
	DW_OP_lit15 = 63,
	DW_OP_lit16 = 64,
	DW_OP_lit17 = 65,
	DW_OP_lit18 = 66,
	DW_OP_lit19 = 67,
	DW_OP_lit20 = 68,
	DW_OP_lit21 = 69,
	DW_OP_lit22 = 70,
	DW_OP_lit23 = 71,
	DW_OP_lit24 = 72,
	DW_OP_lit25 = 73,
	DW_OP_lit26 = 74,
	DW_OP_lit27 = 75,
	DW_OP_lit28 = 76,
	DW_OP_lit29 = 77,
	DW_OP_lit30 = 78,
	DW_OP_lit31 = 79,
	DW_OP_reg0 = 80,
	DW_OP_reg1 = 81,
	DW_OP_reg2 = 82,
	DW_OP_reg3 = 83,
	DW_OP_reg4 = 84,
	DW_OP_reg5 = 85,
	DW_OP_reg6 = 86,
	DW_OP_reg7 = 87,
	DW_OP_reg8 = 88,
	DW_OP_reg9 = 89,
	DW_OP_reg10 = 90,
	DW_OP_reg11 = 91,
	DW_OP_reg12 = 92,
	DW_OP_reg13 = 93,
	DW_OP_reg14 = 94,
	DW_OP_reg15 = 95,
	DW_OP_reg16 = 96,
	DW_OP_reg17 = 97,
	DW_OP_reg18 = 98,
	DW_OP_reg19 = 99,
	DW_OP_reg20 = 100,
	DW_OP_reg21 = 101,
	DW_OP_reg22 = 102,
	DW_OP_reg23 = 103,
	DW_OP_reg24 = 104,
	DW_OP_reg25 = 105,
	DW_OP_reg26 = 106,
	DW_OP_reg27 = 107,
	DW_OP_reg28 = 108,
	DW_OP_reg29 = 109,
	DW_OP_reg30 = 110,
	DW_OP_reg31 = 111,
	DW_OP_breg0 = 112,
	DW_OP_breg1 = 113,
	DW_OP_breg2 = 114,
	DW_OP_breg3 = 115,
	DW_OP_breg4 = 116,
	DW_OP_breg5 = 117,
	DW_OP_breg6 = 118,
	DW_OP_breg7 = 119,
	DW_OP_breg8 = 120,
	DW_OP_breg9 = 121,
	DW_OP_breg10 = 122,
	DW_OP_breg11 = 123,
	DW_OP_breg12 = 124,
	DW_OP_breg13 = 125,
	DW_OP_breg14 = 126,
	DW_OP_breg15 = 127,
	DW_OP_breg16 = 128,
	DW_OP_breg17 = 129,
	DW_OP_breg18 = 130,
	DW_OP_breg19 = 131,
	DW_OP_breg20 = 132,
	DW_OP_breg21 = 133,
	DW_OP_breg22 = 134,
	DW_OP_breg23 = 135,
	DW_OP_breg24 = 136,
	DW_OP_breg25 = 137,
	DW_OP_breg26 = 138,
	DW_OP_breg27 = 139,
	DW_OP_breg28 = 140,
	DW_OP_breg29 = 141,
	DW_OP_breg30 = 142,
	DW_OP_breg31 = 143,
	DW_OP_regx = 144,
	DW_OP_fbreg = 145,
	DW_OP_bregx = 146,
	DW_OP_piece = 147,
	DW_OP_deref_size = 148,
	DW_OP_xderef_size = 149,
	DW_OP_nop = 150
};

enum dwarf_type {
	DW_ATE_void = 0,
	DW_ATE_address = 1,
	DW_ATE_boolean = 2,
	DW_ATE_complex_float = 3,
	DW_ATE_float = 4,
	DW_ATE_signed = 5,
	DW_ATE_signed_char = 6,
	DW_ATE_unsigned = 7,
	DW_ATE_unsigned_char = 8
};

enum dwarf_array_dim_ordering {
	DW_ORD_row_major = 0,
	DW_ORD_col_major = 1
};

enum dwarf_access_attribute {
	DW_ACCESS_public = 1,
	DW_ACCESS_protected = 2,
	DW_ACCESS_private = 3
};

enum dwarf_visibility_attribute {
	DW_VIS_local = 1,
	DW_VIS_exported = 2,
	DW_VIS_qualified = 3
};

enum dwarf_virtuality_attribute {
	DW_VIRTUALITY_none = 0,
	DW_VIRTUALITY_virtual = 1,
	DW_VIRTUALITY_pure_virtual = 2
};

enum dwarf_id_case {
	DW_ID_case_sensitive = 0,
	DW_ID_up_case = 1,
	DW_ID_down_case = 2,
	DW_ID_case_insensitive = 3
};

enum dwarf_calling_convention {
	DW_CC_normal = 1,
	DW_CC_program = 2,
	DW_CC_nocall = 3
};

enum dwarf_inline_attribute {
	DW_INL_not_inlined = 0,
	DW_INL_inlined = 1,
	DW_INL_declared_not_inlined = 2,
	DW_INL_declared_inlined = 3
};

enum dwarf_discrim_list {
	DW_DSC_label = 0,
	DW_DSC_range = 1
};

enum dwarf_line_number_ops {
	DW_LNS_extended_op = 0,
	DW_LNS_copy = 1,
	DW_LNS_advance_pc = 2,
	DW_LNS_advance_line = 3,
	DW_LNS_set_file = 4,
	DW_LNS_set_column = 5,
	DW_LNS_negate_stmt = 6,
	DW_LNS_set_basic_block = 7,
	DW_LNS_const_add_pc = 8,
	DW_LNS_fixed_advance_pc = 9
};

enum dwarf_line_number_x_ops {
	DW_LNE_end_sequence = 1,
	DW_LNE_set_address = 2,
	DW_LNE_define_file = 3
};

enum dwarf_call_frame_info {
	DW_CFA_advance_loc = 64,
	DW_CFA_offset = 128,
	DW_CFA_restore = 192,
	DW_CFA_nop = 0,
	DW_CFA_set_loc = 1,
	DW_CFA_advance_loc1 = 2,
	DW_CFA_advance_loc2 = 3,
	DW_CFA_advance_loc4 = 4,
	DW_CFA_offset_extended = 5,
	DW_CFA_restore_extended = 6,
	DW_CFA_undefined = 7,
	DW_CFA_same_value = 8,
	DW_CFA_register = 9,
	DW_CFA_remember_state = 10,
	DW_CFA_restore_state = 11,
	DW_CFA_def_cfa = 12,
	DW_CFA_def_cfa_register = 13,
	DW_CFA_def_cfa_offset = 14,
	DW_CFA_def_cfa_expression = 15,
	DW_CFA_expression = 16,
	DW_CFA_MIPS_advance_loc8 = 29,
	DW_CFA_GNU_window_save = 45,
	DW_CFA_GNU_args_size = 46,
	DW_CFA_GNU_negative_offset_extended = 47
};

enum dwarf_source_language {
	DW_LANG_C89 = 1,
	DW_LANG_C = 2,
	DW_LANG_Ada83 = 3,
	DW_LANG_C_plus_plus = 4,
	DW_LANG_Cobol74 = 5,
	DW_LANG_Cobol85 = 6,
	DW_LANG_Fortran77 = 7,
	DW_LANG_Fortran90 = 8,
	DW_LANG_Pascal83 = 9,
	DW_LANG_Modula2 = 10,
	DW_LANG_Java = 11,
	DW_LANG_Mips_Assembler = 32769
};

enum dwarf_macinfo_record_type {
	DW_MACINFO_define = 1,
	DW_MACINFO_undef = 2,
	DW_MACINFO_start_file = 3,
	DW_MACINFO_end_file = 4,
	DW_MACINFO_vendor_ext = 255
};

typedef int __gthread_key_t;
typedef int __gthread_once_t;
typedef int __gthread_mutex_t;
typedef int sword;
typedef unsigned int uword;
typedef unsigned int uaddr;
typedef int saddr;
typedef unsigned char ubyte;

struct dwarf_cie {
	uword length;
	sword CIE_id;
	ubyte version;
	char augmentation[0];
};

struct dwarf_fde {
	uword length;
	sword CIE_delta;
	void *pc_begin;
	uaddr pc_range;
};

typedef dwarf_fde fde;

struct cie_info {
	char *augmentation;
	void *eh_ptr;
	int code_align;
	int data_align;
	unsigned int ra_regno;
};

struct frame_state_internal {
	frame_state s;
	frame_state_internal *saved_state;
};

union unaligned {
	void *p;
	short unsigned int b2;
	unsigned int b4;
	long unsigned int b8;
};

typedef struct {
	fde **array;
	size_t count;
} fde_vector;

typedef struct {
	fde_vector linear;
	fde_vector erratic;
} fde_accumulator;

static __gthread_mutex_t object_mutex = 0;
void *key_value[256];
static object *objects;

static void* decode_uleb128(unsigned char *buf, unsigned int *r) {}

static void* decode_sleb128(unsigned char *buf, int *r) {}

static void fde_merge(fde_vector *v1, fde_vector *v2) {}

static fde** end_fde_sort(fde_accumulator *accu, size_t count) {}

void __register_frame_info(void *begin, object *ob) {}

void __register_frame(void *begin) {}

void __register_frame_info_table(void *begin, object *ob) {}

void __register_frame_table(void *begin) {}

void* __deregister_frame_info(void *begin) {}

void __deregister_frame(void *begin) {}

static size_t count_fdes(fde *this_fde) {}

static void add_fdes(fde *this_fde, fde_accumulator *accu, void **beg_ptr, void **end_ptr) {}

static fde* search_fdes(fde *this_fde, void *pc) {}

static void frame_init(object *ob) {}

static fde* find_fde(void *pc) {}

static void* extract_cie_info(fde *f, cie_info *c) {}

static void* decode_stack_op(unsigned char *buf, frame_state *state) {}

static void* execute_cfa_insn(void *p, frame_state_internal *state, cie_info *info, void **pc) {}

frame_state* __frame_state_for(void *pc_target, frame_state *state_in) {}
