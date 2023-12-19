#include "inventoryHeaders/findproduct.h"
#include "ui_findproduct.h"
#include "productInventory.h"
#include <string>

using namespace std;

findProduct::findProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::findProduct)
{
    ui->setupUi(this);
}

findProduct::~findProduct()
{
    delete ui;
}

void findProduct::on_find_btn_clicked()
{
    //storing the id of product to find in a variable
    int findId = ui ->id_input->text().toInt();

    //calling findproduct method of inventory class.
    Product* product = inventory.findProduct(findId);

    //if product is found display the details in the UI widget labels.
    if (product) {
        string name = product ->getName();
        QString Qname = QString::fromStdString(name);
        string category = product ->getCategory();
         QString Qcategory = QString::fromStdString(category);
        double price = product->getPrice();
         QString Qprice = QString::number(price);
         int quantity = product ->getQuantity();
         QString Qquantity = QString::number(quantity);

    ui->name_label->setText(Qname);
    ui->category_label->setText(Qcategory);
    ui->price_label->setText(Qprice);
    ui->quantity_label->setText(Qquantity);
    }
}

