#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>
#include "imagewidget.h"
#include <QDebug>
#include <math.h>
#include <QItemSelectionModel>
#include <QModelIndexList>
#include <QtAlgorithms>

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
    void on_addItemButton_clicked();

    void on_deleteItemButton_clicked();

protected:
    void resizeEvent(QResizeEvent *e);
    void resizeTable();
    void addItem(QString filePath);
    void refreshTable();
    void setColumnCount(int col);

private:
    Ui::MainWindow *ui;
    QList<ImageWidget *> *items;
    int tableWidth;
    int cellHeight;
    int cellWidth;
    int rowCount;
    int colCount;
};

#endif // MAINWINDOW_H
