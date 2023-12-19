#include "productInventory.h"
#include "inventoryHeaders/addproduct.h"
#include "ui_addproduct.h"

#include <string>

using namespace std;


AddProduct::AddProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProduct)
{
    ui->setupUi(this);
}

AddProduct::~AddProduct()
{
    delete ui;
}

void AddProduct::on_add_btn_clicked()
{
    //gets the product details from user and stores it to variables
    double addPrice =  ui->Price_input->text().toDouble();

    QString addName = ui->Name_input->text();
    string addN = addName.toStdString();
    QString addCategory = ui->Category_input->text();
    string addC = addCategory.toStdString();
    int addId = ui->Id_input->text().toInt();
    int addQuantity = ui->Quantity_input->text().toInt();

    // bool value to see if the product already exists
    bool value = false;
    //code goes here
    //creating a new product obj of Product class with new detials
    Product product(addId, addN, addC, addPrice, addQuantity );
    //calling addProdcut method from Inventory class.
    inventory.addProduct(product, value);


    // after sucess display label
    if (value){
    ui->add_label->setText("Product Already Exists!");
    }else{
     ui->add_label->setText("New Product Added!");
    }

}

