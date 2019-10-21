#include "operations.h"
#include "ui_operations.h"

operations::operations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::operations)
{
    ui->setupUi(this);
}

operations::~operations()
{
    delete ui;
}
