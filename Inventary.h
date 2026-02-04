#ifndef INVENTARY_H
#define INVENTARY_H

#include <map>
#include "Product.h"

class Inventary {
private:
    std::map<int, Product> products;

public:
    void addProduct(const Product& p);
    void removeProduct(int id);
    void updateQuantity(int id, int q);
    void updatePrice(int id, double p);
    void listProducts() const;
};

#endif