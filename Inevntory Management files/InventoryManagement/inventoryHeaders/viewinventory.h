#ifndef VIEWINVENTORY_H
#define VIEWINVENTORY_H

#include <QDialog>
#include<QStandardItemModel>


namespace Ui {
class ViewInventory;
}

class ViewInventory : public QDialog
{
    Q_OBJECT

public:
    explicit ViewInventory(QWidget *parent = nullptr);
    ~ViewInventory();

private:
    Ui::ViewInventory *ui;
    QStandardItemModel *csvModel;
};

#endif // VIEWINVENTORY_H
