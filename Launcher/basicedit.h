#ifndef BASICEDIT_H
#define BASICEDIT_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class basicEdit;
}

class basicEdit : public QDialog
{
    Q_OBJECT

public:
    explicit basicEdit(QWidget *parent = nullptr);
    ~basicEdit();
public:
    MainWindow conn;

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::basicEdit *ui;
};

#endif // BASICEDIT_H
