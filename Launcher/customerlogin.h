#ifndef CUSTOMERLOGIN_H
#define CUSTOMERLOGIN_H


#include <QDialog>
#include "mainwindow.h"
#include "userdata.h"

namespace Ui {
class customerLogin;
}

class customerLogin : public QDialog
{
    Q_OBJECT

public:
    explicit customerLogin(QString username, QWidget *parent = nullptr);
    ~customerLogin();

    double secureEmail = 4000.00;
    double dataEncrypt = 5000.00;
    double serverSec = 10000.00;
    double total = 0.0;
public:
    MainWindow conn;
    class userData user;

public slots:
   void buttonBackLogin();

private slots:
   void on_ConfirmPurchase_clicked();

   void on_secureRadio_clicked();

   void on_dataRadio_clicked();

   void on_serverRadio_clicked();

private:
    Ui::customerLogin *ui;
};

#endif // CUSTOMERLOGIN_H
