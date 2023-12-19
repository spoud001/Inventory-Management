/********************************************************************************
** Form generated from reading UI file 'homeinventory.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEINVENTORY_H
#define UI_HOMEINVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HomeInventory
{
public:
    QPushButton *addInven_btn;
    QPushButton *remove_btn;
    QPushButton *load_btn;
    QPushButton *find_btn;
    QPushButton *view_btn;
    QPushButton *exit_button;
    QPushButton *update_btn;
    QPushButton *save_btn;
    QPushButton *order_btn;

    void setupUi(QDialog *HomeInventory)
    {
        if (HomeInventory->objectName().isEmpty())
            HomeInventory->setObjectName("HomeInventory");
        HomeInventory->resize(622, 535);
        addInven_btn = new QPushButton(HomeInventory);
        addInven_btn->setObjectName("addInven_btn");
        addInven_btn->setGeometry(QRect(150, 210, 261, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(10);
        font.setBold(true);
        addInven_btn->setFont(font);
        remove_btn = new QPushButton(HomeInventory);
        remove_btn->setObjectName("remove_btn");
        remove_btn->setGeometry(QRect(150, 270, 261, 51));
        remove_btn->setFont(font);
        load_btn = new QPushButton(HomeInventory);
        load_btn->setObjectName("load_btn");
        load_btn->setGeometry(QRect(150, 30, 261, 51));
        load_btn->setFont(font);
        find_btn = new QPushButton(HomeInventory);
        find_btn->setObjectName("find_btn");
        find_btn->setGeometry(QRect(150, 330, 261, 51));
        find_btn->setFont(font);
        view_btn = new QPushButton(HomeInventory);
        view_btn->setObjectName("view_btn");
        view_btn->setGeometry(QRect(150, 150, 261, 51));
        view_btn->setFont(font);
        exit_button = new QPushButton(HomeInventory);
        exit_button->setObjectName("exit_button");
        exit_button->setGeometry(QRect(510, 490, 91, 31));
        update_btn = new QPushButton(HomeInventory);
        update_btn->setObjectName("update_btn");
        update_btn->setGeometry(QRect(150, 390, 261, 51));
        update_btn->setFont(font);
        save_btn = new QPushButton(HomeInventory);
        save_btn->setObjectName("save_btn");
        save_btn->setGeometry(QRect(150, 90, 261, 51));
        save_btn->setFont(font);
        order_btn = new QPushButton(HomeInventory);
        order_btn->setObjectName("order_btn");
        order_btn->setGeometry(QRect(150, 450, 261, 51));
        order_btn->setFont(font);

        retranslateUi(HomeInventory);
        QObject::connect(exit_button, &QPushButton::clicked, HomeInventory, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(HomeInventory);
    } // setupUi

    void retranslateUi(QDialog *HomeInventory)
    {
        HomeInventory->setWindowTitle(QCoreApplication::translate("HomeInventory", "Admin Management", nullptr));
        addInven_btn->setText(QCoreApplication::translate("HomeInventory", "Add a Product", nullptr));
        remove_btn->setText(QCoreApplication::translate("HomeInventory", "Remove a Product", nullptr));
        load_btn->setText(QCoreApplication::translate("HomeInventory", "Load Inventory", nullptr));
        find_btn->setText(QCoreApplication::translate("HomeInventory", "Find a Product", nullptr));
        view_btn->setText(QCoreApplication::translate("HomeInventory", "View Inventory", nullptr));
        exit_button->setText(QCoreApplication::translate("HomeInventory", "Exit", nullptr));
        update_btn->setText(QCoreApplication::translate("HomeInventory", "Update a Product", nullptr));
        save_btn->setText(QCoreApplication::translate("HomeInventory", "Save Inventory", nullptr));
        order_btn->setText(QCoreApplication::translate("HomeInventory", "View Orders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeInventory: public Ui_HomeInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEINVENTORY_H
