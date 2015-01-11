#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
        ui->setupUi(this);

        mainPic = new MainPicWidget();
        setCentralWidget(mainPic);

        mainPic->setPicture("C:/Users/wesley/git/groundstation/groundstation/580.jpg");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event){
    QWidget::resizeEvent(event);
    mainPic->mainWindowResized();
}
