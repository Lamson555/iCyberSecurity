#ifndef CONTACTUS_H
#define CONTACTUS_H

#include <QDialog>

namespace Ui {
class contactUs;
}

class contactUs : public QDialog
{
    Q_OBJECT

public:
    explicit contactUs(QWidget *parent = nullptr);
    ~contactUs();



private:
    Ui::contactUs *ui;
};

#endif // CONTACTUS_H
