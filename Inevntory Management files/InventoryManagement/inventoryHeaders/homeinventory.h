#ifndef HOMEINVENTORY_H
#define HOMEINVENTORY_H

#include <QDialog>

namespace Ui {
class HomeInventory;
}

class HomeInventory : public QDialog
{
    Q_OBJECT

public:
    explicit HomeInventory(QWidget *parent = nullptr);
    ~HomeInventory();


private slots:
    void on_addInven_btn_clicked();

    void on_remove_btn_clicked();

    void on_find_btn_clicked();

    void on_update_btn_clicked();

    void on_load_btn_clicked();

    void on_save_btn_clicked();

    void on_view_btn_clicked();

    void on_order_btn_clicked();

private:


    Ui::HomeInventory *ui;
};

#endif // HOMEINVENTORY_H
