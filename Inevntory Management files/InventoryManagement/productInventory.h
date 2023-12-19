#ifndef PRODUCTINVENTORY_H
#define PRODUCTINVENTORY_H
#include<iostream>
#include<vector>
#include<string>


using namespace std;

class Product
{
private:
    int id;
    string name;
    string category;
    double price;
    int quantity;

public:
    Product(int id, string name, string category, double price, int quantity);
    int getId() const;
    void setId(int id);
    string getName() const;
    void setName(string name);
    string getCategory() const;
    void setCategory(string category);
    double getPrice() const;
    void setPrice(double price);
    int getQuantity() const;
    void setQuantity(int quantity);

};

class Inventory
{
private:
    vector<Product> products;

public:

    void addProduct(Product product, bool &val);
    void removeProduct(int id, bool &val);
    void updateProduct(int id, string name, string category, double price, int quantity, bool&val);
    void saveInventoryToFile(string filename);
    Product* findProduct(int id);
    vector<Product> findByCategory(string category);
    vector<Product> findByName(string name);
    void loadInventoryFromFile(string filename ,bool &fileval, bool &reloadval);

    void updateProductQuantity(int id,  int quantity );
    void saveOrderToFile(string filename, vector<Product> order_cart,string lName, string fName, string address, string state, string zip,
string country, string phone);
};


extern Inventory inventory;








#endif // PRODUCTINVENTORY_H
