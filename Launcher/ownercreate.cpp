#include "ownercreate.h"
#include "ui_ownercreate.h"
#include "accountconfirm.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

OwnerCreate::OwnerCreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OwnerCreate)
{
    ui->setupUi(this);
}

OwnerCreate::~OwnerCreate()
{
    delete ui;
}

void OwnerCreate::on_pushButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void OwnerCreate::on_pushButton_2_clicked()
{
    QFile ownerFile("/Users/Hamad/CS1C_Project_One/owner.txt");

    if(!ownerFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"Error","Database File is Not Open");
    }
    QTextStream out(&ownerFile);
    QString firstName = ui->firstText->toPlainText();
    QString lastName = ui->lastText->toPlainText();
    QString email = ui->emailText->toPlainText();
    QString phoneNumber = ui->phoneText->toPlainText();
    QString businessName = ui->businessText->toPlainText();
    QString userID = ui->userText->toPlainText();
    QString password = ui->passText->toPlainText();
    QString passwordCon = ui->passConText->toPlainText();

    out << firstName + '\n';
    out << lastName + '\n';
    out << email + '\n';
    out << phoneNumber + '\n';
    out << businessName + '\n';
    out << userID + '\n';
    out << password + '\n';
    out << passwordCon + '\n' + '\n';

    ownerFile.flush();
    ownerFile.close();

    this->ui->firstText->setText("");
    this->ui->lastText->setText("");
    this->ui->emailText->setText("");
    this->ui->phoneText->setText("");
    this->ui->businessText->setText("");
    this->ui->userText->setText("");
    this->ui->passText->setText("");
    this->ui->passConText->setText("");

    accountConfirm account;
    account.setModal(true);
    account.exec();
    hide();
}
