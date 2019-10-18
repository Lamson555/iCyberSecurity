#include "viewdatabase.h"
#include "ui_viewdatabase.h"

viewDatabase::viewDatabase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewDatabase)
{
    ui->setupUi(this);
}

viewDatabase::~viewDatabase()
{
    delete ui;
}

void viewDatabase::on_loadDatabase_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("Select Last, first, email, phone, secureEmailGateway, dataEncryption, serverSecurity from customer where rank = '3' order by last ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
}
