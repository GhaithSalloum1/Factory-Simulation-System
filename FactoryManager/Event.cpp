#include"Event.h"

Event::Event(string description){
    this->description =description;
    timestamp=time(0);
}

Event::~Event()
{
}

string Event::getDescription()
{
    return description;
}

time_t Event::getTimestamp()
{
    return timestamp;
}


ostream& operator<<(ostream& os, const Event& event)
{
    // 1. Create a buffer large enough to hold the date string (26 is the standard minimum)
    char timeBuffer[26];

    // 2. Call ctime_s with (buffer, buffer_size, time_pointer)
    ctime_s(timeBuffer, sizeof(timeBuffer), &event.timestamp);

    // 3. Output the buffer
    os << "Event Description: " << event.description
        << ", Timestamp: " << timeBuffer;
    return os;
}