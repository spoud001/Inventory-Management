/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminLogin
{
public:
    QLabel *username_label;
    QLineEdit *username_input;
    QLabel *password_label;
    QLineEdit *password_input;
    QPushButton *login_btn;
    QLabel *wrong_label;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *adminLogin)
    {
        if (adminLogin->objectName().isEmpty())
            adminLogin->setObjectName("adminLogin");
        adminLogin->resize(307, 187);
        username_label = new QLabel(adminLogin);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(90, 10, 71, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        username_label->setFont(font);
        username_input = new QLineEdit(adminLogin);
        username_input->setObjectName("username_input");
        username_input->setGeometry(QRect(90, 30, 131, 24));
        password_label = new QLabel(adminLogin);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(90, 60, 71, 16));
        password_label->setFont(font);
        password_input = new QLineEdit(adminLogin);
        password_input->setObjectName("password_input");
        password_input->setGeometry(QRect(90, 80, 131, 24));
        password_input->setEchoMode(QLineEdit::Password);
        login_btn = new QPushButton(adminLogin);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(120, 120, 71, 21));
        QFont font1;
        font1.setStrikeOut(false);
        login_btn->setFont(font1);
        wrong_label = new QLabel(adminLogin);
        wrong_label->setObjectName("wrong_label");
        wrong_label->setGeometry(QRect(90, 150, 171, 20));
        label = new QLabel(adminLogin);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 30, 49, 16));
        label_2 = new QLabel(adminLogin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 80, 61, 20));
        label_3 = new QLabel(adminLogin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 10, 49, 16));

        retranslateUi(adminLogin);

        QMetaObject::connectSlotsByName(adminLogin);
    } // setupUi

    void retranslateUi(QDialog *adminLogin)
    {
        adminLogin->setWindowTitle(QCoreApplication::translate("adminLogin", "Login", nullptr));
        username_label->setText(QCoreApplication::translate("adminLogin", "Username:", nullptr));
        password_label->setText(QCoreApplication::translate("adminLogin", "Password:", nullptr));
        login_btn->setText(QCoreApplication::translate("adminLogin", "Login", nullptr));
        wrong_label->setText(QString());
        label->setText(QCoreApplication::translate("adminLogin", "admin", nullptr));
        label_2->setText(QCoreApplication::translate("adminLogin", "admin123", nullptr));
        label_3->setText(QCoreApplication::translate("adminLogin", "Use:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminLogin: public Ui_adminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
