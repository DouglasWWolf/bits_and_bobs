#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include "event_mgr.h"

CEventMgr EventMgr;

int main()
{
    EventMgr.clear();

    EventMgr.record(EVT_EVENT1);

    if (EventMgr.occured(EVT_EVENT1))
    {
        printf("EVT_EVENT1 occured\n");        
    }

    // Tell the OS that all is well
    return 0;
}
