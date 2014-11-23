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
    void on_hideImage_released();

    void on_showImage_released();

private:
    Ui::MainWindow *ui;
    QGridLayout* gridLayout;
    QWidget* centralWidget;
    QWidget* gridWidget;
    QScrollArea* area;
    QVBoxLayout* entireLayout;

    void addImage();
};

#endif // MAINWINDOW_H
