#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
#include <QFileInfo>
#include <QKeyEvent>              //Needed for custom key press input
#include "contactus.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("/Users/LamsonBui/Desktop/CS1C_Project_One/customer.db");

        if (!mydb.open())
        {
            qDebug() << ("Failed to open the database");
            return false;
        }
        else
        {
            qDebug() << ("Database Conneceted...");
            return true;
        }
    }

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void buttonClickHandler();
    void buttonContact();
    void buttonLogin();

private slots:
    void on_buttonCreate_clicked();

    void on_pushContact_2_clicked();

private:
    Ui::MainWindow *ui;

protected:
    void keyPressEvent(QKeyEvent* pe);         //Declaration for custom key input event


};
#endif // MAINWINDOW_H
