#include "myinventory.h"
#include "ui_myinventory.h"
#include "adminlogin.h"
#include "adminlogin.h"
#include"orderHeaders//orderwindow.h"


MyInventory::MyInventory(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyInventory)
{
    ui->setupUi(this);
}

MyInventory::~MyInventory()
{
    delete ui;
}




//opens adminlogin credential windows
void MyInventory::on_pushButton_clicked()
{
    adminLogin adminlogin;
    adminlogin.setModal(true);
    adminlogin.exec();

}
//storing the user desired category to a variable as a global "extern" keyword
//so we can use the same category to display products in nect window.
QString viewCategory;

void MyInventory::on_view_btn_clicked()
{
    //already added the category list through the UI text editor ,
    //here we only get the user selected text from dropdown and store and compare.
    viewCategory = ui->dropdown->currentText();
    if (viewCategory == "---Select a Category---"){
        ui->hidden_label->setText("Please Select Category!");
    }else{
        ui->hidden_label->setText("");
        orderWindow orderwindow;
        orderwindow.setModal(true);
        orderwindow.exec();
    }
}

