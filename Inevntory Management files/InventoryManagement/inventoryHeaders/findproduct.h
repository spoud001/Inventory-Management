#ifndef FINDPRODUCT_H
#define FINDPRODUCT_H

#include <QDialog>

namespace Ui {
class findProduct;
}

class findProduct : public QDialog
{
    Q_OBJECT

public:
    explicit findProduct(QWidget *parent = nullptr);
    ~findProduct();

private slots:
    void on_find_btn_clicked();

private:
    Ui::findProduct *ui;
};

#endif // FINDPRODUCT_H
