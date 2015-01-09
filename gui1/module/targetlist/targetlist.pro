#-------------------------------------------------
#
# Project created by QtCreator 2014-11-05T19:15:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = targetlist
TEMPLATE = app


SOURCES +=\
        mainwindow.cpp \
    targetmaker.cpp \
    targetlist.cpp \
    targetlistitem.cpp

HEADERS  += mainwindow.h \
    targetmaker.h \
    targetlist.h \
    targetlistitem.h

FORMS    += mainwindow.ui \
    targetmaker.ui

RESOURCES += \
    Resources.qrc
