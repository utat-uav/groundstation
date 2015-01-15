#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "targetmaker.h"
#include "targetlist.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    Ui::MainWindow *ui;
    TargetList *targetList;
    int colCount;
    ~MainWindow();

private slots:
    void on_newItem_clicked();

    void on_deleteButton_clicked();

    void on_edit_clicked();

    void on_upButton_clicked();

    void on_downButton_clicked();

    void sort(int col);

private:
    TargetMaker *targetMaker;
    TargetMaker *targetEditor;
};

#endif // MAINWINDOW_H
