#ifndef TESTIMONIAL_H
#define TESTIMONIAL_H

#include <QDialog>

namespace Ui {
class testimonial;
}

class testimonial : public QDialog
{
    Q_OBJECT

public:
    explicit testimonial(QWidget *parent = nullptr);
    ~testimonial();

private:
    Ui::testimonial *ui;
};

#endif // TESTIMONIAL_H
