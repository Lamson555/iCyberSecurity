#include "contactus.h"
#include "ui_contactus.h"

contactUs::contactUs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::contactUs)
{
    ui->setupUi(this);
}

contactUs::~contactUs()
{
    delete ui;
}
