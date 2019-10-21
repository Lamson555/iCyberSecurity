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
    QString firstName = ui->lineFirst->text();
    QString lastName = ui->lineLast->text();
    QString email = ui->lineEmail->text();
    QString phoneNumber = ui->linePhone->text();
    QString userID = ui->lineUser->text();
    QString password = ui->linePass->text();
    QString passwordCon = ui->linePass2->text();

    if (!conn.connOpen())
    {
        qDebug() << "Failed To Open the Database";
    }
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into owner (first, last, email, phone, userid, password, rank)"
                "values ('"+firstName+"','"+lastName+"','"+email+"','"+phoneNumber+"','"+userID+"','"+password+"','"+rank+"')");

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
