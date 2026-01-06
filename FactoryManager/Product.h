#pragma once
#include "Libraries.h"

class Product {
private:
    int id;
    string name;
    double unitPrice;
    vector<pair<int, int>> requirements; // {MaterialID, Quantity}

public:
    Product(int _id = 0, string _n = "", double _p = 0.0) 
        : id(_id), name(_n), unitPrice(_p) {}

    vector<pair<int, int>> getRequirements() { return requirements; }
    double getPrice() { return unitPrice; }
};