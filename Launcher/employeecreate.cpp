#include "employeecreate.h"
#include "ui_employeecreate.h"
#include "mainwindow.h"
#include "accountconfirm.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

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

void EmployeeCreate::on_pushConfirm_clicked()
{
    QFile employeeFile("/Users/Hamad/CS1C_Project_One/employee.txt");

    if(!employeeFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"Error","Database File is Not Open");
    }
    QTextStream out(&employeeFile);
    QString firstName = ui->firstText->toPlainText();
    QString lastName = ui->lastText->toPlainText();
    QString email = ui->emailText->toPlainText();
    QString phoneNumber = ui->phoneText->toPlainText();
    QString userID = ui->userText->toPlainText();
    QString password = ui->passText->toPlainText();
    QString passwordCon = ui->passConText->toPlainText();

    out << firstName + '\n';
    out << lastName + '\n';
    out << email + '\n';
    out << phoneNumber + '\n';
    out << userID + '\n';
    out << password + '\n';
    out << passwordCon + '\n' + '\n';

    employeeFile.flush();
    employeeFile.close();

    this->ui->firstText->setText("");
    this->ui->lastText->setText("");
    this->ui->emailText->setText("");
    this->ui->phoneText->setText("");
    this->ui->userText->setText("");
    this->ui->passText->setText("");
    this->ui->passConText->setText("");

    accountConfirm account;
    account.setModal(true);
    account.exec();
    hide();
}
