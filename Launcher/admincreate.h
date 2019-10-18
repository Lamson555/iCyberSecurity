#ifndef ADMINCREATE_H
#define ADMINCREATE_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class adminCreate;
}

class adminCreate : public QDialog
{
    Q_OBJECT
public:
    MainWindow conn;
public:
    explicit adminCreate(QWidget *parent = nullptr);
    ~adminCreate();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::adminCreate *ui;
};

#endif // ADMINCREATE_H
