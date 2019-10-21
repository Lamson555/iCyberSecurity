#include "customerfirst.h"
#include "customerlogin.h"
#include "mainwindow.h"
#include "ui_customerfirst.h"
#include <QUrl>
#include <QDesktopServices>
#include <QMessageBox>


customerFirst::customerFirst( QString username, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerFirst)
{
    ui->setupUi(this);
    if (!conn.connOpen())
        ui->statusLine->setText("Failed to open the database");
    else
        ui->statusLine->setText("Database Conneceted...");

    ui->lineEdit->setText(username);
}

customerFirst::~customerFirst()
{
    delete ui;
}

void customerFirst::on_backLogin_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void customerFirst::on_orderButton_clicked()
{
    conn.connOpen();
    QSqlQuery qry;
    QString user;
    user = ui->lineEdit->text();
    qry.prepare("update owner set pamphlet = 'Ordered' where userid = '"+user+"'" );
    qry.exec();
    conn.connClose();
    QMessageBox::information(
    this,
    tr("Application Name"),
    tr("Thank You For Viewing our Pamphlet you will be Redirected Immediately") );
    QDesktopServices::openUrl(QUrl("https://www.canva.com/design/DADok4zy9VQ/93eJLh2XtgIS97n8eE6r2w/view?utm_content=DADok4zy9VQ&utm_campaign=designshare&utm_medium=link&utm_source=sharebutton", QUrl::TolerantMode));

}

void customerFirst::on_checkout_clicked()
{
    QString user;
    user = ui->lineEdit->text();
    customerLogin *userLogin = new customerLogin(user);
    userLogin->show();

}
