#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Central Widget, well self-explanatory
    centralWidget = new QWidget();
    setCentralWidget(centralWidget);

    // GridWidget contains the gridLayout which contains a grid of images
    gridWidget = new QWidget();
    gridLayout = new QGridLayout;
    gridWidget->setLayout(gridLayout);

    // Area is the ScrollArea, again self-explanatory
    area = new QScrollArea();
    area->setBackgroundRole(QPalette::Dark);

    // The entire layout contains the scrollarea which contains the grid of images
    entireLayout = new QVBoxLayout();
    centralWidget->setLayout(entireLayout);

    // image hight and width
    const int w = 150;
    const int h = 150;

    // I want to display 100 pictures
    const int number = 100;
    // Every row I want to display 10 pictures
    const int row = 10;

    // double for loop, treat the image grid like a matric
    // for every row, display each column in the current row
    for (int k = 0; k < (number/row); k++) {
        for (int j = 1; j < row; j++) {
            QLabel* imageLabel = new QLabel();
            QPixmap* imageMap = new QPixmap("/Users/richardyu/Pictures/conduct.png");
            imageLabel->setPixmap(imageMap->scaled(w,h,Qt::KeepAspectRatio));
            gridLayout->addWidget(imageLabel,j,k);
        }
    }

    area->setWidget(gridWidget);
    entireLayout->setAlignment(Qt::AlignTop);
    entireLayout->addWidget(ui->hideImage);
    entireLayout->addWidget(ui->showImage);
    entireLayout->addWidget(area);

}

MainWindow::~MainWindow()
{
    delete gridLayout;
    delete gridWidget;
    delete area;
    delete entireLayout;
    delete ui;
}

void MainWindow::addImage() {
    // GridWidget contains the gridLayout which contains a grid of images
    gridWidget = new QWidget();
    gridLayout = new QGridLayout;
    gridWidget->setLayout(gridLayout);

    // Area is the ScrollArea, again self-explanatory
    area = new QScrollArea();
    area->setBackgroundRole(QPalette::Dark);
    // image hight and width
    const int w = 150;
    const int h = 150;

    // I want to display 100 pictures
    const int number = 100;
    // Every row I want to display 10 pictures
    const int row = 10;

    // double for loop, treat the image grid like a matric
    // for every row, display each column in the current row
    for (int k = 0; k < (number/row); k++) {
        for (int j = 1; j < row; j++) {
            QLabel* imageLabel = new QLabel();
            QPixmap* imageMap = new QPixmap("/Users/richardyu/Pictures/conduct.png");
            imageLabel->setPixmap(imageMap->scaled(w,h,Qt::KeepAspectRatio));
            gridLayout->addWidget(imageLabel,j,k);
        }
    }
    area->setWidget(gridWidget);
    entireLayout->addWidget(area);
}

void MainWindow::on_hideImage_released()
{
    delete gridLayout;
    gridLayout = NULL;
    delete gridWidget;
    gridWidget = NULL;
    delete area;
    area = NULL;
    //delete gridLayout;
    //gridLayout = NULL;
}

void MainWindow::on_showImage_released()
{
    if (gridWidget != NULL || area != NULL) {
        return;
    }
    gridLayout = new QGridLayout();
    gridWidget = new QWidget();
    gridWidget->setLayout(gridLayout);
    area = new QScrollArea();
    area->setBackgroundRole(QPalette::Dark);

    // image hight and width
    const int w = 150;
    const int h = 150;

    // I want to display 100 pictures
    const int number = 100;
    // Every row I want to display 10 pictures
    const int row = 10;

    // double for loop, treat the image grid like a matric
    // for every row, display each column in the current row
    for (int k = 0; k < (number/row); k++) {
        for (int j = 1; j < row; j++) {
            QLabel* imageLabel = new QLabel();
            QPixmap* imageMap = new QPixmap("/Users/richardyu/Pictures/conduct.png");
            imageLabel->setPixmap(imageMap->scaled(w,h,Qt::KeepAspectRatio));
            gridLayout->addWidget(imageLabel,j,k);
        }
    }

    area->setWidget(gridWidget);
    entireLayout->addWidget(area);

}
