#include "Product.h"

Product::Product() {}

Product::Product(int id, std::string name, int quantity, double price)
    : id(id), name(name), quantity(quantity), price(price) {}

int Product::getId() const { return id; }
std::string Product::getName() const { return name; }
int Product::getQuantity() const { return quantity; }
double Product::getPrice() const { return price; }

void Product::setQuantity(int q) { quantity = q; }
void Product::setPrice(double p) { price = p; }