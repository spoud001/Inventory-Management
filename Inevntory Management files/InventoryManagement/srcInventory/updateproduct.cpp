#include "inventoryHeaders/updateproduct.h"
#include "ui_updateproduct.h"
#include "productInventory.h"
#include <string>


using namespace std;
UpdateProduct::UpdateProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateProduct)
{
    ui->setupUi(this);
}

UpdateProduct::~UpdateProduct()
{
    delete ui;
}

//once user inputs all the updated info and clicks update button
void UpdateProduct::on_update_btn_clicked()
{
    //gets the user input and store it to variables
    int updateId = ui->id_input->text().toInt();
    double updatePrice = ui->price_input->text().toDouble();
    int updateQuantity = ui->quantity_input->text().toInt();
    QString updateName = ui->name_input->text();
    string Name = updateName.toStdString();
    QString updateCategory = ui->category_input->text();
    string category = updateCategory.toStdString();
    bool value = false;
    //calls the update product method with the updated user input info.
    inventory.updateProduct(updateId, Name, category, updatePrice, updateQuantity, value);

    if (value){
        ui->update_label->setText("Product doesnot exist!");
    }else{
    ui->update_label->setText("Product Updated!");
    }

}

