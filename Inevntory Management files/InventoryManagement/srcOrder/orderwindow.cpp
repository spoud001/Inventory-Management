#include "orderHeaders/orderwindow.h"
#include "ui_orderwindow.h"
#include "myinventory.h"
#include "productInventory.h"
#include <QDebug>
#include <QMessageBox>
#include <qabstractbutton>
#include "orderHeaders/customerinfo.h"

vector<Product> product;
orderWindow::orderWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::orderWindow)
{
    ui->setupUi(this);


    string category = viewCategory.toStdString();
    //calling a findBycategory method which will return vector of product details with the passed category.
     product = inventory.findByCategory(category);
    for(auto& i:product){
    //displaying only those items in the user selected category through dropdown only of we have that item in stock i.e available>0.
    if ((i.getQuantity())>0) {
        string name = i.getName();
        QString Qname = QString::fromStdString(name);

        ui->itemdrop->addItem(Qname);
    }
    }




}

orderWindow::~orderWindow()
{
    delete ui;
}

QString Q_order_Price;
QString Q_order_product_name;

void orderWindow::on_itemdrop_currentTextChanged(const QString &arg1)
{
    //once user select the product from dropdown , display the name, price and spinbox to select the quantity
    QString currentSelection = ui->itemdrop->currentText();
    string current= currentSelection.toStdString();
    for(auto& i:product){
    if ((i.getName())== current) {
        int order_product_price = i.getPrice();
        int order_stock = i.getQuantity();
        Q_order_Price = QString::number(order_product_price);
        Q_order_product_name = QString::fromStdString(i.getName());
        ui->name_label->setText(Q_order_product_name);
        ui->price_label->setText(Q_order_Price);
        ui->spinBox->setValue(0);
        //set the max value of spinbox to only how much we have in inventory
        ui->spinBox->setMaximum(order_stock);
    }

}
}
//extern cart_product vector of product class to use it in another source file as well.
vector<Product> cart_product;

//once addTocart button is clicked .
void orderWindow::on_addTocat_btn_clicked()
{
    //pushback the product details with updated quantity that user added to cart and want to buy.
    for(auto& i:product){
    if ((i.getName())== Q_order_product_name.toStdString()) {
        //gets the quantity from user input quantity in spinbox.
        int quan = ui->spinBox->value();
        i.setQuantity(quan);
        cart_product.push_back(i);
    }
}
    QMessageBox msgBox;
    //displays if user want to proceed to checkout or add more items.
    QAbstractButton *myYesButton = msgBox.addButton("Yes",QMessageBox::YesRole);
    QAbstractButton *myNoButton = msgBox.addButton("No", QMessageBox::NoRole);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setText("Item Added to card. Do you want to checkout?");
    msgBox.exec();
    if (msgBox.clickedButton() == myYesButton){
    CustomerInfo cust;
    cust.setModal(true);
    this->close();
    cust.exec();
    }
}

