/********************************************************************************
** Form generated from reading UI file 'seclogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECLOGIN_H
#define UI_SECLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecLogin
{
public:
    QLabel *label;
    QPushButton *backLogin;

    void setupUi(QDialog *SecLogin)
    {
        if (SecLogin->objectName().isEmpty())
            SecLogin->setObjectName(QString::fromUtf8("SecLogin"));
        SecLogin->resize(800, 600);
        label = new QLabel(SecLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 20, 211, 61));
        backLogin = new QPushButton(SecLogin);
        backLogin->setObjectName(QString::fromUtf8("backLogin"));
        backLogin->setGeometry(QRect(10, 550, 161, 32));

        retranslateUi(SecLogin);
        QObject::connect(backLogin, SIGNAL(clicked()), SecLogin, SLOT(buttonBackLogin()));

        QMetaObject::connectSlotsByName(SecLogin);
    } // setupUi

    void retranslateUi(QDialog *SecLogin)
    {
        SecLogin->setWindowTitle(QApplication::translate("SecLogin", "Dialog", nullptr));
        label->setText(QApplication::translate("SecLogin", "UPON LOGIN YOU WILL BE HERE", nullptr));
        backLogin->setText(QApplication::translate("SecLogin", "Back To Login Screen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecLogin: public Ui_SecLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECLOGIN_H
