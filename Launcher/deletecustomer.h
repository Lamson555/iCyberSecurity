#ifndef DELETECUSTOMER_H
#define DELETECUSTOMER_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class deleteCustomer;
}

class deleteCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit deleteCustomer(QWidget *parent = nullptr);
    ~deleteCustomer();
public:
    MainWindow conn;

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::deleteCustomer *ui;
};

#endif // DELETECUSTOMER_H
