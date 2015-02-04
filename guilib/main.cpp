#include "mainwindow.h"
#include "targlistmainwindow.h"
#include <QApplication>
#include <QtGui>

// This file no longer does anything, hopefully?

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow container;
    container.show();

    return a.exec();
}
