QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountconfirm.cpp \
    basicedit.cpp \
    contactus.cpp \
    createcheck.cpp \
    customercreate.cpp \
    customerfirst.cpp \
    customerlogin.cpp \
    deletecustomer.cpp \
    employeecreate.cpp \
    employeedata.cpp \
    employeedelete.cpp \
    employeeedit.cpp \
    guarantee.cpp \
    help.cpp \
    keyedit.cpp \
    main.cpp \
    mainwindow.cpp \
    operations.cpp \
    ownercreate.cpp \
    salespitch.cpp \
    secadminlogin.cpp \
    services.cpp \
    supportedsoftware.cpp \
    testimonial.cpp \
    userdata.cpp \
    viewdatabase.cpp

HEADERS += \
    accountconfirm.h \
    basicedit.h \
    contactus.h \
    createcheck.h \
    customercreate.h \
    customerfirst.h \
    customerlogin.h \
    deletecustomer.h \
    employeecreate.h \
    employeedata.h \
    employeedelete.h \
    employeeedit.h \
    guarantee.h \
    help.h \
    keyedit.h \
    mainwindow.h \
    operations.h \
    ownercreate.h \
    salespitch.h \
    secadminlogin.h \
    services.h \
    supportedsoftware.h \
    testimonial.h \
    userdata.h \
    viewdatabase.h

FORMS += \
    accountconfirm.ui \
    basicedit.ui \
    contactus.ui \
    createcheck.ui \
    customercreate.ui \
    customerfirst.ui \
    customerlogin.ui \
    deletecustomer.ui \
    employeecreate.ui \
    employeedata.ui \
    employeedelete.ui \
    employeeedit.ui \
    guarantee.ui \
    help.ui \
    keyedit.ui \
    mainwindow.ui \
    operations.ui \
    ownercreate.ui \
    salespitch.ui \
    secadminlogin.ui \
    services.ui \
    supportedsoftware.ui \
    testimonial.ui \
    viewdatabase.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
