#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_windowMain
{
public:
    QPushButton *pushButton;
    QPushButton *admin_btn;

    void setupUi(QDialog *windowMain)
    {
        if (windowMain->objectName().isEmpty())
            windowMain->setObjectName("windowMain");
        windowMain->resize(400, 300);
        pushButton = new QPushButton(windowMain);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 80, 91, 31));
        admin_btn = new QPushButton(windowMain);
        admin_btn->setObjectName("pushButton_2");
        admin_btn->setGeometry(QRect(150, 160, 91, 31));

        retranslateUi(windowMain);

        QMetaObject::connectSlotsByName(windowMain);
    } // setupUi

    void retranslateUi(QDialog *windowMain)
    {
        windowMain->setWindowTitle(QCoreApplication::translate("windowMain", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("windowMain", "Guest Order", nullptr));
        admin_btn->setText(QCoreApplication::translate("windowMain", "Admin Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class windowMain: public Ui_windowMain {};
} // namespace Ui

QT_END_NAMESPACE

