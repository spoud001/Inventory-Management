/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddProduct
{
public:
    QLabel *IdLabel;
    QLabel *NameLa;
    QLabel *CategoryLabel;
    QLabel *PriceLabel;
    QLabel *label_5;
    QLineEdit *Id_input;
    QLineEdit *Name_input;
    QLineEdit *Category_input;
    QLineEdit *Price_input;
    QLineEdit *Quantity_input;
    QPushButton *add_btn;
    QLabel *add_label;

    void setupUi(QDialog *AddProduct)
    {
        if (AddProduct->objectName().isEmpty())
            AddProduct->setObjectName("AddProduct");
        AddProduct->resize(603, 443);
        IdLabel = new QLabel(AddProduct);
        IdLabel->setObjectName("IdLabel");
        IdLabel->setGeometry(QRect(40, 80, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(12);
        font.setBold(false);
        IdLabel->setFont(font);
        NameLa = new QLabel(AddProduct);
        NameLa->setObjectName("NameLa");
        NameLa->setGeometry(QRect(40, 130, 171, 31));
        NameLa->setFont(font);
        CategoryLabel = new QLabel(AddProduct);
        CategoryLabel->setObjectName("CategoryLabel");
        CategoryLabel->setGeometry(QRect(40, 180, 191, 31));
        CategoryLabel->setFont(font);
        PriceLabel = new QLabel(AddProduct);
        PriceLabel->setObjectName("PriceLabel");
        PriceLabel->setGeometry(QRect(40, 230, 191, 31));
        PriceLabel->setFont(font);
        label_5 = new QLabel(AddProduct);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 280, 191, 31));
        label_5->setFont(font);
        Id_input = new QLineEdit(AddProduct);
        Id_input->setObjectName("Id_input");
        Id_input->setGeometry(QRect(270, 80, 241, 24));
        Name_input = new QLineEdit(AddProduct);
        Name_input->setObjectName("Name_input");
        Name_input->setGeometry(QRect(270, 130, 241, 24));
        Category_input = new QLineEdit(AddProduct);
        Category_input->setObjectName("Category_input");
        Category_input->setGeometry(QRect(270, 180, 241, 24));
        Price_input = new QLineEdit(AddProduct);
        Price_input->setObjectName("Price_input");
        Price_input->setGeometry(QRect(270, 230, 241, 24));
        Quantity_input = new QLineEdit(AddProduct);
        Quantity_input->setObjectName("Quantity_input");
        Quantity_input->setGeometry(QRect(270, 280, 241, 24));
        add_btn = new QPushButton(AddProduct);
        add_btn->setObjectName("add_btn");
        add_btn->setGeometry(QRect(250, 350, 111, 31));
        add_label = new QLabel(AddProduct);
        add_label->setObjectName("add_label");
        add_label->setGeometry(QRect(240, 400, 171, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(12);
        add_label->setFont(font1);

        retranslateUi(AddProduct);

        QMetaObject::connectSlotsByName(AddProduct);
    } // setupUi

    void retranslateUi(QDialog *AddProduct)
    {
        AddProduct->setWindowTitle(QCoreApplication::translate("AddProduct", "Add Product", nullptr));
        IdLabel->setText(QCoreApplication::translate("AddProduct", "ENTER ID:", nullptr));
        NameLa->setText(QCoreApplication::translate("AddProduct", "Enter Product Name:", nullptr));
        CategoryLabel->setText(QCoreApplication::translate("AddProduct", "Enter Product Category:", nullptr));
        PriceLabel->setText(QCoreApplication::translate("AddProduct", "Enter Product Price : ", nullptr));
        label_5->setText(QCoreApplication::translate("AddProduct", "Enter Product Quantity:", nullptr));
        Price_input->setText(QString());
        add_btn->setText(QCoreApplication::translate("AddProduct", "Add Product", nullptr));
        add_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddProduct: public Ui_AddProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
