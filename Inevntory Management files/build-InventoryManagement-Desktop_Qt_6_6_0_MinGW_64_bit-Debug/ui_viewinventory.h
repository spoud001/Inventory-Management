/********************************************************************************
** Form generated from reading UI file 'viewinventory.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWINVENTORY_H
#define UI_VIEWINVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewInventory
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QDialog *ViewInventory)
    {
        if (ViewInventory->objectName().isEmpty())
            ViewInventory->setObjectName("ViewInventory");
        ViewInventory->resize(770, 434);
        verticalLayout = new QVBoxLayout(ViewInventory);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(ViewInventory);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(ViewInventory);

        QMetaObject::connectSlotsByName(ViewInventory);
    } // setupUi

    void retranslateUi(QDialog *ViewInventory)
    {
        ViewInventory->setWindowTitle(QCoreApplication::translate("ViewInventory", "Inventory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewInventory: public Ui_ViewInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWINVENTORY_H
