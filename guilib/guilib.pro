#-------------------------------------------------
#
# Project created by QtCreator 2015-01-13T17:26:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gui
TEMPLATE = app

RESOURCES += \
    ../guilib/Resources.qrc

OTHER_FILES += \
    ../guilib/Makefile

FORMS += \
    mainwindow.ui \
    targetmaker.ui \
    targlistmainwindow.ui

HEADERS += \
    mainwindow.h \
    target.h \
    targetlist.h \
    targetlistitem.h \
    targetmaker.h \
    targlistlib_global.h \
    targlistmainwindow.h \
    ui_targetmaker.h \
    ui_targlistmainwindow.h

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    target.cpp \
    targetlist.cpp \
    targetlistitem.cpp \
    targetmaker.cpp \
    targlistmainwindow.cpp

