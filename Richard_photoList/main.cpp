#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <stdio.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QDesktopWidget dw;
    int x=dw.width()*0.9;
    int y=dw.height()*0.9;
    w.setFixedSize(x,y);
    w.show();

    return a.exec();
}
