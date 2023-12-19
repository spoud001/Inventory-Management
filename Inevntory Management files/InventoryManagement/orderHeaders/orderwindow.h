#ifndef ORDERWINDOW_H
#define ORDERWINDOW_H
#include"productInventory.h"
#include <QDialog>

namespace Ui {
class orderWindow;
}

class orderWindow : public QDialog
{
    Q_OBJECT

public:
    explicit orderWindow(QWidget *parent = nullptr);
    ~orderWindow();

private slots:
    void on_itemdrop_currentTextChanged(const QString &arg1);

    void on_addTocat_btn_clicked();

private:
    Ui::orderWindow *ui;
};

extern vector<Product> product;
extern vector<Product> cart_product;
#endif // ORDERWINDOW_H
