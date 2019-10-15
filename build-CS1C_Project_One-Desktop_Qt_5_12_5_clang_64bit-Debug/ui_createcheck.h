/********************************************************************************
** Form generated from reading UI file 'createcheck.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECHECK_H
#define UI_CREATECHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_CreateCheck
{
public:
    QGroupBox *groupBox;
    QRadioButton *ownerRadio;
    QRadioButton *customerRadio;
    QRadioButton *employeeRadio;
    QPushButton *typeConfirm;
    QLabel *label;

    void setupUi(QDialog *CreateCheck)
    {
        if (CreateCheck->objectName().isEmpty())
            CreateCheck->setObjectName(QString::fromUtf8("CreateCheck"));
        CreateCheck->resize(400, 179);
        groupBox = new QGroupBox(CreateCheck);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 60, 381, 80));
        ownerRadio = new QRadioButton(groupBox);
        ownerRadio->setObjectName(QString::fromUtf8("ownerRadio"));
        ownerRadio->setGeometry(QRect(10, 30, 100, 20));
        customerRadio = new QRadioButton(groupBox);
        customerRadio->setObjectName(QString::fromUtf8("customerRadio"));
        customerRadio->setGeometry(QRect(130, 30, 100, 20));
        employeeRadio = new QRadioButton(groupBox);
        employeeRadio->setObjectName(QString::fromUtf8("employeeRadio"));
        employeeRadio->setGeometry(QRect(270, 30, 100, 20));
        typeConfirm = new QPushButton(CreateCheck);
        typeConfirm->setObjectName(QString::fromUtf8("typeConfirm"));
        typeConfirm->setGeometry(QRect(10, 140, 381, 32));
        label = new QLabel(CreateCheck);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 361, 41));

        retranslateUi(CreateCheck);

        QMetaObject::connectSlotsByName(CreateCheck);
    } // setupUi

    void retranslateUi(QDialog *CreateCheck)
    {
        CreateCheck->setWindowTitle(QApplication::translate("CreateCheck", "Dialog", nullptr));
        groupBox->setTitle(QString());
        ownerRadio->setText(QApplication::translate("CreateCheck", "Owner", nullptr));
        customerRadio->setText(QApplication::translate("CreateCheck", "Customer", nullptr));
        employeeRadio->setText(QApplication::translate("CreateCheck", "Employee", nullptr));
        typeConfirm->setText(QApplication::translate("CreateCheck", "Confirm", nullptr));
        label->setText(QApplication::translate("CreateCheck", "<html><head/><body><p><span style=\" font-size:18pt;\">Please select what type of user you are:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateCheck: public Ui_CreateCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECHECK_H
