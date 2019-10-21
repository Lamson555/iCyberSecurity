#ifndef EMPLOYEEEDIT_H
#define EMPLOYEEEDIT_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class employeeEdit;
}

class employeeEdit : public QDialog
{
    Q_OBJECT

public:
    explicit employeeEdit(QWidget *parent = nullptr);
    ~employeeEdit();
public:
    MainWindow conn;

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::employeeEdit *ui;
};

#endif // EMPLOYEEEDIT_H
