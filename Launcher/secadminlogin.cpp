#include "secadminlogin.h"
#include "ui_secadminlogin.h"
#include "mainwindow.h"
#include "viewdatabase.h"
#include "employeedata.h"

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

void secAdminLogin::on_pushButton_clicked()
{
    viewDatabase database;
    database.setModal(true);
    database.exec();
}

void secAdminLogin::on_pushButton_2_clicked()
{
    employeeData employee;
    employee.setModal(true);
    employee.exec();
}
