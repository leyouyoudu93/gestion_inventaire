class Database {
public:
    bool connect();
    std::vector<Product> loadProducts();
    void insertProduct(const Product& p);
    void updateProduct(const Product& p);
    void deleteProduct(int id);
};
