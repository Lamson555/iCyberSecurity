#include "createcheck.h"
#include "ui_createcheck.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "ownercreate.h"
#include "customercreate.h"
#include "employeecreate.h"

CreateCheck::CreateCheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateCheck)
{
    ui->setupUi(this);
}

CreateCheck::~CreateCheck()
{
    delete ui;
}

void CreateCheck::on_typeConfirm_clicked()
{
    if(ui->ownerRadio->isChecked())
    {
        hide();
        OwnerCreate *owner = new OwnerCreate();
        owner -> show();
    }
    else if(ui->customerRadio->isChecked())
    {
        hide();
        customerCreate *customer = new customerCreate();
        customer -> show();
    }
    else if(ui->employeeRadio->isChecked())
    {
        hide();
        EmployeeCreate *employee = new EmployeeCreate();
        employee -> show();
    }
    else
    {
        QMessageBox::warning(this,"Error", "Type of user must be selected.");
    }
}
