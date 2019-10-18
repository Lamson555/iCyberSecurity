#ifndef EMPLOYEEDATA_H
#define EMPLOYEEDATA_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class employeeData;
}

class employeeData : public QDialog
{
    Q_OBJECT

public:
    explicit employeeData(QWidget *parent = nullptr);
    ~employeeData();
public:
    MainWindow conn;

private slots:
    void on_loadDatabase_clicked();

private:
    Ui::employeeData *ui;
};

#endif // EMPLOYEEDATA_H
