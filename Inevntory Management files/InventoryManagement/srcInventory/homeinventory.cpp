#include "inventoryHeaders/homeinventory.h"
#include "ui_homeinventory.h"
#include "inventoryHeaders/addproduct.h"
#include "inventoryHeaders/removeproduct.h"
#include"inventoryHeaders/findproduct.h"
#include "inventoryHeaders/updateproduct.h"
#include <QMessageBox>
#include "inventoryHeaders/viewinventory.h"
#include "productInventory.h"
#include "inventoryHeaders/vieworder.h"
#include <string>

using namespace std;

//created a inventory obj of Inventory classs with extern keyword in header file to use the same obj in all source files.
Inventory inventory;

HomeInventory::HomeInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomeInventory)
{
    ui->setupUi(this);
}

HomeInventory::~HomeInventory()
{
    delete ui;
}

//opens corresponding dialog window linked to the corresponding button clicked,
void HomeInventory::on_addInven_btn_clicked()
{
    AddProduct addproduct;
    addproduct.setModal(true);
    addproduct.exec();
}


void HomeInventory::on_remove_btn_clicked()
{
    RemoveProduct removeproduct;
    removeproduct.setModal(true);
    removeproduct.exec();

}


void HomeInventory::on_find_btn_clicked()
{
    findProduct findproduct;
    findproduct.setModal(true);
    findproduct.exec();
}


void HomeInventory::on_update_btn_clicked()
{
    UpdateProduct updateproduct;
    updateproduct.setModal(true);
    updateproduct.exec();

}


//load the csv inventory to our vector of product class obj.
void HomeInventory::on_load_btn_clicked()
{
    bool value = false;
    bool reloadvalue = false;
    //calls loadinventoryfromfile method with some boolens
    inventory.loadInventoryFromFile("inventory.csv", value, reloadvalue);

    //bool value will check if the file was sucessfully opened or not.
    if (value){
        QMessageBox::critical(this, "Load Inventory", "Invalid File!!");


    }else{
        //reload value will see if the vector of product class obj already has been loaded with the inventory from csv file.
        if(reloadvalue){
            QMessageBox::critical(this, "Load Inventory", "Inventory Already Loaded!!");
        }else{
        QMessageBox::information(this, "Load Inventory", "Inventory Load Sucessfully!!");
        }
    }
}

//saves file to inventory csv file.
void HomeInventory::on_save_btn_clicked()
{

    inventory.saveInventoryToFile("inventory.csv");
    QMessageBox::information(this, "Save Inventory", "Inventory Saved to File Sucessfully!");
}


void HomeInventory::on_view_btn_clicked()
{
    ViewInventory viewinventory;
    viewinventory.setModal(true);
    viewinventory.exec();

}

void HomeInventory::on_order_btn_clicked()
{
    viewOrder vieworder;
    vieworder.setModal(true);
    vieworder.exec();

}

