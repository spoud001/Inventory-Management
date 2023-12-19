#ifndef RECEIPTWINDOW_H
#define RECEIPTWINDOW_H

#include <QDialog>

namespace Ui {
class receiptWindow;
}

class receiptWindow : public QDialog
{
    Q_OBJECT

public:
    explicit receiptWindow(QWidget *parent = nullptr);
    ~receiptWindow();

private slots:
    void on_print_btn_clicked();

private:
    Ui::receiptWindow *ui;
};

#endif // RECEIPTWINDOW_H
