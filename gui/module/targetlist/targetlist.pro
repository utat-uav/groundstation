#-------------------------------------------------
#
# Project created by QtCreator 2014-11-05T19:15:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = targetlist
TEMPLATE = lib

CONFIG += staticlibx

SOURCES += main.cpp \
    targetmaker.cpp \
    targetlist.cpp \
    targetlistitem.cpp \
    targlistmainwindow.cpp

HEADERS  += \
    targetmaker.h \
    targetlist.h \
    targetlistitem.h \
    targlistmainwindow.h \
    targlistlib_global.h

FORMS    += \
    targetmaker.ui \
    targlistmainwindow.ui

RESOURCES += \
    Resources.qrc
