#include "userselect.h"
#include "ui_userselect.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "admincreate.h"
#include "customercreate.h"
#include "employeecreate.h"

userSelect::userSelect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userSelect)
{
    ui->setupUi(this);
}

userSelect::~userSelect()
{
    delete ui;
}

void userSelect::on_typeConfirm_clicked()
{
    if(ui->adminRadio->isChecked())
    {
        hide();
        adminCreate *admin = new adminCreate();
        admin -> show();
    }
    else if(ui->customerRadio->isChecked())
    {
        hide();
        customerCreate *customer = new customerCreate();
        customer -> show();
    }
    else
    {
        QMessageBox::warning(this,"Error", "Type of user must be selected.");
    }
}
