#ifndef USERSELECT_H
#define USERSELECT_H

#include <QDialog>

namespace Ui {
class userSelect;
}

class userSelect : public QDialog
{
    Q_OBJECT

public:
    explicit userSelect(QWidget *parent = nullptr);
    ~userSelect();

private slots:
    void on_typeConfirm_clicked();

private:
    Ui::userSelect *ui;
};

#endif // USERSELECT_H
