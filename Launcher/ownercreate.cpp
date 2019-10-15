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
    if (!conn.connOpen())
        ui->Status3->setText("Failed to open the database");
    else
        ui->Status3->setText("Database Conneceted...");
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
    char rank = '1';
    QString firstName = ui->firstText->toPlainText();
    QString lastName = ui->lastText->toPlainText();
    QString email = ui->emailText->toPlainText();
    QString phoneNumber = ui->phoneText->toPlainText();
    QString businessName = ui->businessText->toPlainText();
    QString userID = ui->userText->toPlainText();
    QString password = ui->passText->toPlainText();
    QString passwordCon = ui->passConText->toPlainText();

    if (!conn.connOpen())
    {
        qDebug() << "Failed To Open the Database";
    }
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into owner (business,first, last, email, phone, userid, password, rank)"
                "values ('"+businessName+"','"+firstName+"','"+lastName+"','"+email+"','"+phoneNumber+"','"+userID+"','"+password+"','"+rank+"')");

    if (qry.exec())
    {
        conn.connClose();
        accountConfirm account;
        account.setModal(true);
        account.exec();
        hide();
    }
    else
    {
        QMessageBox::critical(this,tr("ERROR"),qry.lastError().text());
    }
}
