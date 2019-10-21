#ifndef KEYEDIT_H
#define KEYEDIT_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class keyEdit;
}

class keyEdit : public QDialog
{
    Q_OBJECT

public:
    explicit keyEdit(QWidget *parent = nullptr);
    ~keyEdit();
public:
    MainWindow conn;
private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::keyEdit *ui;
};

#endif // KEYEDIT_H
