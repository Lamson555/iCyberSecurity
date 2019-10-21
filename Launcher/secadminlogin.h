#ifndef SECADMINLOGIN_H
#define SECADMINLOGIN_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class secAdminLogin;
}

class secAdminLogin : public QDialog
{
    Q_OBJECT

public:
   MainWindow conn;
public:
    explicit secAdminLogin(QWidget *parent = nullptr);
    ~secAdminLogin();

private slots:
    void on_backLogin_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::secAdminLogin *ui;
};

#endif // SECADMINLOGIN_H
