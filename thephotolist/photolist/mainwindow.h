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
#include "itemmaker.h"
#include <QDirIterator>
#include <QtCore/QCoreApplication>

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

    void on_editButton_clicked();

    void on_loadButton_clicked();

protected:
    void resizeEvent(QResizeEvent *e);
    void resizeTable();
    void addItem(QString filePath);
    void appendItem(QString filePath, QString title);
    void refreshTable();
    void setColumnCount(int col);
    void indexToCoordinates(int index, int *r, int *c);

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
