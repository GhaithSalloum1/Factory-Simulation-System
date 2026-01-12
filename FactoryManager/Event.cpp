#include"Event.h"

Event::Event(string description){
    this->description = description;
    timestamp = time(0);
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
    char timeBuffer[26];
    ctime_s(timeBuffer, sizeof(timeBuffer), &event.timestamp);
    os << "Event Description: " << event.description
        << ", Timestamp: " << timeBuffer;
    return os;
}