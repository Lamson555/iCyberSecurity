#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactus.h"
#include "customerlogin.h"
#include "createcheck.h"
#include "secadminlogin.h"
#include "supportedsoftware.h"
#include "secadminlogin.h"
#include "viewdatabase.h"
#include "help.h"
#include "testimonial.h"
#include "salespitch.h"
#include "guarantee.h"
#include "services.h"
#include "operations.h"
#include "customerfirst.h"
#include <QMessageBox>
#include <QPixmap>
#include <QDesktopServices>
#include <QUrl>

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
void MainWindow::keyPressEvent(QKeyEvent* pe)
{
if(pe->key() == Qt::Key_Return) buttonLogin();                   //Enter Key works as input for buttonLogin()
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
    qry.prepare("select * from owner where userid='"+username +"' and password='"+password +"' and rank='3'");

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
            customerFirst *userLogin = new customerFirst(username);
            userLogin->show();
        }
        else if (count != 1)
        {
            if(qry.exec("select * from owner where userid='"+username +"' and password='"+password +"' and rank='1'"))
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
                secAdminLogin *adminLogin = new secAdminLogin;
                adminLogin -> show();
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
    CreateCheck createCheck;
    createCheck.setModal(true);
    createCheck.exec();
    hide();
}

void MainWindow::on_pushContact_2_clicked()
{
    supportedSoftware support;
    support.setModal(true);
    support.exec();
}


void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString application = ui->comboBox->currentText();
    if (application == "Help")
    {
        Help help;
        help.setModal(true);
        help.exec();
    }
   if (application == "Testimonals")
    {
        testimonial test;
        test.setModal(true);
        test.exec();
    }
   if(application == "Sales Pitch")
   {
       salesPitch sales;
       sales.setModal(true);
       sales.exec();
   }
   if (application == "Our Guarantee")
   {
       guarantee guarantee;
       guarantee.setModal(true);
       guarantee.exec();
   }
   if (application == "Services")
   {
       services service;
       service.setModal(true);
       service.exec();
   }
 if(application == "Concept of Operations")
 {
     operations operate;
     operate.setModal(true);
     operate.exec();
 }
}
