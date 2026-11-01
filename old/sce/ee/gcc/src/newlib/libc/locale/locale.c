// STATUS: NOT STARTED

#include "locale.h"

int __mb_cur_max = 1;

static lconv lconv = {
	/* .decimal_point = */ 0x670840,
	/* .thousands_sep = */ 0x670838,
	/* .grouping = */ 0x670838,
	/* .int_curr_symbol = */ 0x670838,
	/* .currency_symbol = */ 0x670838,
	/* .mon_decimal_point = */ 0x670838,
	/* .mon_thousands_sep = */ 0x670838,
	/* .mon_grouping = */ 0x670838,
	/* .positive_sign = */ 0x670838,
	/* .negative_sign = */ 0x670838,
	/* .int_frac_digits = */ 127,
	/* .frac_digits = */ 127,
	/* .p_cs_precedes = */ 127,
	/* .p_sep_by_space = */ 127,
	/* .n_cs_precedes = */ 127,
	/* .n_sep_by_space = */ 127,
	/* .p_sign_posn = */ 127,
	/* .n_sign_posn = */ 127
};

char* _setlocale_r(_reent *p, int category, char *locale) {}

lconv* _localeconv_r(_reent *data) {}

char* setlocale(int category, char *locale) {}

lconv* localeconv() {}
