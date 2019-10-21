#include "deletecustomer.h"
#include "ui_deletecustomer.h"
#include <QMessageBox>

deleteCustomer::deleteCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteCustomer)
{
    ui->setupUi(this);
    conn.connOpen();
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("Select userid from owner where rank = '3' order by last ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->comboBox->setModel(modal);
}

deleteCustomer::~deleteCustomer()
{
    delete ui;
}

void deleteCustomer::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString user= ui->comboBox->currentText();
    QSqlQuery qry;
    qry.prepare("select * from owner where userid ='"+user+"' and rank ='3'");
    if (qry.exec())
    {
        while(qry.next())
        {
            ui->nameLabel->setText(qry.value(1).toString() +" "+qry.value(2).toString());
            ui->emailLabel->setText(qry.value(3).toString());
            ui->phoneLabel->setText(qry.value(4).toString());
        }
    }
}

void deleteCustomer::on_pushButton_clicked()
{
    QString user = ui->comboBox->currentText();
    QSqlQuery qry;
    qry.prepare("delete from owner where userid = '"+user+"'");
    qry.exec();
    conn.close();
    QMessageBox::information(
    this,
    tr("Application Name"),
    tr("Customer has been Deleted from the Database!") );
    hide();
}
