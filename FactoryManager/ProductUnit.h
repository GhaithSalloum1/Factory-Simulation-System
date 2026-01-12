#pragma once
#include "Libraries.h"
#include "Event.h"

class ProductUnit
{
private:
    static int counter;
    int unitID;
    int parentOrderID;
    bool isFinished;
    vector<Event> history;

public:
    ProductUnit();
    ProductUnit(int parentOrderID);
    void addEvent(string desc);
};