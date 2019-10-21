#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <QDialog>

namespace Ui {
class operations;
}

class operations : public QDialog
{
    Q_OBJECT

public:
    explicit operations(QWidget *parent = nullptr);
    ~operations();

private:
    Ui::operations *ui;
};

#endif // OPERATIONS_H
