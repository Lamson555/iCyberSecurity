#include "admincreate.h"
#include "ui_admincreate.h"
#include "accountconfirm.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

adminCreate::adminCreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminCreate)
{
    ui->setupUi(this);
    if (!conn.connOpen())
        ui->Status3->setText("Failed to open the database");
    else
        ui->Status3->setText("Database Conneceted...");
}

adminCreate::~adminCreate()
{
    delete ui;
}

void adminCreate::on_pushButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void adminCreate::on_pushButton_2_clicked()
{
    char rank = '1';
    QString firstName = ui->firstText->text();
    QString lastName = ui->lastText->text();
    QString email = ui->emailText->text();
    QString phoneNumber = ui->phoneText->text();
    QString userID = ui->userText->text();
    QString password = ui->passText->text();
    QString passwordCon = ui->passConText->text();

    if (!conn.connOpen())
    {
        qDebug() << "Failed To Open the Database";
    }
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into `admin` (first, last, email, phone, userid, password, rank)"
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
