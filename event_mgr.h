//==========================================================================================================
// event_mgr.h - Defines an event tracker
//==========================================================================================================
#include <inttypes.h>

enum event_t
{
    EVT_FIRST = 0,
    EVT_EVENT1 = EVT_FIRST,
    EVT_EVENT2,
    EVT_EVENT3,
    EVT_EVENT4,
    EVT_EVENT5,
    EVT_LAST
};

class CEventMgr
{
public:

    // Clear all events
    void    clear();

    // Clear a specific event
    void    clear(event_t ev);

    // Record an event
    void    record(event_t ev);

    // Check to see if an event has occured
    bool    occured(event_t ev);

protected:

    uint8_t m_ev_list[EVT_LAST - EVT_FIRST];

};
//==========================================================================================================

