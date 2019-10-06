#include "accountconfirm.h"
#include "ui_accountconfirm.h"
#include "mainwindow.h"

accountConfirm::accountConfirm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accountConfirm)
{
    ui->setupUi(this);
}

accountConfirm::~accountConfirm()
{
    delete ui;
}

void accountConfirm::on_pushButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}
