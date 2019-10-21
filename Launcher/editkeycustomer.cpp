#include "editkeycustomer.h"
#include "ui_editkeycustomer.h"

editKeyCustomer::editKeyCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editKeyCustomer)
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

editKeyCustomer::~editKeyCustomer()
{
    delete ui;
}

void editKeyCustomer::on_comboBox_currentIndexChanged(const QString &arg1)
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
            if(qry.value(11).toString()=="T")
                ui->keyLabel->setText("Key Customer");
            else
                ui->keyLabel->setText("Not a Key Customer");
        }
    }
}
