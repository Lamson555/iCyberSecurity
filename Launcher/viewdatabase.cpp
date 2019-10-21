#include "viewdatabase.h"
#include "ui_viewdatabase.h"
#include "keyedit.h"
#include "basicedit.h"
#include "customercreate.h"
#include "deletecustomer.h"

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

    qry->prepare("Select Last, first, email, phone, rating, secureEmailGateway,dataEncryption, serverSecurity from owner where rank = '3' order by last ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
}

void viewDatabase::on_loadDatabase_2_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    QString key = "KEY CUSTOMER";
    qry->prepare("Select Last, first, email, phone from owner where key = 'T'  order by last ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
}

void viewDatabase::on_loadDatabase_3_clicked()
{
    keyEdit editKey;
    editKey.setModal(true);
    editKey.exec();
}

void viewDatabase::on_loadDatabase_4_clicked()
{
    basicEdit basicEdit;
    basicEdit.setModal(true);
    basicEdit.exec();
}

void viewDatabase::on_loadDatabase_5_clicked()
{
    customerCreate customer;
    customer.setModal(true);
    customer.exec();
}

void viewDatabase::on_loadDatabase_6_clicked()
{
    deleteCustomer del;
    del.setModal(true);
    del.exec();
}
