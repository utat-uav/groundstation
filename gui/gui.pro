#-------------------------------------------------
#
# Project created by QtCreator 2015-01-13T17:26:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gui
TEMPLATE = subdirs
SUBDIRS += module/targetlist/targetlist.pro \
    module/container

# DEPENDPATH += module/targetlist
# INCLUDEPATH += module/targetlist

# include (module/targetlist/targetlist.pri)

# SOURCES += main.cpp \
#         mainwindow.cpp

# HEADERS  += mainwindow.h

# FORMS    += mainwindow.ui
