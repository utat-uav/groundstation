#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>

#include "mainpic/mainpicwidget.h"
#include "mainpic/targetfilehandler.h"

#include <QtCore>
#include <QMenuBar>
#include "targlistmainwindow.h"
#include "ui_targlistmainwindow.h"

#include "backend/image.h"
#include "backend/target.h"

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
    QTabWidget* tabWindow; // To hold EVERYTHING

    MainPicWidget* mainPic;
    TargListMainWindow* targetList; // Change naming?
    QMenuBar* mainMenu; // Possibly not even necessary

    QMap<QString, Image*> imaglist;
    QMap<QString, Target*> targlist;
};

#endif // MAINWINDOW_H
