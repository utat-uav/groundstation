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

    // I want to display 100 rows of pictures
    // each row contains 8 column;
    const int rows = 100;
    const int columns = 8;

    imageLabel = new QLabel*[rows * columns];
    imageMap = new QPixmap*[rows * columns];

    // double for loop, treat the image grid like a matric
    // for every row, display each column in the current row
    for (int k = 0; k < rows; k++) {
        for (int j = 0; j < columns; j++) {
            auto int index = k*columns + j;
            imageLabel[index] = new QLabel();
            imageMap[index] = new QPixmap("/Users/richardyu/Pictures/conduct.png");
            imageLabel[index]->setPixmap(imageMap[index] ->scaled(w,h,Qt::KeepAspectRatio));
            gridLayout->addWidget(imageLabel[index],k,j);
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
    delete []imageMap;
    delete []imageLabel;
    delete gridLayout;
    delete gridWidget;
    delete area;
    delete entireLayout;
    delete centralWidget;
    delete ui;
}

void MainWindow::on_hideImage_released()
{
    clearImage();
}

void MainWindow::clearImage() {
    delete []imageMap;
    imageMap = NULL;
    delete []imageLabel;
    imageLabel = NULL;
    delete gridLayout;
    gridLayout = NULL;
    delete gridWidget;
    gridWidget = NULL;
    delete area;
    area = NULL;
}

void MainWindow::addImage() {
    gridLayout = new QGridLayout();
    gridWidget = new QWidget();
    gridWidget->setLayout(gridLayout);
    area = new QScrollArea();
    area->setBackgroundRole(QPalette::Dark);

    // image hight and width
    const int w = 150;
    const int h = 150;

    // I want to display 100 rows of pictures
    // each row contains 8 column;
    const int rows = 100;
    const int columns = 8;

    imageLabel = new QLabel*[rows * columns];
    imageMap = new QPixmap*[rows * columns];

    // double for loop, treat the image grid like a matric
    // for every row, display each column in the current row
    for (int k = 0; k < rows; k++) {
        for (int j = 0; j < columns; j++) {
            auto int index = k*columns + j;
            imageLabel[index] = new QLabel();
            imageMap[index] = new QPixmap("/Users/richardyu/Pictures/conduct.png");
            imageLabel[index]->setPixmap(imageMap[index] ->scaled(w,h,Qt::KeepAspectRatio));
            gridLayout->addWidget(imageLabel[index],k,j);
        }
    }

    area->setWidget(gridWidget);
    entireLayout->addWidget(area);
}

void MainWindow::on_showImage_released()
{
    clearImage();
    addImage();
}
