#include "guarantee.h"
#include "ui_guarantee.h"

guarantee::guarantee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guarantee)
{
    ui->setupUi(this);
}

guarantee::~guarantee()
{
    delete ui;
}
