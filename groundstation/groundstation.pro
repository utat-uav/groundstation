#-------------------------------------------------
#
# Project created by QtCreator 2014-10-08T18:50:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = groundstation
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainpic/mainpicdisplay.cpp \
    mainpic/mainpicwidget.cpp

HEADERS  += mainwindow.h \
    mainpic/mainpicdisplay.h \
    mainpic/mainpicwidget.h

FORMS    += mainwindow.ui
