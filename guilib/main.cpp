#include "mainwindow.h"
#include "targlistmainwindow.h"
#include <QApplication>
#include <QtGui>

// This file no longer does anything, hopefully?

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow container;
    //w.resize(200, 500);
    container.show();
    container.setWindowTitle("MAIN");
    //w.setWindowTitle(QApplication::translate("toplevel", "Target List"));

    return a.exec();
}
