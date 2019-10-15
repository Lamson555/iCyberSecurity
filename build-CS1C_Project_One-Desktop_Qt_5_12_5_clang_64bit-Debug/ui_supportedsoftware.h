/********************************************************************************
** Form generated from reading UI file 'supportedsoftware.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPORTEDSOFTWARE_H
#define UI_SUPPORTEDSOFTWARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_supportedSoftware
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *supportedSoftware)
    {
        if (supportedSoftware->objectName().isEmpty())
            supportedSoftware->setObjectName(QString::fromUtf8("supportedSoftware"));
        supportedSoftware->resize(542, 449);
        widget = new QWidget(supportedSoftware);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 20, 310, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        retranslateUi(supportedSoftware);

        QMetaObject::connectSlotsByName(supportedSoftware);
    } // setupUi

    void retranslateUi(QDialog *supportedSoftware)
    {
        supportedSoftware->setWindowTitle(QApplication::translate("supportedSoftware", "Dialog", nullptr));
        label->setText(QApplication::translate("supportedSoftware", "<html><head/><body><p><span style=\" font-size:36pt; text-decoration: underline;\">Supported Software</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("supportedSoftware", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Windows</span></p><p align=\"center\"><span style=\" font-size:18pt;\">MacOSX</span></p><p align=\"center\"><span style=\" font-size:18pt;\">Linux</span></p><p align=\"center\"><span style=\" font-size:18pt;\">Android</span></p><p align=\"center\"><span style=\" font-size:18pt;\">iOS</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class supportedSoftware: public Ui_supportedSoftware {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPORTEDSOFTWARE_H
