#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainpic/mainpicwidget.h"
#include <QResizeEvent>

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
    void resizeEvent(QResizeEvent *event);

private:
    Ui::MainWindow *ui;
    MainPicWidget* mainPic;
};

#endif // MAINWINDOW_H
