#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactus.h"
#include "seclogin.h"
#include "createcheck.h"
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

    if (username == "test" && password == "test")
    {
        QMessageBox::information(this, "Login", "Username and password is correct");
        hide();
        secLogin = new SecLogin(this);
        secLogin->show();
    }
    else
    {
        QMessageBox::warning(this,"Login", "Username and password is not correct!");
    }
}


void MainWindow::on_buttonCreate_clicked()
{
    CreateCheck createCheck;
    createCheck.setModal(true);
    createCheck.exec();
    hide();
}
