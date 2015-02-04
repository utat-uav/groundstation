#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>

#include "mainpic/mainpicwidget.h"
#include "mainpic/targetfilehandler.h"

#include <QtCore>
#include "targlistmainwindow.h"
#include "ui_targlistmainwindow.h"

using namespace std;
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

public slots:
    //void resizeEvent(QResizeEvent *event);

private:
    Ui::MainWindow *ui;
    QTabWidget* tabWindow;

    MainPicWidget* mainPic;

    TargListMainWindow* targetList;
    QMenuBar* targetListMenu;
};

#endif // MAINWINDOW_H
