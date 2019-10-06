#ifndef SECLOGIN_H
#define SECLOGIN_H


#include <QDialog>
#include <QMainWindow>

#include"contactus.h"


namespace Ui {
class SecLogin;
}

class SecLogin : public QDialog
{
    Q_OBJECT

public:
    explicit SecLogin(QWidget *parent = nullptr);
    ~SecLogin();

 public slots:
   void buttonBackLogin();

private:
    Ui::SecLogin *ui;
    //MainWindow nWin;
};

#endif // SECLOGIN_H
