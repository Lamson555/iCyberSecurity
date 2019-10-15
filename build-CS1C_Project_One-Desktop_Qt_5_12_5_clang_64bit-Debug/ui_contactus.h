/********************************************************************************
** Form generated from reading UI file 'contactus.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTUS_H
#define UI_CONTACTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_contactUs
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *contactUs)
    {
        if (contactUs->objectName().isEmpty())
            contactUs->setObjectName(QString::fromUtf8("contactUs"));
        contactUs->resize(542, 449);
        label = new QLabel(contactUs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 20, 211, 91));
        label->setLineWidth(0);
        label->setMidLineWidth(0);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(contactUs);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 120, 521, 311));

        retranslateUi(contactUs);

        QMetaObject::connectSlotsByName(contactUs);
    } // setupUi

    void retranslateUi(QDialog *contactUs)
    {
        contactUs->setWindowTitle(QApplication::translate("contactUs", "Dialog", nullptr));
        label->setText(QApplication::translate("contactUs", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">iCyberSecurity Inc.</span></p><p align=\"center\"><span style=\" font-size:18pt;\">Conact Us</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("contactUs", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Phone:</span></p><p align=\"center\"><span style=\" font-size:10pt;\">916-553-5175</span></p><p align=\"center\"><span style=\" font-size:10pt;\">Email:</span></p><p align=\"center\"><span style=\" font-size:10pt;\">conact@icybersecurity.net</span></p><p align=\"center\"><span style=\" font-size:10pt;\">Address:</span></p><p align=\"center\"><span style=\" font-size:10pt;\">2468 Highland View Drive, Sacramento, CA, 95814</span></p><p align=\"center\"><span style=\" font-size:10pt;\">Hours of Operation:</span></p><p align=\"center\"><span style=\" font-size:10pt;\">Monday: 8AM- 6PM</span></p><p align=\"center\"><span style=\" font-size:10pt;\">Tuesday: 8AM- 6PM</span></p><p align=\"center\"><span style=\" font-size:10pt;\">Wednesday: 8AM- 6PM</span></p><p align=\"center\"><span style=\" font-size:10pt;\">Thurdsday 8AM- 6PM</span></p><p align=\"center\"><span style=\" font-size:10pt;\">Friday: 8AM- 6PM</span></p><p align=\"center\"><span sty"
                        "le=\" font-size:10pt;\">Closed Saturday and Sunday</span></p><p align=\"center\"><span style=\" font-size:10pt;\"><br/></span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contactUs: public Ui_contactUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTUS_H
