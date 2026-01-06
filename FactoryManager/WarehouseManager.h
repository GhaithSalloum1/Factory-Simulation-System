#pragma once
#include "Libraries.h"
#include "Product.h"
#include "Material.h"

class WarehouseManager {
private:
    deque<Material> rawStorage;
    unordered_map<int, int> inventoryCounts;
    unordered_map<int, ProductUnit> finishedGoods;
    unordered_map<int, Product> productCatalog;

public:
    void addProductToCatalog(Product p) { productCatalog[p.id] = p; }
    Product getProductDetails(int id) { return productCatalog[id]; }
    bool consumeMaterialsForOrder(int productID, int qty);
};