/********************************************************************************
** Form generated from reading UI file 'receiptwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPTWINDOW_H
#define UI_RECEIPTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_receiptWindow
{
public:
    QPushButton *print_btn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    QWidget *name_widget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QWidget *qty_widget;
    QWidget *price_widget;
    QLabel *details_label;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *lname;
    QLabel *fname;
    QLabel *label_9;
    QLabel *Address;
    QLabel *phone;
    QLabel *paymenttype;
    QLabel *totalPrice_label;

    void setupUi(QDialog *receiptWindow)
    {
        if (receiptWindow->objectName().isEmpty())
            receiptWindow->setObjectName("receiptWindow");
        receiptWindow->resize(881, 576);
        receiptWindow->setBaseSize(QSize(0, 0));
        print_btn = new QPushButton(receiptWindow);
        print_btn->setObjectName("print_btn");
        print_btn->setGeometry(QRect(780, 520, 80, 24));
        label = new QLabel(receiptWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 20, 251, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(24);
        label->setFont(font);
        label_2 = new QLabel(receiptWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 91, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_3 = new QLabel(receiptWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 130, 101, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(receiptWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(400, 100, 91, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(receiptWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(400, 130, 141, 31));
        label_5->setFont(font1);
        scrollArea = new QScrollArea(receiptWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 290, 841, 121));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 839, 119));
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
        details_label = new QLabel(receiptWindow);
        details_label->setObjectName("details_label");
        details_label->setGeometry(QRect(20, 260, 171, 16));
        details_label->setFont(font1);
        label_6 = new QLabel(receiptWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(570, 420, 131, 16));
        label_6->setFont(font1);
        label_7 = new QLabel(receiptWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 160, 121, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(receiptWindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(400, 160, 161, 31));
        label_8->setFont(font1);
        lname = new QLabel(receiptWindow);
        lname->setObjectName("lname");
        lname->setGeometry(QRect(160, 100, 91, 31));
        lname->setFont(font1);
        fname = new QLabel(receiptWindow);
        fname->setObjectName("fname");
        fname->setGeometry(QRect(160, 130, 91, 31));
        fname->setFont(font1);
        label_9 = new QLabel(receiptWindow);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(160, 160, 121, 31));
        label_9->setFont(font1);
        Address = new QLabel(receiptWindow);
        Address->setObjectName("Address");
        Address->setGeometry(QRect(500, 100, 381, 31));
        Address->setFont(font1);
        phone = new QLabel(receiptWindow);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(550, 130, 181, 31));
        phone->setFont(font1);
        paymenttype = new QLabel(receiptWindow);
        paymenttype->setObjectName("paymenttype");
        paymenttype->setGeometry(QRect(570, 160, 181, 31));
        paymenttype->setFont(font1);
        totalPrice_label = new QLabel(receiptWindow);
        totalPrice_label->setObjectName("totalPrice_label");
        totalPrice_label->setGeometry(QRect(700, 420, 131, 16));
        totalPrice_label->setFont(font1);

        retranslateUi(receiptWindow);

        QMetaObject::connectSlotsByName(receiptWindow);
    } // setupUi

    void retranslateUi(QDialog *receiptWindow)
    {
        receiptWindow->setWindowTitle(QCoreApplication::translate("receiptWindow", "Dialog", nullptr));
        print_btn->setText(QCoreApplication::translate("receiptWindow", "Print", nullptr));
        label->setText(QCoreApplication::translate("receiptWindow", "ORDER RECEIPT", nullptr));
        label_2->setText(QCoreApplication::translate("receiptWindow", "Last name:", nullptr));
        label_3->setText(QCoreApplication::translate("receiptWindow", "First name:", nullptr));
        label_4->setText(QCoreApplication::translate("receiptWindow", "Address:", nullptr));
        label_5->setText(QCoreApplication::translate("receiptWindow", "Phone Number:", nullptr));
        details_label->setText(QCoreApplication::translate("receiptWindow", "Order Details:", nullptr));
        label_6->setText(QCoreApplication::translate("receiptWindow", "Order Total:  $", nullptr));
        label_7->setText(QCoreApplication::translate("receiptWindow", "Order Status:", nullptr));
        label_8->setText(QCoreApplication::translate("receiptWindow", "Payment Method:", nullptr));
        lname->setText(QCoreApplication::translate("receiptWindow", "Smith", nullptr));
        fname->setText(QCoreApplication::translate("receiptWindow", "John", nullptr));
        label_9->setText(QCoreApplication::translate("receiptWindow", "Confirmed", nullptr));
        Address->setText(QCoreApplication::translate("receiptWindow", "73 Rugar st, Plattsburgh Ny 12901, USA", nullptr));
        phone->setText(QCoreApplication::translate("receiptWindow", "8974893274983", nullptr));
        paymenttype->setText(QCoreApplication::translate("receiptWindow", "Cash on delivery", nullptr));
        totalPrice_label->setText(QCoreApplication::translate("receiptWindow", "Demo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class receiptWindow: public Ui_receiptWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPTWINDOW_H
