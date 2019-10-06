#ifndef OWNERCREATE_H
#define OWNERCREATE_H

#include <QDialog>

namespace Ui {
class OwnerCreate;
}

class OwnerCreate : public QDialog
{
    Q_OBJECT

public:
    explicit OwnerCreate(QWidget *parent = nullptr);
    ~OwnerCreate();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::OwnerCreate *ui;
};

#endif // OWNERCREATE_H
