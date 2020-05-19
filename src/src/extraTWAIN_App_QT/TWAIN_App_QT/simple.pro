#-------------------------------------------------
#
# Project created by QtCreator 2020-05-19T00:15:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = simple
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    TWAINSession.cpp \
    twain_app_qt.cpp \
    structureedit.cpp \
    setstate.cpp \
    meterdlg.cpp \
    main.cpp \
    extimageinfosel.cpp \
    enumset.cpp \
    ContainerWrapper.cpp

HEADERS += \
    TWAINSession.h \
    twain_app_qt.h \
    structureedit.h \
    setstate.h \
    meterdlg.h \
    extimageinfosel.h \
    enumset.h \
    ContainerWrapper.h

FORMS += \
    twain_app_qt.ui \
    structureedit.ui \
    setstate.ui \
    MeterDlg.ui \
    extimageinfosel.ui \
    enumset.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
