#ifndef ADMINDATA_H
#define ADMINDATA_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class adminData;
}

class adminData : public QDialog
{
    Q_OBJECT

public:
    explicit adminData(QWidget *parent = nullptr);
    ~adminData();
public:
    MainWindow conn;

private slots:
    void on_loadDatabase_clicked();

private:
    Ui::adminData *ui;
};

#endif // ADMINDATA_H
