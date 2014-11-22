#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "targetmaker.h"

int rowCount = 0;
int colCount = 5;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newItem_clicked()
{
    TargetMaker targetMaker;
    targetMaker.setModal(true);
    targetMaker.exec();
    /*
    rowCount++;
    ui->targetList->setRowCount(rowCount);
    for (int row = 0 ; row < rowCount ; row++ )
    {
        QPushButton *lolbutton = new QPushButton();
        // Name
        ui->targetList->setCellWidget(row,1,lolbutton);
        // Description
        //ui->targetList->setCellWidget(row,2,button);
        // Coordinates
        //ui->targetList->setCellWidget(row,3,button);
        // Category
        //ui->targetList->setCellWidget(row,1,button);
    } */
}


