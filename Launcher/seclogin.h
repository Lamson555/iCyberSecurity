#ifndef SECLOGIN_H
#define SECLOGIN_H


#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class secLogin;
}

class secLogin : public QDialog
{
    Q_OBJECT

public:
    explicit secLogin(QWidget *parent = nullptr);
    ~secLogin();

    double secureEmail = 4000.00;
    double dataEncrypt = 5000.00;
    double serverSec = 10000.00;
    double total = 0.0;
public:
    MainWindow conn;

public slots:
   void buttonBackLogin();

private slots:
   void on_ConfirmPurchase_clicked();

   void on_secureRadio_clicked();

   void on_dataRadio_clicked();

   void on_serverRadio_clicked();

private:
    Ui::secLogin *ui;
};

#endif // SECLOGIN_H
