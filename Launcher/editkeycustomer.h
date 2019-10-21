#ifndef EDITKEYCUSTOMER_H
#define EDITKEYCUSTOMER_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class editKeyCustomer;
}

class editKeyCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit editKeyCustomer(QWidget *parent = nullptr);
    ~editKeyCustomer();
public:
    MainWindow conn;
private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::editKeyCustomer *ui;
};

#endif // EDITKEYCUSTOMER_H
