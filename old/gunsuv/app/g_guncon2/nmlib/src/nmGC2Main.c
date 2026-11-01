// STATUS: NOT STARTED

#include "nmGC2Main.h"

struct sce_stat {
	unsigned int st_mode;
	unsigned int st_attr;
	unsigned int st_size;
	unsigned char st_ctime[8];
	unsigned char st_atime[8];
	unsigned char st_mtime[8];
	unsigned int st_hisize;
	unsigned int st_private[6];
};

struct sce_dirent {
	sce_stat d_stat;
	char d_name[256];
	void *d_private;
};

typedef struct {
	unsigned int epc;
	unsigned int gp;
	unsigned int sp;
	unsigned int dummy;
} sceExecData;

struct _sif_rpc_data {
	void *paddr;
	unsigned int pid;
	int tid;
	unsigned int mode;
};

typedef _sif_rpc_data sceSifRpcData;
typedef void (*sceSifEndFunc)(/* parameters unknown */);

struct _sif_client_data {
	_sif_rpc_data rpcd;
	unsigned int command;
	void *buff;
	void *cbuff;
	sceSifEndFunc func;
	void *para;
	_sif_serve_data *serve;
};

typedef _sif_client_data sceSifClientData;

struct _sif_receive_data {
	_sif_rpc_data rpcd;
	void *src;
	void *dest;
	int size;
};

typedef _sif_receive_data sceSifReceiveData;
typedef void* (*sceSifRpcFunc)(/* parameters unknown */);

struct _sif_serve_data {
	unsigned int command;
	sceSifRpcFunc func;
	void *buff;
	int size;
	sceSifRpcFunc cfunc;
	void *cbuff;
	int csize;
	sceSifClientData *client;
	void *paddr;
	unsigned int fno;
	void *receive;
	int rsize;
	int rmode;
	unsigned int rid;
	_sif_serve_data *link;
	_sif_serve_data *next;
	_sif_queue_data *base;
};

typedef _sif_serve_data sceSifServeData;

struct _sif_queue_data {
	int key;
	int active;
	_sif_serve_data *link;
	_sif_serve_data *start;
	_sif_serve_data *end;
	_sif_queue_data *next;
};

typedef _sif_queue_data sceSifQueueData;

typedef struct nm_TimerRegAdr_tag {
	u_int *count;
	u_int *mode;
	u_int *comp;
	u_int *hold;
} nm_TimerRegAdr_t;

//typedef nm_TimerRegAdr_tag nm_TimerRegAdr_t;

static nm_TimerRegAdr_t nm_TimerRegAdr[1];
//static nm_TimerRegAdr_t nm_TimerRegAdr[0] = {
//};

static int nm_MeterTimerNo = 0;
static sceSifClientData cdUsbGun;
static u_char sdata[32];
static int time0;
static int time1;

int nmUsbGunInit() {
	unsigned int i;
}

int nmUsbGunGetInfo(u_char *info) {}

int nmUsbGunRead(u_int no, char *data) {}

int nmUsbGunGetLocation(int no, u_char *location) {}

int nmUsbGunGetConfig(u_char *config) {}

int nmUsbTransCtrl(int no, u_char *data) {}

int nmUsbGunSync(int mode) {}

/* 100% match */
void nmPadTimerReset() 
{
    int no;

    no = *nm_TimerRegAdr[nm_MeterTimerNo].count;
    
    time0 = no;
}

void nmPadWaitTimer(int time) {
	int no;
	int i;
}
