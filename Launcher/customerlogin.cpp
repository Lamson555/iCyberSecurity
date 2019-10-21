#include "customerlogin.h"
#include "ui_customerlogin.h"
#include "mainwindow.h"
#include "userdata.h"
#include "customerlogin.h"
#include "customerfirst.h"
#include <iomanip>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDialog>


customerLogin::customerLogin(QString username, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerLogin)
{
    ui->setupUi(this);

    ui->lineEdit->setText(username);

}


customerLogin::~customerLogin()
{
    delete ui;
}

void customerLogin::buttonBackLogin()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void customerLogin::on_secureRadio_clicked()
{
    if(ui->secureRadio->isChecked())
    {
        total += secureEmail;
        ui->totalLCD->display(total);
    }
    else
    {
        total -= secureEmail;
        ui->totalLCD->display(total);
    }

}

void customerLogin::on_dataRadio_clicked()
{
    if(ui->dataRadio->isChecked())
    {
        total += dataEncrypt;
        ui->totalLCD->display(total);
    }
    else
    {
        total -= dataEncrypt;
        ui->totalLCD->display(total);
    }
}

void customerLogin::on_serverRadio_clicked()
{
    if(ui->serverRadio->isChecked())
    {
        total += serverSec;
        ui->totalLCD->display(total);
    }
    else
    {
        total -= serverSec;
        ui->totalLCD->display(total);
    }
}

void customerLogin::on_ConfirmPurchase_clicked()
{
    QString userid = ui->lineEdit->text();          //So Jenky
    QString secureEmailGateway;
    QString dataEncryption;
    QString serverSecurity;

    if(ui->secureRadio->isChecked())
    {
        secureEmailGateway = "Purchased";
    }
    else
        secureEmailGateway = "DNP";

    if(ui->dataRadio->isChecked())
    {
        dataEncryption = "Purchased";
    }
    else
        dataEncryption = "DNP";

    if(ui->serverRadio->isChecked())
    {
        serverSecurity = "Purchased";
    }
    else
        serverSecurity = "DNP";

    if (!conn.connOpen())
    {
        qDebug() << "Failed To Open the Database";
    }

    conn.connOpen();

    QSqlQuery qry;

    qry.prepare("UPDATE owner SET "
                "secureEmailGateway='"+secureEmailGateway+"', dataEncryption= '"+dataEncryption+"', serverSecurity= '"+serverSecurity+"' WHERE userid='"+userid+"'");

    if (qry.exec())
    {
        conn.connClose();
        hide();
    }

    QMessageBox::information(
        this,
        tr("Application Name"),
        tr("Purchase Confirmed.") );

    hide();
    customerFirst *userLogin = new customerFirst(userid);
    userLogin->show();
}
