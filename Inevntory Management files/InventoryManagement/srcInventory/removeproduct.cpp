#include "inventoryHeaders/removeproduct.h"
#include "ui_removeproduct.h"
#include "productInventory.h"
#include <string>


using namespace std;

RemoveProduct::RemoveProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveProduct)
{
    ui->setupUi(this);
}

RemoveProduct::~RemoveProduct()
{
    delete ui;
}

//once id is enetered and the button is pushed

void RemoveProduct::on_pushButton_clicked()
{
    //gets the user input id
    int removeId = ui->remove_input->text().toInt();
    //code goes here
    bool value =false;
   // calls removefunction method
    inventory.removeProduct(removeId, value);
    //after sucess change the label
    if (value){
        ui->output_label->setText("Item not found.");
    }else{
        ui->output_label->setText("Item Removed");
    }

}


