#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class adminLogin;
}

class adminLogin : public QDialog
{
    Q_OBJECT

public:
   MainWindow conn;
public:
    explicit adminLogin(QWidget *parent = nullptr);
    ~adminLogin();

private slots:
    void on_backLogin_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::adminLogin *ui;
};

#endif // ADMINLOGIN_H
