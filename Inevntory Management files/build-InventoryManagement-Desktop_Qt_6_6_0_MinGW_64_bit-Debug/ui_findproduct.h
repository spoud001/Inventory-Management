/********************************************************************************
** Form generated from reading UI file 'findproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPRODUCT_H
#define UI_FINDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_findProduct
{
public:
    QLabel *id_label;
    QLineEdit *id_input;
    QPushButton *find_btn;
    QLabel *id_label_2;
    QLabel *id_label_3;
    QLabel *id_label_4;
    QLabel *id_label_5;
    QLabel *name_label;
    QLabel *category_label;
    QLabel *price_label;
    QLabel *quantity_label;

    void setupUi(QDialog *findProduct)
    {
        if (findProduct->objectName().isEmpty())
            findProduct->setObjectName("findProduct");
        findProduct->resize(463, 369);
        id_label = new QLabel(findProduct);
        id_label->setObjectName("id_label");
        id_label->setGeometry(QRect(40, 50, 131, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(12);
        id_label->setFont(font);
        id_input = new QLineEdit(findProduct);
        id_input->setObjectName("id_input");
        id_input->setGeometry(QRect(190, 50, 181, 24));
        find_btn = new QPushButton(findProduct);
        find_btn->setObjectName("find_btn");
        find_btn->setGeometry(QRect(170, 90, 91, 31));
        id_label_2 = new QLabel(findProduct);
        id_label_2->setObjectName("id_label_2");
        id_label_2->setGeometry(QRect(40, 150, 131, 31));
        id_label_2->setFont(font);
        id_label_3 = new QLabel(findProduct);
        id_label_3->setObjectName("id_label_3");
        id_label_3->setGeometry(QRect(40, 190, 131, 31));
        id_label_3->setFont(font);
        id_label_4 = new QLabel(findProduct);
        id_label_4->setObjectName("id_label_4");
        id_label_4->setGeometry(QRect(40, 230, 131, 31));
        id_label_4->setFont(font);
        id_label_5 = new QLabel(findProduct);
        id_label_5->setObjectName("id_label_5");
        id_label_5->setGeometry(QRect(40, 270, 131, 31));
        id_label_5->setFont(font);
        name_label = new QLabel(findProduct);
        name_label->setObjectName("name_label");
        name_label->setGeometry(QRect(150, 150, 261, 31));
        name_label->setFont(font);
        category_label = new QLabel(findProduct);
        category_label->setObjectName("category_label");
        category_label->setGeometry(QRect(150, 190, 241, 31));
        category_label->setFont(font);
        price_label = new QLabel(findProduct);
        price_label->setObjectName("price_label");
        price_label->setGeometry(QRect(150, 230, 151, 31));
        price_label->setFont(font);
        quantity_label = new QLabel(findProduct);
        quantity_label->setObjectName("quantity_label");
        quantity_label->setGeometry(QRect(150, 270, 151, 31));
        quantity_label->setFont(font);

        retranslateUi(findProduct);

        QMetaObject::connectSlotsByName(findProduct);
    } // setupUi

    void retranslateUi(QDialog *findProduct)
    {
        findProduct->setWindowTitle(QCoreApplication::translate("findProduct", "Dialog", nullptr));
        id_label->setText(QCoreApplication::translate("findProduct", "Enter Product ID:", nullptr));
        find_btn->setText(QCoreApplication::translate("findProduct", "Find", nullptr));
        id_label_2->setText(QCoreApplication::translate("findProduct", "Name:", nullptr));
        id_label_3->setText(QCoreApplication::translate("findProduct", "Category:", nullptr));
        id_label_4->setText(QCoreApplication::translate("findProduct", "Price:", nullptr));
        id_label_5->setText(QCoreApplication::translate("findProduct", "Quantity:", nullptr));
        name_label->setText(QString());
        category_label->setText(QString());
        price_label->setText(QString());
        quantity_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class findProduct: public Ui_findProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPRODUCT_H
