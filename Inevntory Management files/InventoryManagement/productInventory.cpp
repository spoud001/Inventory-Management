#include "productInventory.h"
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<fstream>
#include <filesystem>
#include <QDebug>
using namespace std;
namespace fs = filesystem;

//product class
Product::Product(int id, string name, string category, double price, int quantity)
{
    this->id=id;
    this->name=name;
    this->category=category;
    this->price=price;
    this->quantity=quantity;
}
int Product::getId() const{
    return id;
}

void Product::setId(int id){
    this->id=id;
}

string Product::getName() const{
    return name;
}

void Product::setName(string name){
    this->name=name;
}

string Product::getCategory() const{
    return category;
}

void Product::setCategory(string category){
    this->category=category;
}

double Product::getPrice() const{
    return price;
}

void Product::setPrice(double price){
    this->price=price;
}

int Product::getQuantity() const{
    return quantity;
}

void Product::setQuantity(int quantity){
    this->quantity=quantity;
}


// add product which checks if the product akready exist or not through bool args passed.
void Inventory::addProduct(Product product, bool &value)
{
    bool found = false;
    for (auto& p : products)
    {
        if (p.getId() == product.getId())
        {
            found = true;
            value = true;
            break;
        }
    }
    if (!found)
    {
        //add the new product to the products vector of class Product
        products.push_back(product);

    }
}

//removes product with passed product id as args.
void Inventory::removeProduct(int id, bool &value)
{
    bool found = false;
    for (auto i = products.begin(); i != products.end(); i++)
    {
        if (i->getId() == id)
        {
            products.erase(i);
            found = true;
            break;
        }
    }
    if (!found)
    {
        //if product is not found changes the bool value
        value = true;
    }
}

//finds the product with related product id.
Product* Inventory::findProduct(int id)
{
    for(auto i=products.begin();i!=products.end();i++)
    {
        if(i->getId()==id)
        {
            return &(*i);
        }
    }
    return nullptr;
}

// find product by the passed category and returns a vector with the product details of realted category.
vector<Product> Inventory::findByCategory(string category){
    bool val = false;
    bool reloadval = false;
    //load inventory to file to make sure our inventory has been loaded to products vector of product class which we use in for loop.
    inventory.loadInventoryFromFile("inventory.csv", val, reloadval);
    vector<Product> p;
    for(auto& i: products)
    {
        if(i.getCategory()==category)
        {
            p.push_back(i);
        }
    }
    return p;
}


//update product quantity whn user orders items.
void Inventory::updateProductQuantity(int id,  int quantity )
{

    for (auto i = products.begin(); i != products.end(); i++)
    {
        if (i->getId() == id)
        {
            int temp_quan = i->getQuantity();
            //subtract the stock quanityt with user ordered quantity
            i->setQuantity(temp_quan - quantity);

        }
    }
}

//update the existing product details, we need to know the id and it will only update the detail of product whose id matched in our datafile.
void Inventory::updateProduct(int id, string name, string category, double price, int quantity, bool &value)
{
    bool found = false;
    for (auto i = products.begin(); i != products.end(); i++)
    {
        if (i->getId() == id)
        {
            i->setName(name);
            i->setCategory(category);
            i->setPrice(price);
            i->setQuantity(quantity);
            found = true;
            break;
        }
    }
    if (!found)
    {
        //checks if product to be updated is not found.
        value =true;
    }
}

//saves the order details with customer info into a new csv file called order.csv.
void Inventory::saveOrderToFile(string filename, vector<Product> order_cart,string lName, string fName, string address, string state, string zip,
                                string country, string phone){
    ofstream file;
    //used ios::app incase the file that we passed is not found;it will create a new one.
    file.open(filename, ios::out | ios::app);

    for (int i = 0; i < (int)order_cart.size(); i++)
    {

        Product p = order_cart[i];
        file <<lName<<","<<fName<<","<< p.getId() << "," << p.getName() << "," << p.getCategory() << "," << p.getPrice() << "," << p.getQuantity()<<"," <<
                address<<","<<state<<","<<zip<<","<<country<<","<<phone<< endl;

    }
    file.close();
}

//once we load our file to the vector of Product class, make changes like remove, add update , we save the vector contents back to the csv file.
void Inventory::saveInventoryToFile(string filename)
{

    ofstream file;
    //used trun because once inevntory is loaded to our vector, all the items in csv will be in our vector and if we save there will be duplicate
    //copies of the products, so trunc will erase the content of csv file after reeading and update the csv file with all the contents of vector.
    file.open(filename, ios::out | ios::trunc);

    for (int i = 0; i < (int)products.size(); i++)
    {

        Product p = products[i];
        file << p.getId() << "," << p.getName() << "," << p.getCategory() << "," << p.getPrice() << "," << p.getQuantity()<< endl;

   }
   file.close();
}

//to perform any actions we need to load the inventory file to our vector and then modify the vector,
void Inventory::loadInventoryFromFile(string filename,bool &filevalue, bool &reloadval)
{
    ifstream file;
    file.open(filename);
    int rows = 0;
    if (file.is_open())
    {
        string line;

        while (getline(file, line))
        {
            rows++;
            //checks to see if the inventory is already loaded to our vector.
            if (products.size()>= rows){
                reloadval = true;
                break;
            }
            stringstream ss(line);
            string idStr, name, category, priceStr, quantityStr;
            getline(ss, idStr, ',');
            getline(ss, name, ',');
            getline(ss, category, ',');
            getline(ss, priceStr, ',');
            getline(ss, quantityStr, ',');

            int id = stoi(idStr);
            double price = stod(priceStr);
            int quantity = stoi(quantityStr);

            Product p(id, name, category, price, quantity);
            products.push_back(p);
        }

        file.close();
    } else {
        filevalue = true;
    }
}

