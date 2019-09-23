#ifndef EMPLOYEECREATE_H
#define EMPLOYEECREATE_H

#include <QDialog>

namespace Ui {
class EmployeeCreate;
}

class EmployeeCreate : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeCreate(QWidget *parent = nullptr);
    ~EmployeeCreate();

private slots:
    void on_pushButton_clicked();

private:
    Ui::EmployeeCreate *ui;
};

#endif // EMPLOYEECREATE_H
