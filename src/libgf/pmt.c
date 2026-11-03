#include "gunsuv_usa/libgf/pmt.h"

Sint32 GFPmt_IsPmtData(Uint32* pmt)
{
    PmtHEADER* head;

    head = (PmtHEADER*)pmt;

    if (head->magic != 0x544D3250)
    {
        return 0;
    }

    return head->version == 0x7000;
}
