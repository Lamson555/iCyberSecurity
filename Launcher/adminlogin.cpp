#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "mainwindow.h"
#include "viewdatabase.h"
#include "admindata.h"

adminLogin::adminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminLogin)
{
    ui->setupUi(this);
}

adminLogin::~adminLogin()
{
    delete ui;
}

void adminLogin::on_backLogin_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void adminLogin::on_pushButton_clicked()
{
    viewDatabase database;
    database.setModal(true);
    database.exec();
}

void adminLogin::on_pushButton_2_clicked()
{
    adminData admin;
    admin.setModal(true);
    admin.exec();
}
