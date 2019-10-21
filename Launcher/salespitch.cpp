#include "salespitch.h"
#include "ui_salespitch.h"

salesPitch::salesPitch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::salesPitch)
{
    ui->setupUi(this);
}

salesPitch::~salesPitch()
{
    delete ui;
}
