#include "customercreate.h"
#include "ui_customercreate.h"
#include "mainwindow.h"

customerCreate::customerCreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerCreate)
{
    ui->setupUi(this);
}

customerCreate::~customerCreate()
{
    delete ui;
}

void customerCreate::on_pushButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}
