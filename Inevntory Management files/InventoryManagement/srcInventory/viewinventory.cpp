#include "inventoryHeaders/viewinventory.h"
#include "ui_viewinventory.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

//a library of Qt is used to read the csv file and display it in the dialog window as a table.
ViewInventory::ViewInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewInventory)
{
     ui->setupUi(this);
    csvModel = new QStandardItemModel(this);
    csvModel->setColumnCount(5);
    csvModel->setHorizontalHeaderLabels(QStringList() << "Id" << "Name" << "Category" << "Price" << "Quantity" );
                         ui->tableView->setModel(csvModel);


        QFile file("inventory.csv");
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

ViewInventory::~ViewInventory()
{
    delete ui;
}
