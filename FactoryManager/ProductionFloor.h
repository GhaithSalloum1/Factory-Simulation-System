#pragma once
#include "Libraries.h"
#include "Order.h"
#include "ProductUnit.h"

class ProductionFloor {
private:
    vector<priority_queue<Order>> lines;
    unordered_map<int, ProductUnit> activeUnits;

public:
    ProductionFloor(int numLines = 3) { lines.resize(numLines); }
    
    void assignOrder(int lineID, Order o) { lines[lineID].push(o); }
    void handleLineBreakdown(int brokenLineID);
};