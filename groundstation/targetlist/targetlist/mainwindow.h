#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "targetmaker.h"

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
    void on_newItem_clicked();

private:
    Ui::MainWindow *ui;
    TargetMaker *targetMaker;
};

#endif // MAINWINDOW_H
