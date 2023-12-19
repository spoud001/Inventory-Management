/********************************************************************************
** Form generated from reading UI file 'myinventory.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYINVENTORY_H
#define UI_MYINVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyInventory
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *admin_label;
    QLabel *head_label;
    QComboBox *dropdown;
    QLabel *select_label;
    QPushButton *view_btn;
    QLabel *hidden_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyInventory)
    {
        if (MyInventory->objectName().isEmpty())
            MyInventory->setObjectName("MyInventory");
        MyInventory->resize(447, 294);
        QPalette palette;
        QBrush brush(QColor(170, 170, 170, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(219, 244, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(173, 173, 173, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush3(QColor(179, 179, 179, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        MyInventory->setPalette(palette);
        MyInventory->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 218, 255);\n"
"background-color: rgb(219, 244, 255);"));
        centralwidget = new QWidget(MyInventory);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 230, 91, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        font.setBold(false);
        pushButton->setFont(font);
        pushButton->setMouseTracking(false);
        pushButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);"));
        admin_label = new QLabel(centralwidget);
        admin_label->setObjectName("admin_label");
        admin_label->setGeometry(QRect(100, 200, 271, 20));
        QPalette palette1;
        QBrush brush4(QColor(26, 26, 26, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        admin_label->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(false);
        admin_label->setFont(font1);
        admin_label->setAutoFillBackground(false);
        admin_label->setStyleSheet(QString::fromUtf8(""));
        head_label = new QLabel(centralwidget);
        head_label->setObjectName("head_label");
        head_label->setGeometry(QRect(110, 30, 281, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(16);
        head_label->setFont(font2);
        dropdown = new QComboBox(centralwidget);
        dropdown->addItem(QString());
        dropdown->addItem(QString());
        dropdown->addItem(QString());
        dropdown->addItem(QString());
        dropdown->setObjectName("dropdown");
        dropdown->setGeometry(QRect(140, 110, 151, 21));
        dropdown->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);"));
        select_label = new QLabel(centralwidget);
        select_label->setObjectName("select_label");
        select_label->setGeometry(QRect(150, 90, 121, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(10);
        select_label->setFont(font3);
        view_btn = new QPushButton(centralwidget);
        view_btn->setObjectName("view_btn");
        view_btn->setGeometry(QRect(180, 140, 71, 24));
        view_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);"));
        hidden_label = new QLabel(centralwidget);
        hidden_label->setObjectName("hidden_label");
        hidden_label->setGeometry(QRect(150, 170, 141, 16));
        QPalette palette2;
        QBrush brush6(QColor(255, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        hidden_label->setPalette(palette2);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        hidden_label->setFont(font4);
        hidden_label->setStyleSheet(QString::fromUtf8(""));
        MyInventory->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyInventory);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 447, 21));
        MyInventory->setMenuBar(menubar);
        statusbar = new QStatusBar(MyInventory);
        statusbar->setObjectName("statusbar");
        MyInventory->setStatusBar(statusbar);

        retranslateUi(MyInventory);

        QMetaObject::connectSlotsByName(MyInventory);
    } // setupUi

    void retranslateUi(QMainWindow *MyInventory)
    {
        MyInventory->setWindowTitle(QCoreApplication::translate("MyInventory", "MyInventory", nullptr));
        pushButton->setText(QCoreApplication::translate("MyInventory", "Admin Login", nullptr));
        admin_label->setText(QCoreApplication::translate("MyInventory", "Admin Login to Manage Inventory:", nullptr));
        head_label->setText(QCoreApplication::translate("MyInventory", "Welcome to the Demo!", nullptr));
        dropdown->setItemText(0, QCoreApplication::translate("MyInventory", "---Select a Category---", nullptr));
        dropdown->setItemText(1, QCoreApplication::translate("MyInventory", "Electronics", nullptr));
        dropdown->setItemText(2, QCoreApplication::translate("MyInventory", "Accessories", nullptr));
        dropdown->setItemText(3, QCoreApplication::translate("MyInventory", "Clothing", nullptr));

        select_label->setText(QCoreApplication::translate("MyInventory", "View Items to Order:", nullptr));
        view_btn->setText(QCoreApplication::translate("MyInventory", "View", nullptr));
        hidden_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyInventory: public Ui_MyInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYINVENTORY_H
