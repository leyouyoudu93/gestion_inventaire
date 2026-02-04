#include "Inventary.h"
#include <iostream>

void Inventary::addProduct(const Product& p) {
    products[p.getId()] = p;
}

void Inventary::removeProduct(int id) {
    products.erase(id);
}

void Inventary::updateQuantity(int id, int q) {
    products[id].setQuantity(q);
}

void Inventary::updatePrice(int id, double p) {
    products[id].setPrice(p);
}

void Inventary::listProducts() const {
    for (auto& pair : products) {
        const Product& p = pair.second;
        std::cout << p.getId() << " - " << p.getName()
                  << " | Qte: " << p.getQuantity()
                  << " | Prix: " << p.getPrice() << "\n";
    }
}