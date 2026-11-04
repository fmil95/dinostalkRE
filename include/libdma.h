// STATUS: NOT STARTED

#ifndef LIBDMA_H
#define LIBDMA_H

int sceDmaGetChan();
int sceDmaReset();
int sceDmaDebug();
int sceDmaPutEnv();
int sceDmaGetEnv();
int sceDmaPutStallAddr();
int sceDmaSend();
int sceDmaSendN();
int sceDmaSendI();
int sceDmaRecv();
int sceDmaRecvN();
int sceDmaRecvI();
int sceDmaSync();
int sceDmaWatch();
int sceDmaPause();
int sceDmaRestart();

#endif // LIBDMA_H
