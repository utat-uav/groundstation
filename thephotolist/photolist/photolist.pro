#-------------------------------------------------
#
# Project created by QtCreator 2015-02-25T18:50:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = photolist
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imagewidget.cpp \
    itemmaker.cpp

HEADERS  += mainwindow.h \
    imagewidget.h \
    itemmaker.h

FORMS    += mainwindow.ui \
    imagewidget.ui \
    itemmaker.ui

RESOURCES += \
    resources.qrc
