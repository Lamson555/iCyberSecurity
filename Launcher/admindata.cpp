#include "admindata.h"
#include "ui_admindata.h"

adminData::adminData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminData)
{
    ui->setupUi(this);
}

adminData::~adminData()
{
    delete ui;
}

void adminData::on_loadDatabase_clicked()
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
