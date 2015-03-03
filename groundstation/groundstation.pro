#-------------------------------------------------
#
# Project created by QtCreator 2014-10-08T18:50:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = groundstation
TEMPLATE = app

INCLUDEPATH += targetlist \
               backend
DEPENDPATH += targetlist \
              backend

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
    # targetlist-old/build-targetlist-Desktop_Qt_5_3_MinGW_32bit-Debug/debug/moc_mainwindow.cpp \
    # targetlist-old/build-targetlist-Desktop_Qt_5_3_MinGW_32bit-Debug/debug/moc_targetmaker.cpp \
    # targetlist-old/build-targetlist-Desktop_Qt_5_3_MinGW_32bit-Debug/debug/qrc_Resources.cpp \
    # targetlist-old/build-targetlist-Desktop_Qt_5_3_MSVC2010_OpenGL_32bit-Debug/debug/moc_mainwindow.cpp \
    # targetlist-old/build-targetlist-Desktop_Qt_5_3_MSVC2010_OpenGL_32bit-Debug/debug/moc_targetmaker.cpp \
    # targetlist-old/build-targetlist-Desktop_Qt_5_3_MSVC2010_OpenGL_32bit-Debug/debug/qrc_Resources.cpp \
    # targetlist-old/targetlist/main.cpp \
    # targetlist-old/targetlist/mainwindow.cpp \
    # targetlist-old/targetlist/target.cpp \
    # targetlist-old/targetlist/targetlist.cpp \
    # targetlist-old/targetlist/targetlistitem.cpp \
    # targetlist-old/targetlist/targetmaker.cpp \
    backend/target.cpp \
    backend/image.cpp

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
    # targetlist-old/build-targetlist-Desktop_Qt_5_3_MinGW_32bit-Debug/ui_mainwindow.h \
    # targetlist-old/build-targetlist-Desktop_Qt_5_3_MinGW_32bit-Debug/ui_targetmaker.h \
    # targetlist-old/build-targetlist-Desktop_Qt_5_3_MSVC2010_OpenGL_32bit-Debug/ui_mainwindow.h \
    # targetlist-old/build-targetlist-Desktop_Qt_5_3_MSVC2010_OpenGL_32bit-Debug/ui_targetmaker.h \
    # targetlist-old/targetlist/mainwindow.h \
    # targetlist-old/targetlist/target.h \
    # targetlist-old/targetlist/targetlist.h \
    # targetlist-old/targetlist/targetlistitem.h \
    # targetlist-old/targetlist/targetmaker.h \
    backend/target.h \
    backend/image.h \
    backend/backend.h

FORMS    += mainwindow.ui \
    targetlist/targetmaker.ui \
    targetlist/targlistmainwindow.ui \
