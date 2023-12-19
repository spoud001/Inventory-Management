#ifndef REMOVEPRODUCT_H
#define REMOVEPRODUCT_H

#include <QDialog>

namespace Ui {
class RemoveProduct;
}

class RemoveProduct : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveProduct(QWidget *parent = nullptr);
    ~RemoveProduct();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RemoveProduct *ui;
};

#endif // REMOVEPRODUCT_H
