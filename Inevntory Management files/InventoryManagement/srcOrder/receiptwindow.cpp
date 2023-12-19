#include "orderHeaders/receiptwindow.h"
#include "ui_receiptwindow.h"
#include "orderHeaders/customerinfo.h"
#include"orderHeaders/orderwindow.h"
#include <QApplication>
#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QImage>
#include <qpagelayout.h>

receiptWindow::receiptWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::receiptWindow)
{
    //set the UI label to the customer details
    ui->setupUi(this);
    ui->lname->setText(customer_Lname);
    ui->fname->setText(customer_Fname);
    ui->Address->setText(customer_Address +", "+ customer_State+"-"+ customer_Zip+", "+ customer_Country  );
    ui->phone->setText(customer_Phone);
    ui->paymenttype->setText(payment_method);
    QVBoxLayout* name_layout = new QVBoxLayout(ui->name_widget);
    QVBoxLayout* qty_layout = new QVBoxLayout(ui->qty_widget);
    QVBoxLayout* price_layout = new QVBoxLayout(ui->price_widget);

    // adds the order details to the widget layout box

    const int numberOfLabels = cart_product.size();
    int total_price =0;
    for (int i = 0; i < numberOfLabels; ++i) {
        QString name = QString::fromStdString(cart_product[i].getName());
        QString quantity = QString::number(cart_product[i].getQuantity());
        QString price = QString::number(cart_product[i].getQuantity()*cart_product[i].getPrice()) ;
        QLabel* namelabel = new QLabel(name , this);
        QLabel* qtylabel = new QLabel(quantity , this);// Create a QLabel
        QLabel* pricelabel = new QLabel(price, this);
        name_layout->addWidget(namelabel);
        qty_layout->addWidget(qtylabel);
        price_layout->addWidget(pricelabel);
        total_price+=cart_product[i].getQuantity()*cart_product[i].getPrice();
    }
    QString total_Qprice = QString::number(total_price);
    // Set the layout to the container widget in our UI
    ui->name_widget->setLayout(name_layout);
    ui->qty_widget->setLayout(qty_layout);
    ui->price_widget->setLayout(price_layout);
    ui->totalPrice_label->setText(total_Qprice);
}

receiptWindow::~receiptWindow()
{
    delete ui;
}

void receiptWindow::on_print_btn_clicked()
{
    //if user wants to print the receipt qprinter and qpainter draws the content of dialog window which can be availale to print or save as pdf.
    QPrinter printer;
    QPrintDialog dialog(&printer, this);
    if (dialog.exec() == QDialog::Accepted) {
        QImage image(this->size(), QImage::Format_ARGB32);
        QPainter painter(&image);
        this->render(&painter);
        painter.end();

        QPainter printPainter;
        printPainter.begin(&printer);
        printPainter.drawImage(0, 0, image);
        printPainter.end();
    }
}



