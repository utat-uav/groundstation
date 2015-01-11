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
    const int w = 300;
    const int h = 300;

    // I want to display 100 rows of pictures
    // each row contains 8 columns;
    const int rows = 100;
    const int columns = 4;

    dir = new QDir("/Users/richardyu/Pictures/photolist");
    QStringList filters;
    filters << "*png" << "*jpg" << "*JPEG" << "*.bmp";
    dir->setNameFilters(filters);
    QFileInfoList list = dir->entryInfoList();

    long listCount = 0;

    imageLabel = new QLabel*[rows * columns];
    imageMap = new QPixmap*[rows * columns];
    imageName = new QLabel*[rows * columns];

    //QLabel* filename;

    // double for loop, treat the image grid like a matrix
    // for every row, display each column in the current row
    for (int k = 0; k < rows; k=k+2) {
        for (int j = 0; j < columns; j++) {

            // When all files in the directory are added to the screen
            // Jump out of the loop using 'goto'
            if (listCount == list.size()) goto jump;

            // fileinfo contains the path of every image
            QFileInfo fileinfo = list.at(listCount);

            auto int index = k*columns + j;
            imageLabel[index] = new QLabel();
            imageName[index] = new QLabel();
            imageMap[index] = new QPixmap(fileinfo.absoluteFilePath());
            imageLabel[index]->setPixmap(imageMap[index]->scaled(w,h,Qt::KeepAspectRatio));
            //Widget* tmp(imageLabel[index]);
            //filename = new QLabel;
            QString temp = "<font color='red'>" + fileinfo.fileName();
            imageName[index]->setText(temp);

            gridLayout->addWidget(imageLabel[index],k,j);
            //gridLayout->addWidget(tmp,k,j);
            gridLayout->addWidget(imageName[index],k+1,j);
            listCount++;
        }
    }

    jump: listCount = 0;


    //QPixmap* tmpmap = new QPixmap("/Users/richardyu/Pictures/conduct.png");
    //QLabel* tmplabel;
    //tmplabel->setPixmap(tmpmap->scaled(w,h,Qt::KeepAspectRatioByExpanding));
    //Widget* tmpwidget = new Widget(tmplabel);
    //gridLayout->addWidget(tmpwidget, 0, 80);

    area->setWidget(gridWidget);
    entireLayout->setAlignment(Qt::AlignTop);
    entireLayout->addWidget(ui->hideImage);
    entireLayout->addWidget(ui->showImage);
    entireLayout->addWidget(ui->deleteImage);
    entireLayout->addWidget(ui->renameImage);
    entireLayout->addWidget(ui->hello);
    entireLayout->addWidget(area);

}

MainWindow::~MainWindow()
{
    delete dir;
    delete []imageMap;
    delete []imageName;
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
    // each row contains 8 columns;
    const int rows = 100;
    const int columns = 8;

    imageLabel = new QLabel*[rows * columns];
    imageMap = new QPixmap*[rows * columns];

    // double for loop, treat the image grid like a matrix
    // for every row, display each column in the current row
    for (int k = 0; k < rows; k++) {
        for (int j = 0; j < columns; j++) {
            auto int index = k*columns + j;
            imageLabel[index] = new QLabel();
            imageMap[index] = new QPixmap("/Users/richardyu/Pictures/conduct.png");
            imageLabel[index]->setPixmap(imageMap[index] ->scaled(w,h,Qt::KeepAspectRatioByExpanding));
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

void MainWindow::on_hello_released()
{
    clearImage();
}
