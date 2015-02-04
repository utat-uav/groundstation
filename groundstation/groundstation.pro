#-------------------------------------------------
#
# Project created by QtCreator 2014-10-08T18:50:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = groundstation
TEMPLATE = app

INCLUDEPATH += targetlist
DEPENDPATH += targetlist

SOURCES += main.cpp\
        mainwindow.cpp \
    mainpic/mainpicdisplay.cpp \
    mainpic/mainpicwidget.cpp \
    mainpic/target.cpp \
    mainpic/targetfilehandler.cpp \
    targetlist/targetlist.cpp \
    targetlist/targetlistitem.cpp \
    targetlist/targetmaker.cpp \
    targetlist/targlistmainwindow.cpp \

HEADERS  += mainwindow.h \
    mainpic/mainpicdisplay.h \
    mainpic/mainpicwidget.h \
    mainpic/target.h \
    mainpic/targetfilehandler.h \
    targetlist/targetlist.h \
    targetlist/targetlistitem.h \
    targetlist/targetmaker.h \
    targetlist/targlistmainwindow.h \
    targetlist/ui_targetmaker.h \
    targetlist/ui_targlistmainwindow.h \

FORMS    += mainwindow.ui \
    targetlist/targetmaker.ui \
    targetlist/targlistmainwindow.ui \
