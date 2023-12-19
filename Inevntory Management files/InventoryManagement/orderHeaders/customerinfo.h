#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H
#include <QDialog>

#include "orderwindow.h"
#include "productInventory.h"


namespace Ui {
class CustomerInfo;
}

class CustomerInfo : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerInfo(QWidget *parent = nullptr);
    ~CustomerInfo();

private slots:
    void on_buy_btn_clicked();

private:
    Ui::CustomerInfo *ui;
};

extern QString customer_Fname;
extern QString customer_Lname ;
extern QString customer_Address;
extern QString customer_State ;
extern QString customer_Zip ;
extern QString customer_Country ;
extern QString customer_Phone ;
extern QString payment_method;

#endif // CUSTOMERINFO_H
