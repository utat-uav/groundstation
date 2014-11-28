#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QDesktopWidget dw;
    int x=dw.width()*0.8;
    int y=dw.height()*0.8;
    w.setFixedSize(x,y);
    w.show();

    return a.exec();
}
