#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
        ui->setupUi(this);

        tabWindow = new QTabWidget;
        setCentralWidget(tabWindow);

        targetListMenu = new QMenuBar;

        mainPic = new MainPicWidget();
        tabWindow->addTab(mainPic, "Mainpic");
        //setCentralWidget(mainPic);

        targetList = new TargListMainWindow(); // Have consistent naming later...
        tabWindow->addTab(targetList, "Targetlist");
        targetList->setMenuBar(targetListMenu);

        mainPic->setPicture("../groundstation/580.jpg"); // Still temporary
}

MainWindow::~MainWindow()
{
    delete ui;
}
