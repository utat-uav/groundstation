#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QFrame>
#include <QVBoxLayout>
#include <QLabel>
#include <QWidget>
#include <QDesktopWidget>
#include <QRect>
#include <QGridLayout>
#include <QScrollArea>
#include <QDir>
#include <QStringList>
#include <QFileInfoList>
#include <QFileInfo>
#include "mylabel.h"
#include "label.h"

namespace Ui {
class MainWindow;
}

typedef struct clickMenu {
    QAction* action1;
    QAction* action2;
    QAction* action3;
    QAction* action4;
    QAction* action5;

} clickMenu;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_hideImage_released();

    void on_showImage_released();

    void on_hello_released();
    void onAction2();
    void onAction1();

private:
    Ui::MainWindow *ui;
    QGridLayout* gridLayout;
    QWidget* centralWidget;
    QWidget* gridWidget;
    QScrollArea* area;
    QVBoxLayout* entireLayout;
    Label** imageLabel;
    Label** imageName;
    QPixmap** imageMap;
    QDir* dir;
    clickMenu** menuList;
    QAction*** actionList;
    QFileInfoList* fileInfoList;
    void clearImage();
    void addImage();

};

#endif // MAINWINDOW_H
