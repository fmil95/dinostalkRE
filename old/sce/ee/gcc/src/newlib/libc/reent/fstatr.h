// STATUS: NOT STARTED

#ifndef SCE_EE_GCC_SRC_NEWLIB_LIBC_REENT_FSTATR_H
#define SCE_EE_GCC_SRC_NEWLIB_LIBC_REENT_FSTATR_H

typedef long int time_t;
typedef short unsigned int ino_t;
typedef short int dev_t;
typedef short unsigned int uid_t;
typedef short unsigned int gid_t;
typedef unsigned int mode_t;
typedef short unsigned int nlink_t;

struct stat {
	dev_t st_dev;
	ino_t st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	off_t st_size;
	time_t st_atime;
	long int st_spare1;
	time_t st_mtime;
	long int st_spare2;
	time_t st_ctime;
	long int st_spare3;
	long int st_blksize;
	long int st_blocks;
	long int st_spare4[2];
};

int _fstat_r(_reent *ptr, int fd, stat *pstat);

#endif // SCE_EE_GCC_SRC_NEWLIB_LIBC_REENT_FSTATR_H
