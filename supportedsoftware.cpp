#include "supportedsoftware.h"
#include "ui_supportedsoftware.h"

supportedSoftware::supportedSoftware(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supportedSoftware)
{
    ui->setupUi(this);
}

supportedSoftware::~supportedSoftware()
{
    delete ui;
}
