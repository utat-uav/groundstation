#-------------------------------------------------
#
# Project created by QtCreator 2014-11-23T00:49:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Richard_photoList
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mylabel.cpp

HEADERS  += mainwindow.h \
    mylabel.h

FORMS    += mainwindow.ui

QMAKE_MAC_SDK = macosx10.9
