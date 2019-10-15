/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushLogin;
    QPushButton *pushClear;
    QLineEdit *linePassword;
    QLineEdit *lineUser;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushContact;
    QPushButton *buttonCreate;
    QGroupBox *groupBox;
    QLabel *Logo;
    QPushButton *pushContact_2;
    QLabel *Status;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushLogin = new QPushButton(centralwidget);
        pushLogin->setObjectName(QString::fromUtf8("pushLogin"));
        pushLogin->setGeometry(QRect(270, 390, 113, 32));
        pushClear = new QPushButton(centralwidget);
        pushClear->setObjectName(QString::fromUtf8("pushClear"));
        pushClear->setGeometry(QRect(440, 390, 113, 32));
        linePassword = new QLineEdit(centralwidget);
        linePassword->setObjectName(QString::fromUtf8("linePassword"));
        linePassword->setGeometry(QRect(280, 360, 261, 21));
        linePassword->setEchoMode(QLineEdit::Password);
        lineUser = new QLineEdit(centralwidget);
        lineUser->setObjectName(QString::fromUtf8("lineUser"));
        lineUser->setGeometry(QRect(280, 330, 261, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 330, 71, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 360, 59, 16));
        pushContact = new QPushButton(centralwidget);
        pushContact->setObjectName(QString::fromUtf8("pushContact"));
        pushContact->setGeometry(QRect(670, 510, 113, 32));
        buttonCreate = new QPushButton(centralwidget);
        buttonCreate->setObjectName(QString::fromUtf8("buttonCreate"));
        buttonCreate->setGeometry(QRect(270, 420, 281, 32));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 290, 401, 201));
        Logo = new QLabel(centralwidget);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(280, 80, 221, 191));
        Logo->setAlignment(Qt::AlignCenter);
        pushContact_2 = new QPushButton(centralwidget);
        pushContact_2->setObjectName(QString::fromUtf8("pushContact_2"));
        pushContact_2->setGeometry(QRect(20, 510, 113, 32));
        Status = new QLabel(centralwidget);
        Status->setObjectName(QString::fromUtf8("Status"));
        Status->setGeometry(QRect(0, 540, 171, 21));
        MainWindow->setCentralWidget(centralwidget);
        groupBox->raise();
        pushLogin->raise();
        pushClear->raise();
        linePassword->raise();
        lineUser->raise();
        label->raise();
        label_2->raise();
        pushContact->raise();
        buttonCreate->raise();
        Logo->raise();
        pushContact_2->raise();
        Status->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushClear, SIGNAL(clicked()), MainWindow, SLOT(buttonClickHandler()));
        QObject::connect(pushContact, SIGNAL(clicked()), MainWindow, SLOT(buttonContact()));
        QObject::connect(pushLogin, SIGNAL(clicked()), MainWindow, SLOT(buttonLogin()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushLogin->setText(QApplication::translate("MainWindow", "Login", nullptr));
        pushClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        label->setText(QApplication::translate("MainWindow", "Username", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        pushContact->setText(QApplication::translate("MainWindow", "Contact Us", nullptr));
        buttonCreate->setText(QApplication::translate("MainWindow", "Create Account", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Sign In", nullptr));
        Logo->setText(QString());
        pushContact_2->setText(QApplication::translate("MainWindow", "Supported", nullptr));
        Status->setText(QApplication::translate("MainWindow", "[+]Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
