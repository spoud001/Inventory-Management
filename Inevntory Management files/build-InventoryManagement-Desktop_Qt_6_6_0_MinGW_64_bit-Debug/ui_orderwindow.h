/********************************************************************************
** Form generated from reading UI file 'orderwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERWINDOW_H
#define UI_ORDERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_orderWindow
{
public:
    QComboBox *itemdrop;
    QLabel *available_label;
    QLabel *productName_label;
    QLabel *productPrice_label;
    QLabel *selectQuantity_label;
    QLabel *name_label;
    QLabel *price_label;
    QSpinBox *spinBox;
    QPushButton *addTocat_btn;

    void setupUi(QDialog *orderWindow)
    {
        if (orderWindow->objectName().isEmpty())
            orderWindow->setObjectName("orderWindow");
        orderWindow->resize(478, 308);
        itemdrop = new QComboBox(orderWindow);
        itemdrop->setObjectName("itemdrop");
        itemdrop->setGeometry(QRect(30, 70, 181, 31));
        available_label = new QLabel(orderWindow);
        available_label->setObjectName("available_label");
        available_label->setGeometry(QRect(30, 40, 121, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(12);
        available_label->setFont(font);
        productName_label = new QLabel(orderWindow);
        productName_label->setObjectName("productName_label");
        productName_label->setGeometry(QRect(30, 140, 121, 21));
        productName_label->setFont(font);
        productPrice_label = new QLabel(orderWindow);
        productPrice_label->setObjectName("productPrice_label");
        productPrice_label->setGeometry(QRect(30, 180, 121, 21));
        productPrice_label->setFont(font);
        selectQuantity_label = new QLabel(orderWindow);
        selectQuantity_label->setObjectName("selectQuantity_label");
        selectQuantity_label->setGeometry(QRect(30, 220, 121, 21));
        selectQuantity_label->setFont(font);
        name_label = new QLabel(orderWindow);
        name_label->setObjectName("name_label");
        name_label->setGeometry(QRect(170, 140, 291, 21));
        name_label->setFont(font);
        price_label = new QLabel(orderWindow);
        price_label->setObjectName("price_label");
        price_label->setGeometry(QRect(170, 180, 261, 21));
        price_label->setFont(font);
        spinBox = new QSpinBox(orderWindow);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(170, 220, 41, 21));
        addTocat_btn = new QPushButton(orderWindow);
        addTocat_btn->setObjectName("addTocat_btn");
        addTocat_btn->setGeometry(QRect(340, 263, 121, 31));

        retranslateUi(orderWindow);

        QMetaObject::connectSlotsByName(orderWindow);
    } // setupUi

    void retranslateUi(QDialog *orderWindow)
    {
        orderWindow->setWindowTitle(QCoreApplication::translate("orderWindow", "Order Window", nullptr));
        available_label->setText(QCoreApplication::translate("orderWindow", "Available Items:", nullptr));
        productName_label->setText(QCoreApplication::translate("orderWindow", "Product Name:", nullptr));
        productPrice_label->setText(QCoreApplication::translate("orderWindow", "Price:", nullptr));
        selectQuantity_label->setText(QCoreApplication::translate("orderWindow", "Select Quantity:", nullptr));
        name_label->setText(QCoreApplication::translate("orderWindow", "Product Name:", nullptr));
        price_label->setText(QCoreApplication::translate("orderWindow", "Product Name:", nullptr));
        addTocat_btn->setText(QCoreApplication::translate("orderWindow", "Add to cart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orderWindow: public Ui_orderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERWINDOW_H
