#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "targlistmainwindow.h"
#include "ui_targlistmainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(600,400);


    QWidget* Q = new QWidget;
    TargListMainWindow* targlist = new TargListMainWindow;

    QMenuBar* menu = new QMenuBar;
    targlist->setMenuBar(menu);

    QTabWidget* tabWindow = new QTabWidget;
    setCentralWidget(tabWindow);

    tabWindow->addTab(Q, "T1");
    tabWindow->addTab(targlist, "TARGLIST");
}

MainWindow::~MainWindow()
{
    delete ui;
}
