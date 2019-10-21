#ifndef SALESPITCH_H
#define SALESPITCH_H

#include <QDialog>

namespace Ui {
class salesPitch;
}

class salesPitch : public QDialog
{
    Q_OBJECT

public:
    explicit salesPitch(QWidget *parent = nullptr);
    ~salesPitch();

private:
    Ui::salesPitch *ui;
};

#endif // SALESPITCH_H
