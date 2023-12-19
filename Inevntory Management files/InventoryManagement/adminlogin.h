#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>

namespace Ui {
class adminLogin;
}

class adminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit adminLogin(QWidget *parent = nullptr);
    ~adminLogin();


private slots:
    void on_login_btn_clicked();

private:
    Ui::adminLogin *ui;
};

#endif // ADMINLOGIN_H
