/********************************************************************************
** Form generated from reading UI file 'updateproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEPRODUCT_H
#define UI_UPDATEPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UpdateProduct
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *id_input;
    QLineEdit *name_input;
    QLineEdit *category_input;
    QLineEdit *price_input;
    QLineEdit *quantity_input;
    QPushButton *update_btn;
    QLabel *update_label;

    void setupUi(QDialog *UpdateProduct)
    {
        if (UpdateProduct->objectName().isEmpty())
            UpdateProduct->setObjectName("UpdateProduct");
        UpdateProduct->resize(436, 389);
        label = new QLabel(UpdateProduct);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 60, 141, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(UpdateProduct);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 201, 16));
        label_2->setFont(font);
        label_3 = new QLabel(UpdateProduct);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 140, 221, 16));
        label_3->setFont(font);
        label_4 = new QLabel(UpdateProduct);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 180, 221, 16));
        label_4->setFont(font);
        label_5 = new QLabel(UpdateProduct);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 220, 221, 16));
        label_5->setFont(font);
        id_input = new QLineEdit(UpdateProduct);
        id_input->setObjectName("id_input");
        id_input->setGeometry(QRect(270, 50, 151, 24));
        name_input = new QLineEdit(UpdateProduct);
        name_input->setObjectName("name_input");
        name_input->setGeometry(QRect(270, 90, 151, 24));
        category_input = new QLineEdit(UpdateProduct);
        category_input->setObjectName("category_input");
        category_input->setGeometry(QRect(270, 130, 151, 24));
        price_input = new QLineEdit(UpdateProduct);
        price_input->setObjectName("price_input");
        price_input->setGeometry(QRect(270, 170, 151, 24));
        quantity_input = new QLineEdit(UpdateProduct);
        quantity_input->setObjectName("quantity_input");
        quantity_input->setGeometry(QRect(270, 210, 151, 24));
        update_btn = new QPushButton(UpdateProduct);
        update_btn->setObjectName("update_btn");
        update_btn->setGeometry(QRect(160, 260, 91, 31));
        update_label = new QLabel(UpdateProduct);
        update_label->setObjectName("update_label");
        update_label->setGeometry(QRect(150, 320, 161, 16));
        update_label->setFont(font);

        retranslateUi(UpdateProduct);

        QMetaObject::connectSlotsByName(UpdateProduct);
    } // setupUi

    void retranslateUi(QDialog *UpdateProduct)
    {
        UpdateProduct->setWindowTitle(QCoreApplication::translate("UpdateProduct", "Update Product", nullptr));
        label->setText(QCoreApplication::translate("UpdateProduct", "Enter Product ID:", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateProduct", "Enter New Product Name:", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateProduct", "Enter New Product Category:", nullptr));
        label_4->setText(QCoreApplication::translate("UpdateProduct", "Enter New Product Price :", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateProduct", "Enter New Product Quantity:", nullptr));
        update_btn->setText(QCoreApplication::translate("UpdateProduct", "Update", nullptr));
        update_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UpdateProduct: public Ui_UpdateProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEPRODUCT_H
