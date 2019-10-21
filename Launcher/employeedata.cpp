#include "employeedata.h"
#include "ui_employeedata.h"
#include "ownercreate.h"
#include "employeeedit.h"
#include "employeedelete.h"

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

    qry->prepare("Select last, first, email, phone from owner where rank = '1' order by last ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
}

void employeeData::on_loadDatabase_2_clicked()
{
    OwnerCreate owner;
    owner.setModal(true);
    owner.exec();
}

void employeeData::on_loadDatabase_3_clicked()
{
    employeeEdit employee;
    employee.setModal(true);
    employee.exec();
}

void employeeData::on_loadDatabase_4_clicked()
{
    employeeDelete del;
    del.setModal(true);
    del.exec();
}
