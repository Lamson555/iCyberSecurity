/********************************************************************************
** Form generated from reading UI file 'employeecreate.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEECREATE_H
#define UI_EMPLOYEECREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_EmployeeCreate
{
public:
    QPushButton *pushButton;
    QPushButton *pushConfirm;
    QLabel *label_6;
    QTextEdit *passConText;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_2;
    QTextEdit *passText;
    QLabel *label_3;
    QLabel *label_11;
    QTextEdit *emailText;
    QLabel *label_8;
    QTextEdit *phoneText;
    QTextEdit *userText;
    QTextEdit *firstText;
    QTextEdit *lastText;
    QLabel *label_10;

    void setupUi(QDialog *EmployeeCreate)
    {
        if (EmployeeCreate->objectName().isEmpty())
            EmployeeCreate->setObjectName(QString::fromUtf8("EmployeeCreate"));
        EmployeeCreate->resize(800, 600);
        pushButton = new QPushButton(EmployeeCreate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 540, 191, 32));
        pushConfirm = new QPushButton(EmployeeCreate);
        pushConfirm->setObjectName(QString::fromUtf8("pushConfirm"));
        pushConfirm->setGeometry(QRect(30, 540, 191, 32));
        label_6 = new QLabel(EmployeeCreate);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 140, 91, 16));
        passConText = new QTextEdit(EmployeeCreate);
        passConText->setObjectName(QString::fromUtf8("passConText"));
        passConText->setGeometry(QRect(170, 500, 181, 21));
        label_9 = new QLabel(EmployeeCreate);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 420, 151, 16));
        label_4 = new QLabel(EmployeeCreate);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 220, 91, 16));
        label_7 = new QLabel(EmployeeCreate);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 100, 191, 31));
        label_5 = new QLabel(EmployeeCreate);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 260, 111, 16));
        label_2 = new QLabel(EmployeeCreate);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 401, 61));
        passText = new QTextEdit(EmployeeCreate);
        passText->setObjectName(QString::fromUtf8("passText"));
        passText->setGeometry(QRect(170, 460, 181, 21));
        label_3 = new QLabel(EmployeeCreate);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 180, 91, 16));
        label_11 = new QLabel(EmployeeCreate);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 500, 131, 16));
        emailText = new QTextEdit(EmployeeCreate);
        emailText->setObjectName(QString::fromUtf8("emailText"));
        emailText->setGeometry(QRect(160, 220, 261, 21));
        label_8 = new QLabel(EmployeeCreate);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 370, 191, 31));
        phoneText = new QTextEdit(EmployeeCreate);
        phoneText->setObjectName(QString::fromUtf8("phoneText"));
        phoneText->setGeometry(QRect(160, 260, 261, 21));
        userText = new QTextEdit(EmployeeCreate);
        userText->setObjectName(QString::fromUtf8("userText"));
        userText->setGeometry(QRect(170, 420, 181, 21));
        firstText = new QTextEdit(EmployeeCreate);
        firstText->setObjectName(QString::fromUtf8("firstText"));
        firstText->setGeometry(QRect(160, 140, 261, 21));
        lastText = new QTextEdit(EmployeeCreate);
        lastText->setObjectName(QString::fromUtf8("lastText"));
        lastText->setGeometry(QRect(160, 180, 261, 21));
        label_10 = new QLabel(EmployeeCreate);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 460, 151, 16));

        retranslateUi(EmployeeCreate);

        QMetaObject::connectSlotsByName(EmployeeCreate);
    } // setupUi

    void retranslateUi(QDialog *EmployeeCreate)
    {
        EmployeeCreate->setWindowTitle(QApplication::translate("EmployeeCreate", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("EmployeeCreate", "Return to Login page", nullptr));
        pushConfirm->setText(QApplication::translate("EmployeeCreate", "Confirm", nullptr));
        label_6->setText(QApplication::translate("EmployeeCreate", "First Name:", nullptr));
        label_9->setText(QApplication::translate("EmployeeCreate", "User ID:", nullptr));
        label_4->setText(QApplication::translate("EmployeeCreate", "Email:", nullptr));
        label_7->setText(QApplication::translate("EmployeeCreate", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; text-decoration: underline;\">Personal Information:</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("EmployeeCreate", "Phone Number:", nullptr));
        label_2->setText(QApplication::translate("EmployeeCreate", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; text-decoration: underline;\">Employee Account Creation:</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("EmployeeCreate", "Last Name:", nullptr));
        label_11->setText(QApplication::translate("EmployeeCreate", "Confirm Password:", nullptr));
        label_8->setText(QApplication::translate("EmployeeCreate", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; text-decoration: underline;\">Login Information:</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("EmployeeCreate", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeCreate: public Ui_EmployeeCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEECREATE_H
