#-------------------------------------------------
#
# Project created by QtCreator 2015-01-13T17:26:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gui
TEMPLATE = app

DEPENDPATH += targetlist \
            backend
INCLUDEPATH += targetlist \
            backend

RESOURCES += \
    targetlist/Resources.qrc

OTHER_FILES += \
    Makefile

FORMS += \
    mainwindow.ui \
    targetlist/targetmaker.ui \
    targetlist/targlistmainwindow.ui

HEADERS += \
    mainwindow.h \
    targetlist/targetlist.h \
    targetlist/targetlistitem.h \
    targetlist/targetmaker.h \
    targetlist/targlistlib_global.h \
    targetlist/targlistmainwindow.h \
    targetlist/ui_targetmaker.h \
    targetlist/ui_targlistmainwindow.h \
    backend/targlistdata.h \
    backend/target.h

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    targetlist/targetlist.cpp \
    targetlist/targetlistitem.cpp \
    targetlist/targetmaker.cpp \
    targetlist/targlistmainwindow.cpp \
    backend/targlistdata.cpp \
    backend/target.cpp

