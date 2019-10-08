#include "secadminlogin.h"
#include "ui_secadminlogin.h"
#include "mainwindow.h"

secAdminLogin::secAdminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secAdminLogin)
{
    ui->setupUi(this);
}

secAdminLogin::~secAdminLogin()
{
    delete ui;
}

void secAdminLogin::on_backLogin_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}
