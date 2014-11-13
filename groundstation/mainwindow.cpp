#include "mainwindow.h"
#include <QDebug>
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QLabel>
#include <QMessageBox>
#include <QTextStream>
#include <string>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MainPicWidget* widget = new MainPicWidget();
    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
