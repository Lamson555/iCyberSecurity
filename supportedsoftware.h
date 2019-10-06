#ifndef SUPPORTEDSOFTWARE_H
#define SUPPORTEDSOFTWARE_H

#include <QDialog>

namespace Ui {
class supportedSoftware;
}

class supportedSoftware : public QDialog
{
    Q_OBJECT

public:
    explicit supportedSoftware(QWidget *parent = nullptr);
    ~supportedSoftware();

private:
    Ui::supportedSoftware *ui;
};

#endif // SUPPORTEDSOFTWARE_H
