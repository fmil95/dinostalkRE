// STATUS: NOT STARTED

#include "stdio.h"

int __sread(void *cookie, char *buf, int n) {
	int ret;
}

int __swrite(void *cookie, char *buf, int n) {}

fpos_t __sseek(void *cookie, fpos_t offset, int whence) {
	off_t ret;
}

int __sclose(void *cookie) {}
