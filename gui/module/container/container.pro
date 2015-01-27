#-------------------------------------------------
#
# Project created by QtCreator 2015-01-15T16:23:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = container
TEMPLATE = app

DEFINES += TARGLISTLIB

SOURCES += main.cpp \
    mainwindow.cpp

HEADERS  += \
    mainwindow.h


FORMS    += mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../targetlist/release/ -ltargetlist
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../targetlist/debug/ -ltargetlist
else:unix: LIBS += -L$$OUT_PWD/../targetlist/ -ltargetlist

INCLUDEPATH += $$PWD/../targetlist
DEPENDPATH += $$PWD/../targetlist
