/********************************************************************************
** Form generated from reading UI file 'ownercreate.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNERCREATE_H
#define UI_OWNERCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_OwnerCreate
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *firstText;
    QTextEdit *lastText;
    QTextEdit *emailText;
    QTextEdit *businessText;
    QTextEdit *phoneText;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QTextEdit *passConText;
    QTextEdit *userText;
    QTextEdit *passText;
    QPushButton *pushButton_2;

    void setupUi(QDialog *OwnerCreate)
    {
        if (OwnerCreate->objectName().isEmpty())
            OwnerCreate->setObjectName(QString::fromUtf8("OwnerCreate"));
        OwnerCreate->resize(800, 600);
        label = new QLabel(OwnerCreate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 401, 61));
        pushButton = new QPushButton(OwnerCreate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 550, 191, 32));
        firstText = new QTextEdit(OwnerCreate);
        firstText->setObjectName(QString::fromUtf8("firstText"));
        firstText->setGeometry(QRect(150, 140, 261, 21));
        lastText = new QTextEdit(OwnerCreate);
        lastText->setObjectName(QString::fromUtf8("lastText"));
        lastText->setGeometry(QRect(150, 180, 261, 21));
        emailText = new QTextEdit(OwnerCreate);
        emailText->setObjectName(QString::fromUtf8("emailText"));
        emailText->setGeometry(QRect(150, 220, 261, 21));
        businessText = new QTextEdit(OwnerCreate);
        businessText->setObjectName(QString::fromUtf8("businessText"));
        businessText->setGeometry(QRect(150, 300, 261, 21));
        phoneText = new QTextEdit(OwnerCreate);
        phoneText->setObjectName(QString::fromUtf8("phoneText"));
        phoneText->setGeometry(QRect(150, 260, 261, 21));
        label_2 = new QLabel(OwnerCreate);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 140, 91, 16));
        label_3 = new QLabel(OwnerCreate);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 180, 91, 16));
        label_4 = new QLabel(OwnerCreate);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 220, 91, 16));
        label_5 = new QLabel(OwnerCreate);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 260, 111, 16));
        label_6 = new QLabel(OwnerCreate);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 300, 111, 16));
        label_7 = new QLabel(OwnerCreate);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 100, 191, 31));
        label_8 = new QLabel(OwnerCreate);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 370, 191, 31));
        label_9 = new QLabel(OwnerCreate);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 420, 151, 16));
        label_10 = new QLabel(OwnerCreate);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 460, 151, 16));
        label_11 = new QLabel(OwnerCreate);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 500, 131, 16));
        passConText = new QTextEdit(OwnerCreate);
        passConText->setObjectName(QString::fromUtf8("passConText"));
        passConText->setGeometry(QRect(160, 500, 181, 21));
        userText = new QTextEdit(OwnerCreate);
        userText->setObjectName(QString::fromUtf8("userText"));
        userText->setGeometry(QRect(160, 420, 181, 21));
        passText = new QTextEdit(OwnerCreate);
        passText->setObjectName(QString::fromUtf8("passText"));
        passText->setGeometry(QRect(160, 460, 181, 21));
        pushButton_2 = new QPushButton(OwnerCreate);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 550, 191, 32));

        retranslateUi(OwnerCreate);

        QMetaObject::connectSlotsByName(OwnerCreate);
    } // setupUi

    void retranslateUi(QDialog *OwnerCreate)
    {
        OwnerCreate->setWindowTitle(QApplication::translate("OwnerCreate", "Dialog", nullptr));
        label->setText(QApplication::translate("OwnerCreate", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; text-decoration: underline;\">Business Owner Account Creation:</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("OwnerCreate", "Return to Login page", nullptr));
        label_2->setText(QApplication::translate("OwnerCreate", "First Name:", nullptr));
        label_3->setText(QApplication::translate("OwnerCreate", "Last Name:", nullptr));
        label_4->setText(QApplication::translate("OwnerCreate", "Email:", nullptr));
        label_5->setText(QApplication::translate("OwnerCreate", "Phone Number:", nullptr));
        label_6->setText(QApplication::translate("OwnerCreate", "Business Name:", nullptr));
        label_7->setText(QApplication::translate("OwnerCreate", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; text-decoration: underline;\">Personal Information:</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("OwnerCreate", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; text-decoration: underline;\">Login Information:</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("OwnerCreate", "User ID:", nullptr));
        label_10->setText(QApplication::translate("OwnerCreate", "Password:", nullptr));
        label_11->setText(QApplication::translate("OwnerCreate", "Confirm Password:", nullptr));
        pushButton_2->setText(QApplication::translate("OwnerCreate", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OwnerCreate: public Ui_OwnerCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNERCREATE_H
