#include "ProductUnit.h"


int ProductUnit::counter = 1;

ProductUnit::ProductUnit() : unitID(0), parentOrderID(0), isFinished(false) {}

void ProductUnit::addEvent(string desc){
    history.push_back(Event(desc));
}
ProductUnit::ProductUnit(int parentOrderID){
    unitID = ++counter;
    this->parentOrderID = parentOrderID;
    isFinished = false;
}
