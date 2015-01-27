#include "mainwindow.h"
#include "targlistmainwindow.h"
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget* targetList = new QWidget;
    //Ui::TargetMaker tm;

    MainWindow w;
    TargListMainWindow l;
    w.show();

    delete targetList;
    return a.exec();
}

/*
//#include "../targetlist/targlistmainwindow.h"
//#include "../targetlist/targlistmainwindow.cpp"
#include <QApplication>
#include <QtGui>

// This file no longer does anything, hopefully?

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //TargListMainWindow w;
    w.resize(200, 500);
    w.show();
    w.setWindowTitle(
             QApplication::translate("toplevel", "Target List"));

    return a.exec();
}
*/
