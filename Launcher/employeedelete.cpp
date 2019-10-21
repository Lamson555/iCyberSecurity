#include "employeedelete.h"
#include "ui_employeedelete.h"
#include <QMessageBox>

employeeDelete::employeeDelete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employeeDelete)
{
    ui->setupUi(this);
    conn.connOpen();
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("Select userid from owner where rank = '1' order by last ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->comboBox->setModel(modal);
}

employeeDelete::~employeeDelete()
{
    delete ui;
}

void employeeDelete::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString user= ui->comboBox->currentText();
    QSqlQuery qry;
    qry.prepare("select * from owner where userid ='"+user+"' and rank ='1'");
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

void employeeDelete::on_pushButton_clicked()
{
    QString user = ui->comboBox->currentText();
    QSqlQuery qry;
    qry.prepare("delete from owner where userid = '"+user+"'");
    qry.exec();
    conn.close();
    QMessageBox::information(
    this,
    tr("Application Name"),
    tr("Employee has been Deleted from the Database!") );
    hide();
}
