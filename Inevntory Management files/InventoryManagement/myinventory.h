#ifndef MYINVENTORY_H
#define MYINVENTORY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MyInventory; }
QT_END_NAMESPACE

class MyInventory : public QMainWindow
{
    Q_OBJECT

public:
    MyInventory(QWidget *parent = nullptr);
    ~MyInventory();


private slots:
    void on_pushButton_clicked();

    void on_view_btn_clicked();

private:
    Ui::MyInventory *ui;
};

extern QString viewCategory;

#endif // MYINVENTORY_H
