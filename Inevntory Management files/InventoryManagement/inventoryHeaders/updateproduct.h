#ifndef UPDATEPRODUCT_H
#define UPDATEPRODUCT_H

#include <QDialog>

namespace Ui {
class UpdateProduct;
}

class UpdateProduct : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateProduct(QWidget *parent = nullptr);
    ~UpdateProduct();

private slots:
    void on_update_btn_clicked();

private:
    Ui::UpdateProduct *ui;
};

#endif // UPDATEPRODUCT_H
