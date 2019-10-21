#ifndef GUARANTEE_H
#define GUARANTEE_H

#include <QDialog>

namespace Ui {
class guarantee;
}

class guarantee : public QDialog
{
    Q_OBJECT

public:
    explicit guarantee(QWidget *parent = nullptr);
    ~guarantee();

private:
    Ui::guarantee *ui;
};

#endif // GUARANTEE_H
