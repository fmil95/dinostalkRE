// STATUS: NOT STARTED

#ifndef SOUND_BUF_H
#define SOUND_BUF_H

getFIFOindex();
setD3_CHCR();
setD4_CHCR();
scTag2();
viBufCreate();
viBufReset();
viBufBeginPut();
viBufEndPut();
viBufAddDMA();
viBufStopDMA();
viBufRestartDMA();
viBufDelete();
viBufIsActive();
viBufCount();
viBufFlush();
viBufModifyPts();
viBufPutTs();
viBufGetTs();
voBufCreate();
voBufDelete();
voBufReset();
voBufIsFull();
voBufIncCount();
voBufGetData();
voBufIsEmpty();
voBufGetTag();
voBufGetAddr();
voBufDecCount();

#endif // SOUND_BUF_H
