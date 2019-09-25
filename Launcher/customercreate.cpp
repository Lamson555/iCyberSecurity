#include "customercreate.h"
#include "ui_customercreate.h"
#include "accountconfirm.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

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

void customerCreate::on_pushConfirm_clicked()
{
    QFile ownerFile("/Users/Hamad/CS1C_Project_One/customer.txt");

    if(!ownerFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"Error","Database File is Not Open");
    }
    QTextStream out(&ownerFile);
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

    ownerFile.flush();
    ownerFile.close();

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
