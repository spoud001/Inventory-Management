#ifndef VIEWORDER_H
#define VIEWORDER_H

#include <QDialog>
#include<QStandardItemModel>

namespace Ui {
class viewOrder;
}

class viewOrder : public QDialog
{
    Q_OBJECT

public:
    explicit viewOrder(QWidget *parent = nullptr);
    ~viewOrder();

private:
    Ui::viewOrder *ui;
    QStandardItemModel *csvModel;
};

#endif // VIEWORDER_H
