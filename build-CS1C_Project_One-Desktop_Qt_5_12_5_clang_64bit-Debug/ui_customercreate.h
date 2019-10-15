/********************************************************************************
** Form generated from reading UI file 'customercreate.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERCREATE_H
#define UI_CUSTOMERCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_customerCreate
{
public:
    QPushButton *pushButton;
    QTextEdit *emailText;
    QTextEdit *passText;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_4;
    QPushButton *pushConfirm;
    QTextEdit *lastText;
    QTextEdit *passConText;
    QLabel *label_9;
    QTextEdit *firstText;
    QTextEdit *userText;
    QTextEdit *phoneText;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *Status2;

    void setupUi(QDialog *customerCreate)
    {
        if (customerCreate->objectName().isEmpty())
            customerCreate->setObjectName(QString::fromUtf8("customerCreate"));
        customerCreate->resize(800, 600);
        pushButton = new QPushButton(customerCreate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 550, 191, 32));
        emailText = new QTextEdit(customerCreate);
        emailText->setObjectName(QString::fromUtf8("emailText"));
        emailText->setGeometry(QRect(180, 210, 261, 21));
        passText = new QTextEdit(customerCreate);
        passText->setObjectName(QString::fromUtf8("passText"));
        passText->setGeometry(QRect(190, 450, 181, 21));
        label_3 = new QLabel(customerCreate);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 170, 91, 16));
        label_2 = new QLabel(customerCreate);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 10, 401, 61));
        label_7 = new QLabel(customerCreate);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 90, 191, 31));
        label_5 = new QLabel(customerCreate);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 250, 111, 16));
        label_8 = new QLabel(customerCreate);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 360, 191, 31));
        label_11 = new QLabel(customerCreate);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(60, 490, 131, 16));
        label_4 = new QLabel(customerCreate);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 210, 91, 16));
        pushConfirm = new QPushButton(customerCreate);
        pushConfirm->setObjectName(QString::fromUtf8("pushConfirm"));
        pushConfirm->setGeometry(QRect(50, 550, 191, 32));
        lastText = new QTextEdit(customerCreate);
        lastText->setObjectName(QString::fromUtf8("lastText"));
        lastText->setGeometry(QRect(180, 170, 261, 21));
        passConText = new QTextEdit(customerCreate);
        passConText->setObjectName(QString::fromUtf8("passConText"));
        passConText->setGeometry(QRect(190, 490, 181, 21));
        label_9 = new QLabel(customerCreate);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 410, 151, 16));
        firstText = new QTextEdit(customerCreate);
        firstText->setObjectName(QString::fromUtf8("firstText"));
        firstText->setGeometry(QRect(180, 130, 261, 21));
        userText = new QTextEdit(customerCreate);
        userText->setObjectName(QString::fromUtf8("userText"));
        userText->setGeometry(QRect(190, 410, 181, 21));
        phoneText = new QTextEdit(customerCreate);
        phoneText->setObjectName(QString::fromUtf8("phoneText"));
        phoneText->setGeometry(QRect(180, 250, 261, 21));
        label_10 = new QLabel(customerCreate);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 450, 151, 16));
        label_6 = new QLabel(customerCreate);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 130, 91, 16));
        Status2 = new QLabel(customerCreate);
        Status2->setObjectName(QString::fromUtf8("Status2"));
        Status2->setGeometry(QRect(600, 580, 171, 21));

        retranslateUi(customerCreate);

        QMetaObject::connectSlotsByName(customerCreate);
    } // setupUi

    void retranslateUi(QDialog *customerCreate)
    {
        customerCreate->setWindowTitle(QApplication::translate("customerCreate", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("customerCreate", "Return to Login page", nullptr));
        label_3->setText(QApplication::translate("customerCreate", "Last Name:", nullptr));
        label_2->setText(QApplication::translate("customerCreate", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; text-decoration: underline;\">Customer Account Creation:</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("customerCreate", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; text-decoration: underline;\">Personal Information:</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("customerCreate", "Phone Number:", nullptr));
        label_8->setText(QApplication::translate("customerCreate", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; text-decoration: underline;\">Login Information:</span></p></body></html>", nullptr));
        label_11->setText(QApplication::translate("customerCreate", "Confirm Password:", nullptr));
        label_4->setText(QApplication::translate("customerCreate", "Email:", nullptr));
        pushConfirm->setText(QApplication::translate("customerCreate", "Confirm", nullptr));
        label_9->setText(QApplication::translate("customerCreate", "User ID:", nullptr));
        label_10->setText(QApplication::translate("customerCreate", "Password:", nullptr));
        label_6->setText(QApplication::translate("customerCreate", "First Name:", nullptr));
        Status2->setText(QApplication::translate("customerCreate", "[+]Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customerCreate: public Ui_customerCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERCREATE_H
