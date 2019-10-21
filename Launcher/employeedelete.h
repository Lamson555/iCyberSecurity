#ifndef EMPLOYEEDELETE_H
#define EMPLOYEEDELETE_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class employeeDelete;
}

class employeeDelete : public QDialog
{
    Q_OBJECT

public:
    explicit employeeDelete(QWidget *parent = nullptr);
    ~employeeDelete();
public:
    MainWindow conn;

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::employeeDelete *ui;
};

#endif // EMPLOYEEDELETE_H
