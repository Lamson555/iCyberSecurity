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
    if (!conn.connOpen())
        ui->Status2->setText("Failed to open the database");
    else
        ui->Status2->setText("Database Conneceted...");
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
    char rank = '3';
    QString firstName = ui->firstText->text();
    QString lastName = ui->lastText->text();
    QString email = ui->emailText->text();
    QString phoneNumber = ui->phoneText->text();
    QString businessName = ui->businessText->text();
    QString userID = ui->userText->text();
    QString password = ui->passText->text();
    QString passwordCon = ui->passConText->text();

    if (!conn.connOpen())
    {
        qDebug() << "Failed To Open the Database";
    }
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into customer (business, first, last, email, phone, userid, password, rank)"
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
