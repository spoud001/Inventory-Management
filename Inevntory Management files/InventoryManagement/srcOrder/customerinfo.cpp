#include "orderHeaders/customerinfo.h"
#include "ui_customerinfo.h"
#include <QLabel>
#include <QVBoxLayout>
#include<QDebug>
#include "orderHeaders/receiptwindow.h"

CustomerInfo::CustomerInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerInfo)
{
    ui->setupUi(this);

    // Create a layout for QLabel widgets to display the items in cart in a scrollable area.
    QVBoxLayout* name_layout = new QVBoxLayout(ui->name_widget);
    QVBoxLayout* qty_layout = new QVBoxLayout(ui->qty_widget);
    QVBoxLayout* price_layout = new QVBoxLayout(ui->price_widget);

    const int numberOfLabels = cart_product.size();
    int total_price =0;
    //display the items of cart and add it to the UI widget
    for (int i = 0; i < numberOfLabels; ++i) {
        QString name = QString::fromStdString(cart_product[i].getName());
        QString quantity = QString::number(cart_product[i].getQuantity());
        QString price = QString::number(cart_product[i].getQuantity()*cart_product[i].getPrice()) ;
        QLabel* namelabel = new QLabel(name , this);
        QLabel* qtylabel = new QLabel(quantity , this);// Create a QLabel
        QLabel* pricelabel = new QLabel(price, this);
        name_layout->addWidget(namelabel);
        qty_layout->addWidget(qtylabel);
        price_layout->addWidget(pricelabel);
        total_price+=cart_product[i].getQuantity()*cart_product[i].getPrice();
    }
    //total price of the order.
    QString total_Qprice = QString::number(total_price);
    // Set the layout to the container widget in out UI
    ui->name_widget->setLayout(name_layout);
    ui->qty_widget->setLayout(qty_layout);
    ui->price_widget->setLayout(price_layout);
    ui->totalPrice_label->setText(total_Qprice);
}

CustomerInfo::~CustomerInfo()
{
    delete ui;
}
//declared global variables with "extern" keyword in the header file so that we can use it across multiple source files.
QString customer_Fname;
QString customer_Lname ;
QString customer_Address;
QString customer_State ;
QString customer_Zip ;
QString customer_Country ;
QString customer_Phone ;
QString payment_method;

void CustomerInfo::on_buy_btn_clicked()
{
    //once the buy button is clicked customer entered details will be stored in the global variables declared outside.
     customer_Fname = ui->fname_input->text();
     customer_Lname = ui->lname_input->text();
     customer_Address = ui->address_input->text();
     customer_State = ui->state_input->text();
     customer_Zip = ui->zip_input->text();
     customer_Country = ui->country_input->text();
     customer_Phone = ui->phone_input->text();

    //checks if customer left any input blank .
     if (customer_Fname.isEmpty() or customer_Lname.isEmpty() or customer_Address.isEmpty() or
         customer_State.isEmpty() or customer_Zip.isEmpty() or customer_Country.isEmpty() or customer_Phone.isEmpty()){
        ui->detail_error->setText("Please fill all the details below!");
        return;
     }
    //checks if customer didnot select payment method.
     if (ui->cod_rbtn->isChecked()){
        payment_method = "Cash on Delivery";
     }else if(ui->debit_rbtn->isChecked()){
        payment_method = "Debit/Credit Card";
     }else{
        ui->payemnt_error->setText("Please Select a Payment Method");
        return;
     }
    //once every details customer entered is correct and enters buy we will subtract the cart quantity from our stock quantity .
     for (auto i:cart_product){


                inventory.updateProductQuantity(i.getId(),i.getQuantity() );
            }

    //we will save the updated quantity to our original stock file.
     inventory.saveInventoryToFile("inventory.csv");

    // we will add the order details to our order csv file for record.
     inventory.saveOrderToFile("order.csv", cart_product, customer_Lname.toStdString(), customer_Fname.toStdString(),customer_Address.toStdString(),customer_State.toStdString(),
customer_Zip.toStdString(),customer_Country.toStdString(), customer_Phone.toStdString());

     //once everything is done opens the reciept window where customer can see the buying receipt
     receiptWindow receiptwindow;
     receiptwindow.setModal(true);
     this->close();
     receiptwindow.exec();

}

