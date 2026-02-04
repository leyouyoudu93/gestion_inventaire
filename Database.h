#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "Product.h"

class Database {
public:
    bool connect();
    std::vector<Product> loadProducts();
    void insertProduct(const Product& p);
    void updateProduct(const Product& p);
    void deleteProduct(int id);
};

#endif