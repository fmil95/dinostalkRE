// STATUS: NOT STARTED

#include "mlock.h"

static int __malloc_lock_owner = -1;
static int call_count = 0;

void __malloc_lock(_reent *ptr) {
	int id;
}

void __malloc_unlock(_reent *ptr) {}
