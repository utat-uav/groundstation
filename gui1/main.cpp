#include "mainwindow.h"
#include <QApplication>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.resize(200, 500);
    w.show();
    w.setWindowTitle(
             QApplication::translate("toplevel", "Target List"));

    return a.exec();
}
