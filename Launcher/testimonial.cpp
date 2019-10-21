#include "testimonial.h"
#include "ui_testimonial.h"

testimonial::testimonial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testimonial)
{
    ui->setupUi(this);
}

testimonial::~testimonial()
{
    delete ui;
}
