/********************************************************************************
** Form generated from reading UI file 'customerinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERINFO_H
#define UI_CUSTOMERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerInfo
{
public:
    QLabel *Name_label;
    QLineEdit *fname_input;
    QLineEdit *lname_input;
    QLabel *lastname_label;
    QLineEdit *address_input;
    QLabel *address_label;
    QLineEdit *state_input;
    QLabel *zip_label;
    QLineEdit *zip_input;
    QLabel *state_label;
    QLineEdit *country_input;
    QLabel *phone_label;
    QLineEdit *phone_input;
    QLabel *country_label;
    QLabel *heading_label;
    QLabel *details_label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    QWidget *name_widget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QWidget *qty_widget;
    QWidget *price_widget;
    QRadioButton *debit_rbtn;
    QRadioButton *cod_rbtn;
    QLabel *total_label;
    QLabel *totalPrice_label;
    QPushButton *buy_btn;
    QLabel *payemnt_error;
    QLabel *detail_error;

    void setupUi(QDialog *CustomerInfo)
    {
        if (CustomerInfo->objectName().isEmpty())
            CustomerInfo->setObjectName("CustomerInfo");
        CustomerInfo->resize(413, 437);
        Name_label = new QLabel(CustomerInfo);
        Name_label->setObjectName("Name_label");
        Name_label->setGeometry(QRect(30, 60, 81, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(10);
        Name_label->setFont(font);
        fname_input = new QLineEdit(CustomerInfo);
        fname_input->setObjectName("fname_input");
        fname_input->setGeometry(QRect(30, 80, 113, 24));
        lname_input = new QLineEdit(CustomerInfo);
        lname_input->setObjectName("lname_input");
        lname_input->setGeometry(QRect(200, 80, 113, 24));
        lastname_label = new QLabel(CustomerInfo);
        lastname_label->setObjectName("lastname_label");
        lastname_label->setGeometry(QRect(200, 60, 81, 16));
        lastname_label->setFont(font);
        address_input = new QLineEdit(CustomerInfo);
        address_input->setObjectName("address_input");
        address_input->setGeometry(QRect(30, 130, 341, 24));
        address_label = new QLabel(CustomerInfo);
        address_label->setObjectName("address_label");
        address_label->setGeometry(QRect(30, 110, 231, 16));
        address_label->setFont(font);
        state_input = new QLineEdit(CustomerInfo);
        state_input->setObjectName("state_input");
        state_input->setGeometry(QRect(30, 180, 113, 24));
        zip_label = new QLabel(CustomerInfo);
        zip_label->setObjectName("zip_label");
        zip_label->setGeometry(QRect(200, 160, 81, 16));
        zip_label->setFont(font);
        zip_input = new QLineEdit(CustomerInfo);
        zip_input->setObjectName("zip_input");
        zip_input->setGeometry(QRect(200, 180, 113, 24));
        state_label = new QLabel(CustomerInfo);
        state_label->setObjectName("state_label");
        state_label->setGeometry(QRect(30, 160, 81, 16));
        state_label->setFont(font);
        country_input = new QLineEdit(CustomerInfo);
        country_input->setObjectName("country_input");
        country_input->setGeometry(QRect(30, 230, 141, 24));
        phone_label = new QLabel(CustomerInfo);
        phone_label->setObjectName("phone_label");
        phone_label->setGeometry(QRect(200, 210, 111, 16));
        phone_label->setFont(font);
        phone_input = new QLineEdit(CustomerInfo);
        phone_input->setObjectName("phone_input");
        phone_input->setGeometry(QRect(200, 230, 171, 24));
        country_label = new QLabel(CustomerInfo);
        country_label->setObjectName("country_label");
        country_label->setGeometry(QRect(30, 210, 81, 16));
        country_label->setFont(font);
        heading_label = new QLabel(CustomerInfo);
        heading_label->setObjectName("heading_label");
        heading_label->setGeometry(QRect(140, 20, 171, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(12);
        heading_label->setFont(font1);
        details_label = new QLabel(CustomerInfo);
        details_label->setObjectName("details_label");
        details_label->setGeometry(QRect(30, 270, 171, 16));
        details_label->setFont(font1);
        scrollArea = new QScrollArea(CustomerInfo);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(30, 290, 371, 51));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 369, 49));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout->setObjectName("horizontalLayout");
        name_widget = new QWidget(scrollAreaWidgetContents_2);
        name_widget->setObjectName("name_widget");

        horizontalLayout->addWidget(name_widget);

        frame = new QFrame(scrollAreaWidgetContents_2);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        qty_widget = new QWidget(frame);
        qty_widget->setObjectName("qty_widget");

        horizontalLayout_2->addWidget(qty_widget);

        price_widget = new QWidget(frame);
        price_widget->setObjectName("price_widget");

        horizontalLayout_2->addWidget(price_widget);


        horizontalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        debit_rbtn = new QRadioButton(CustomerInfo);
        debit_rbtn->setObjectName("debit_rbtn");
        debit_rbtn->setGeometry(QRect(30, 370, 201, 22));
        debit_rbtn->setFont(font);
        cod_rbtn = new QRadioButton(CustomerInfo);
        cod_rbtn->setObjectName("cod_rbtn");
        cod_rbtn->setGeometry(QRect(30, 390, 171, 22));
        cod_rbtn->setFont(font);
        total_label = new QLabel(CustomerInfo);
        total_label->setObjectName("total_label");
        total_label->setGeometry(QRect(30, 350, 91, 16));
        total_label->setFont(font);
        totalPrice_label = new QLabel(CustomerInfo);
        totalPrice_label->setObjectName("totalPrice_label");
        totalPrice_label->setGeometry(QRect(120, 350, 91, 16));
        totalPrice_label->setFont(font);
        buy_btn = new QPushButton(CustomerInfo);
        buy_btn->setObjectName("buy_btn");
        buy_btn->setGeometry(QRect(310, 400, 80, 24));
        payemnt_error = new QLabel(CustomerInfo);
        payemnt_error->setObjectName("payemnt_error");
        payemnt_error->setGeometry(QRect(40, 410, 191, 16));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        payemnt_error->setPalette(palette);
        detail_error = new QLabel(CustomerInfo);
        detail_error->setObjectName("detail_error");
        detail_error->setGeometry(QRect(120, 40, 231, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        detail_error->setPalette(palette1);

        retranslateUi(CustomerInfo);

        QMetaObject::connectSlotsByName(CustomerInfo);
    } // setupUi

    void retranslateUi(QDialog *CustomerInfo)
    {
        CustomerInfo->setWindowTitle(QCoreApplication::translate("CustomerInfo", "Dialog", nullptr));
        Name_label->setText(QCoreApplication::translate("CustomerInfo", "First Name:", nullptr));
        lastname_label->setText(QCoreApplication::translate("CustomerInfo", "Last Name:", nullptr));
        address_label->setText(QCoreApplication::translate("CustomerInfo", "Street Address (Include P.O box)", nullptr));
        zip_label->setText(QCoreApplication::translate("CustomerInfo", "Zip Code", nullptr));
        state_label->setText(QCoreApplication::translate("CustomerInfo", "State:", nullptr));
        phone_label->setText(QCoreApplication::translate("CustomerInfo", "Phone Number:", nullptr));
        country_label->setText(QCoreApplication::translate("CustomerInfo", "Country:", nullptr));
        heading_label->setText(QCoreApplication::translate("CustomerInfo", "Order Review:", nullptr));
        details_label->setText(QCoreApplication::translate("CustomerInfo", "Order Details:", nullptr));
        debit_rbtn->setText(QCoreApplication::translate("CustomerInfo", "Pay with Debit/Credit Card", nullptr));
        cod_rbtn->setText(QCoreApplication::translate("CustomerInfo", "Pay Cash on Delivery", nullptr));
        total_label->setText(QCoreApplication::translate("CustomerInfo", "Order Total : $", nullptr));
        totalPrice_label->setText(QString());
        buy_btn->setText(QCoreApplication::translate("CustomerInfo", "Buy", nullptr));
        payemnt_error->setText(QString());
        detail_error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomerInfo: public Ui_CustomerInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERINFO_H
