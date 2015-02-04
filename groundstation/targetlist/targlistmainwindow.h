#ifndef TARGLISTMAINWINDOW_H
#define TARGLISTMAINWINDOW_H

#include <QMainWindow>
#include "targetmaker.h"
#include "targetlist.h"

namespace Ui {
class TargListMainWindow;
}

class TargListMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TargListMainWindow(QWidget *parent = 0);
    Ui::TargListMainWindow *ui;
    TargetList *targetList;
    int colCount;
    ~TargListMainWindow();

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

#endif // TARGLISTMAINWINDOW_H
