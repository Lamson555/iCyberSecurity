#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactus.h"
#include "customerlogin.h"
#include "userselect.h"
#include "adminlogin.h"
#include "supportedsoftware.h"
#include "adminlogin.h"
#include "viewdatabase.h"
#include <QMessageBox>
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/Users/Hamad/Desktop/Project 1 Files/Logo2.png");
    int w = ui->Logo->width();
    int h = ui->Logo->height();
    ui->Logo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    if (!connOpen())
        ui->Status->setText("Failed to open the database");
    else
        ui->Status->setText("Database Conneceted...");
}

void MainWindow::keyPressEvent(QKeyEvent* pe)
{
if(pe->key() == Qt::Key_Return) buttonLogin();                   //Enter Key works as input for buttonLogin()
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonClickHandler()
{
    this->ui->lineUser->setText("");
    this->ui->linePassword->setText("");
}

void MainWindow::buttonContact()
{
    contactUs contact;
    contact.setModal(true);
    contact.exec();
}

void MainWindow::buttonLogin()
{

    QString username = ui->lineUser->text();
    QString password = ui->linePassword->text();

    if (!connOpen())
    {
        qDebug() << "Failed To Open the Database";
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from `customer` where userid='"+username +"' and password='"+password +"' and rank='3'");

    if (qry.exec())
    {
        int count = 0;
        while (qry.next())
        {
            count++;
        }
        if(count ==1)
        {
            QMessageBox::information(this, "Login", "Username and password is correct");
            hide();
            connClose();
            customerLogin *userLogin = new customerLogin(username);
            userLogin->show();
        }
        else if (count != 1)
        {
            if(qry.exec("select * from `admin` where userid='"+username +"' and password='"+password +"' and rank='1'"))
            {
            int count = 0;
            while (qry.next())
            {
                count++;
            }
            if(count ==1)
            {
                QMessageBox::information(this, "Login", "Username and password is correct");
                hide();
                connClose();
                adminLogin *userLogin = new adminLogin;
                userLogin -> show();
            }
                else
                {
                    QMessageBox::warning(this,"Login", "Username and password is not correct!");
                }
            }
        }
    }
}


void MainWindow::on_buttonCreate_clicked()
{
    userSelect UserSelect;
    UserSelect.setModal(true);
    UserSelect.exec();
    hide();
}

void MainWindow::on_pushContact_2_clicked()
{
    supportedSoftware support;
    support.setModal(true);
    support.exec();

}
