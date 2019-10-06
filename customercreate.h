#ifndef CUSTOMERCREATE_H
#define CUSTOMERCREATE_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class customerCreate;
}

class customerCreate : public QDialog
{
    Q_OBJECT
public:
    MainWindow conn;
public:
    explicit customerCreate(QWidget *parent = nullptr);
    ~customerCreate();

private slots:
    void on_pushButton_clicked();

    void on_pushConfirm_clicked();

private:
    Ui::customerCreate *ui;
};

#endif // CUSTOMERCREATE_H
