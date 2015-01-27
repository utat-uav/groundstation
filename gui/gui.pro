#-------------------------------------------------
#
# Project created by QtCreator 2015-01-13T17:26:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gui
TEMPLATE = app

SOURCES += main.cpp \
    mainwindow.cpp \
    ../guilib/main.cpp \
    ../guilib/mainwindow.cpp \
    ../guilib/target.cpp \
    ../guilib/targetlist.cpp \
    ../guilib/targetlistitem.cpp \
    ../guilib/targetmaker.cpp \
    ../guilib/targlistmainwindow.cpp

HEADERS  += \
    mainwindow.h \
    ../guilib/mainwindow.h \
    ../guilib/target.h \
    ../guilib/targetlist.h \
    ../guilib/targetlistitem.h \
    ../guilib/targetmaker.h \
    ../guilib/targlistlib_global.h \
    ../guilib/targlistmainwindow.h \
    ../guilib/ui_targetmaker.h \
    ../guilib/ui_targlistmainwindow.h


FORMS    += mainwindow.ui \
    ../guilib/mainwindow.ui \
    ../guilib/targetmaker.ui \
    ../guilib/targlistmainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../targetlist/release/ -ltargetlist
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../targetlist/debug/ -ltargetlist
else:unix: LIBS += -L$$OUT_PWD/../targetlist/ -ltargetlist

INCLUDEPATH += $$PWD/../targetlist
DEPENDPATH += $$PWD/../targetlist

RESOURCES += \
    ../guilib/Resources.qrc

OTHER_FILES += \
    ../guilib/Makefile

