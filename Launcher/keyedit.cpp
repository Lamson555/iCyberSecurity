#include "keyedit.h"
#include "ui_keyedit.h"
#include <QMessageBox>
#include <string>

keyEdit::keyEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::keyEdit)
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

keyEdit::~keyEdit()
{
    delete ui;
}
void keyEdit::on_comboBox_currentIndexChanged(const QString &arg1)
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

            if(qry.value(12).toString()=="Very Interested")
                ui->keyLabel_2->setText("Very Interested");
            else if(qry.value(12).toString()=="Somewhat Interested")
                ui->keyLabel_2->setText("Somewhat Interested");
            else if(qry.value(12).toString()=="Not Interested")
                ui->keyLabel_2->setText("Not Interested");
            else if(qry.value(12).toString()=="Never Call Again")
                ui->keyLabel_2->setText("Never Call Again");
            else
                ui->keyLabel_2->setText("No Rating");
        }
    }
}

void keyEdit::on_pushButton_clicked()
{
    QString user = ui->comboBox->currentText();
    QSqlQuery qry;
    QString key = ui->comboBox_2->currentText();
    if (key == "Key")
        key = "T";
    else
        key = "F";

    QString rating = ui->comboBox_3->currentText();
    if (rating == "Very Interested")
        rating = "Very Interested";
    else if (rating == "Somewhat Interested")
        rating = "Somewhat Interested";
    else if (rating == "Not Interested")
        rating = "Not Interested";
    else if (rating == "Never Call Again")
        rating = "Never Call Again";
    else
        rating = "No Rating";
    qry.prepare("update owner set Key = '"+key+"', rating = '"+rating+"' where userid = '"+user+"'");
    qry.exec();
    conn.connClose();
    QMessageBox::information(
    this,
    tr("Application Name"),
    tr("Edit to Key Customer Status Successful") );
    hide();
}

