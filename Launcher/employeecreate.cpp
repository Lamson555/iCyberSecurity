#include "employeecreate.h"
#include "ui_employeecreate.h"
#include "mainwindow.h"

EmployeeCreate::EmployeeCreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeCreate)
{
    ui->setupUi(this);
}

EmployeeCreate::~EmployeeCreate()
{
    delete ui;
}

void EmployeeCreate::on_pushButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}
