#ifndef CUSTOMERCREATE_H
#define CUSTOMERCREATE_H

#include <QDialog>

namespace Ui {
class customerCreate;
}

class customerCreate : public QDialog
{
    Q_OBJECT

public:
    explicit customerCreate(QWidget *parent = nullptr);
    ~customerCreate();

private slots:
    void on_pushButton_clicked();

private:
    Ui::customerCreate *ui;
};

#endif // CUSTOMERCREATE_H
