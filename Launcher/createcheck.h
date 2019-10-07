#ifndef CREATECHECK_H
#define CREATECHECK_H

#include <QDialog>

namespace Ui {
class CreateCheck;
}

class CreateCheck : public QDialog
{
    Q_OBJECT

public:
    explicit CreateCheck(QWidget *parent = nullptr);
    ~CreateCheck();

private slots:
    void on_typeConfirm_clicked();

private:
    Ui::CreateCheck *ui;
};

#endif // CREATECHECK_H
