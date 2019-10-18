#include "employeedata.h"
#include "ui_employeedata.h"

employeeData::employeeData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employeeData)
{
    ui->setupUi(this);
}

employeeData::~employeeData()
{
    delete ui;
}

void employeeData::on_loadDatabase_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("Select first, last, email, phone from owner where rank = '1'");

    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
}
