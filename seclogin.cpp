#include "seclogin.h"
#include "ui_seclogin.h"
#include "mainwindow.h"

SecLogin::SecLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecLogin)
{
    ui->setupUi(this);
}

SecLogin::~SecLogin()
{
    delete ui;
}

void SecLogin::buttonBackLogin()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}
