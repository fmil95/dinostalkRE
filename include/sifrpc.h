// STATUS: NOT STARTED

#ifndef SIFRPC_H
#define SIFRPC_H

int sceSifInitRpc();
int sceSifExitRpc();
int sceSifGetOtherData();
int sceSifBindRpc();
int sceSifCallRpc();
int sceSifCheckStatRpc();
int sceSifSetRpcQueue();
int sceSifRegisterRpc();
int sceSifRemoveRpc();
int sceSifRemoveRpcQueue();
int sceSifGetNextRequest();
int sceSifExecRequest();
int sceSifRpcLoop();

#endif // SIFRPC_H
