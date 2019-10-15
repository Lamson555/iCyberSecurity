/********************************************************************************
** Form generated from reading UI file 'accountconfirm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTCONFIRM_H
#define UI_ACCOUNTCONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_accountConfirm
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *accountConfirm)
    {
        if (accountConfirm->objectName().isEmpty())
            accountConfirm->setObjectName(QString::fromUtf8("accountConfirm"));
        accountConfirm->resize(400, 179);
        label = new QLabel(accountConfirm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 221, 31));
        label_2 = new QLabel(accountConfirm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 371, 61));
        pushButton = new QPushButton(accountConfirm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 140, 191, 32));

        retranslateUi(accountConfirm);

        QMetaObject::connectSlotsByName(accountConfirm);
    } // setupUi

    void retranslateUi(QDialog *accountConfirm)
    {
        accountConfirm->setWindowTitle(QApplication::translate("accountConfirm", "Dialog", nullptr));
        label->setText(QApplication::translate("accountConfirm", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; text-decoration: underline;\">SUCCESS</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("accountConfirm", "<html><head/><body><p align=\"center\">Your account with iCyberSecurity Inc. has been successfully</p><p align=\"center\">created. Please return to the Login Screen to begin.</p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("accountConfirm", "Return to Login page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accountConfirm: public Ui_accountConfirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTCONFIRM_H
