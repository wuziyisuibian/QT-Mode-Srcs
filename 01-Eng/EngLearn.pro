#-------------------------------------------------
#
# Project created by QtCreator 2020-07-26T16:15:07
#
#-------------------------------------------------

QT       += core gui serialport multimedia sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EngLearn
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
        mainwindow.cpp \
    SingletonData.cpp \
    Logic/ProcessingUint.cpp \
    Logic/ThreadObject.cpp \
    Logic/SoundManager.cpp \
    component/titlebar.cpp \
    mainwidget.cpp \
    UI/basepage.cpp \
    UI/homepage.cpp \
    component/buttonbase.cpp \
    UI/modeselectpage.cpp

HEADERS += \
        mainwindow.h \
    IncludeHeader.h \
    UI/BasePage.h \
    SingletonData.h \
    component/BoxLayout.h \
    Logic/ProcessingUint.h \
    Logic/ThreadObject.h \
    Logic/SoundManager.h \
    component/titlebar.h \
    mainwidget.h \
    UI/homepage.h \
    component/buttonbase.h \
    UI/modeselectpage.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    main.qrc
