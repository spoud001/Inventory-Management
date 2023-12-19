#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "inventoryHeaders/homeinventory.h"



adminLogin::adminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminLogin)
{
    ui->setupUi(this);
}

adminLogin::~adminLogin()
{
    delete ui;
}

void adminLogin::on_login_btn_clicked()
{
    //takes username and password from user and checks if the password is correct.
    QString username = ui->username_input->text();
    QString password = ui ->password_input->text();
    if (username =="admin" and password =="admin123"){
        //if correct closes the login window
        this->close();

        //opens a new dialog window that takes us to inventory management called homeinventory.
        HomeInventory homeinventory;

        homeinventory.setModal(true);

        homeinventory.exec();



    }else{
        //if wrong credentials displays invalid.
        ui->wrong_label->setText("Inavlid username/password!");

    }

}

