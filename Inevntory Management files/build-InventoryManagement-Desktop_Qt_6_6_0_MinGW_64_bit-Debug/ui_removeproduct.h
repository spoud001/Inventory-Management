/********************************************************************************
** Form generated from reading UI file 'removeproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEPRODUCT_H
#define UI_REMOVEPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RemoveProduct
{
public:
    QLabel *removeId_label;
    QLineEdit *remove_input;
    QPushButton *pushButton;
    QLabel *output_label;

    void setupUi(QDialog *RemoveProduct)
    {
        if (RemoveProduct->objectName().isEmpty())
            RemoveProduct->setObjectName("RemoveProduct");
        RemoveProduct->resize(336, 198);
        removeId_label = new QLabel(RemoveProduct);
        removeId_label->setObjectName("removeId_label");
        removeId_label->setGeometry(QRect(20, 70, 131, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(12);
        removeId_label->setFont(font);
        remove_input = new QLineEdit(RemoveProduct);
        remove_input->setObjectName("remove_input");
        remove_input->setGeometry(QRect(160, 60, 141, 24));
        pushButton = new QPushButton(RemoveProduct);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 110, 101, 31));
        output_label = new QLabel(RemoveProduct);
        output_label->setObjectName("output_label");
        output_label->setGeometry(QRect(90, 160, 151, 16));
        output_label->setFont(font);

        retranslateUi(RemoveProduct);

        QMetaObject::connectSlotsByName(RemoveProduct);
    } // setupUi

    void retranslateUi(QDialog *RemoveProduct)
    {
        RemoveProduct->setWindowTitle(QCoreApplication::translate("RemoveProduct", "Remove Product", nullptr));
        removeId_label->setText(QCoreApplication::translate("RemoveProduct", "Enter Product Id:", nullptr));
        pushButton->setText(QCoreApplication::translate("RemoveProduct", "Remove", nullptr));
        output_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RemoveProduct: public Ui_RemoveProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEPRODUCT_H
