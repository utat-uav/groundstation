#include "mainwindow.h"
#include <QDebug>
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QLabel>
#include <QMessageBox>
#include <QTextStream>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mainPic = new MainPicWidget();
    setCentralWidget(mainPic);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event){
    QWidget::resizeEvent(event);
    mainPic->mainWindowResized();
}
