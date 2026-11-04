// STATUS: NOT STARTED

#ifndef G_INSTPACKET_H
#define G_INSTPACKET_H

GFSetpkt_MakeInstance();
int GFSetpkt_SetPacket0(void* a, int b);
int GFSetpkt_SetPacket1(void* a, int b);
int GFSetpkt_SetPacket(int a, int b, int c);
void GFSetpkt_SetRefInst(void* p, int v);
GFSetpkt_Eval();
GFSetpkt_Draw();
char* GFDrawenv_MakeInstance(char* a);
void GFDrawenv_SetDb(void* p, int v);
void GFDrawenv_SetClearZ(void* p, short v);
void GFDrawenv_SetClearRGB(void* p, short v);
GFDrawenv_Draw();

#endif // G_INSTPACKET_H
