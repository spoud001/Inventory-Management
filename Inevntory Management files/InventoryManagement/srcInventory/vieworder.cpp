#include "inventoryHeaders/vieworder.h"
#include "ui_vieworder.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

//a library of Qt is used to read the order csv file and display it in the dialog window as a table.
viewOrder::viewOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewOrder)
{
    ui->setupUi(this);
    csvModel = new QStandardItemModel(this);
    csvModel->setColumnCount(11);
    csvModel->setHorizontalHeaderLabels(QStringList() <<"Last Name"<<"First Name"<< "Product Id" << "Name" << "Category" << "Product Price" << "Order Quantity"
                                                      <<"Address"<<"State"<<"Zip Code"<<" Country"<<"Phone Number");
    ui->tableView->setModel(csvModel);


    QFile file("order.csv");
    if ( !file.open(QFile::ReadOnly | QFile::Text) ) {
        qDebug() << "File not exists";
    } else {

        QTextStream in(&file);

        while (!in.atEnd())
        {

            QString line = in.readLine();

            QList<QStandardItem *> standardItemsList;
            for (QString item : line.split(",")) {
                standardItemsList.append(new QStandardItem(item));
            }
            csvModel->insertRow(csvModel->rowCount(), standardItemsList);
        }
        file.close();
    }
}

viewOrder::~viewOrder()
{
    delete ui;
}
