#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "targlistmainwindow.h"
#include "ui_targlistmainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(1024,768);

    QTabWidget* tabWindow = new QTabWidget;
    setCentralWidget(tabWindow);
    QWidget* Q = new QWidget;
    TargListMainWindow* targlist = new TargListMainWindow;

    tabWindow->addTab(Q, "T1");
    tabWindow->addTab(targlist, "TARGLIST");
}

MainWindow::~MainWindow()
{
    delete ui;
}
