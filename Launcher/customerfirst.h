#ifndef CUSTOMERFIRST_H
#define CUSTOMERFIRST_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class customerFirst;
}

class customerFirst : public QDialog
{
    Q_OBJECT

public:
    explicit customerFirst(QString username, QWidget *parent = nullptr);
    ~customerFirst();

public:
    MainWindow conn;
private slots:
    void on_backLogin_clicked();

    void on_orderButton_clicked();

    void on_checkout_clicked();

private:
    Ui::customerFirst *ui;
};

#endif // CUSTOMERFIRST_H
