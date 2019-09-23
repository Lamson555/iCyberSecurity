#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "contactus.h"
#include "seclogin.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void buttonClickHandler();
    void buttonContact();
    void buttonLogin();

private slots:
    void on_buttonCreate_clicked();

private:
    Ui::MainWindow *ui;
    SecLogin *secLogin;

};
#endif // MAINWINDOW_H
