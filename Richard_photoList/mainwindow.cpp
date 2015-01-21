#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stdio.h"


// I want to display 100 rows of pictures
// each row contains 8 columns;
const int rows = 100;
const int columns = 6;
long totalElements = rows * columns;

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

    dir = new QDir("/Users/richardyu/Pictures/photolist");
    QStringList filters;
    filters << "*png" << "*jpg" << "*JPEG" << "*.bmp" << "deleted";
    dir->setNameFilters(filters);
    fileInfoList = new QFileInfoList(dir->entryInfoList());

    int listCount = 0;
    imageLabel = new Label*[totalElements];
    imageMap = new QPixmap*[totalElements];
    imageName = new Label*[totalElements];
    //menuList = new clickMenu*[totalElements];
    //for (int i = 0; i < totalElements; i++) menuList[i] = NULL;
    actionList = new QAction**[totalElements];
    for (int i = 0; i < totalElements; i++) actionList[i] = NULL;

    //QLabel* filename;


    // double for loop, treat the image grid like a matrix
    // for every row, display each column in the current row
    for (int k = 0; k < rows; k=k+2) {
        for (int j = 0; j < columns; j++) {

            // When all files in the directory are added to the screen
            // Jump out of the loop using 'goto'
            if (listCount == fileInfoList->size()) goto jump;

            // fileinfo contains the path of every image
            QFileInfo fileinfo = fileInfoList->at(listCount);

            auto int index = k*columns + j;
            imageLabel[index] = new Label();
            imageName[index] = new Label();
            imageMap[index] = new QPixmap(fileinfo.absoluteFilePath());
            imageLabel[index]->setPixmap(imageMap[index]->scaled(w,h,Qt::KeepAspectRatio));
            //Widget* tmp(imageLabel[index]);
            //filename = new QLabel;
            QString temp = "<font color='blue'>" + fileinfo.fileName();
            imageName[index]->setText(temp);

            actionList[index] = new QAction*[2];
            actionList[index][0] = new QAction("Rename", imageLabel[index]);
            actionList[index][1] = new QAction("Delete", imageLabel[index]);
            imageLabel[index]->addAction(actionList[index][0]);
            imageLabel[index]->addAction(actionList[index][1]);
            connect(actionList[index][0], SIGNAL(triggered()), this, SLOT(onAction1()));
            connect(actionList[index][1], SIGNAL(triggered()), this, SLOT(onAction2()));
            fprintf(stderr, "hello\n");
            gridLayout->addWidget(imageLabel[index],k,j);
            //gridLayout->addWidget(tmp,k,j);
            gridLayout->addWidget(imageName[index],k+1,j);
            listCount++;
        }
    }

    jump: listCount = 0;

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
    if (actionList != NULL)
        for (int i = 0; i < totalElements; i++) {
            if (actionList[i] != NULL)
            delete [] (actionList[i]);
        }
    delete [] actionList;
    delete []imageMap;
    delete []imageName;
    delete []imageLabel;
    delete fileInfoList;
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


void MainWindow::onAction2() {
    /*
    QFileInfo fileInfo = fileInfoList->at(listCount);
    QString fileOldName = fileInfo.fileName();
    QString fileNewName = "_deleted" + fileOldName;
    dir->rename(fileOldName, fileNewName);
    */
    clearImage();
    //addImage();
}

void MainWindow::onAction1() {

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
    const int w = 300;
    const int h = 300;

    // I want to display 100 rows of pictures
    // each row contains 8 columns;
    //const int rows = 100;
    //const int columns = 8;
    dir = new QDir("/Users/richardyu/Pictures/photolist");
    QStringList filters;
    filters << "*png" << "*jpg" << "*JPEG" << "*.bmp" << "deleted";
    dir->setNameFilters(filters);
    fileInfoList = new QFileInfoList(dir->entryInfoList());

    long listCount = 0;
    imageLabel = new Label*[totalElements];
    imageMap = new QPixmap*[totalElements];
    imageName = new Label*[totalElements];

    actionList = new QAction**[totalElements];
    for (int i = 0; i < totalElements; i++) actionList[i] = NULL;

    for (int k = 0; k < rows; k=k+2) {
        for (int j = 0; j < columns; j++) {

            // When all files in the directory are added to the screen
            // Jump out of the loop using 'goto'
            if (listCount == fileInfoList->size()) goto jump;

            // fileinfo contains the path of every image
            QFileInfo fileinfo = fileInfoList->at(listCount);

            auto int index = k*columns + j;
            imageLabel[index] = new Label();
            imageName[index] = new Label();
            imageMap[index] = new QPixmap(fileinfo.absoluteFilePath());
            imageLabel[index]->setPixmap(imageMap[index]->scaled(w,h,Qt::KeepAspectRatio));
            //Widget* tmp(imageLabel[index]);
            //filename = new QLabel;
            QString temp = "<font color='blue'>" + fileinfo.fileName();
            imageName[index]->setText(temp);

            actionList[index] = new QAction*[2];
            actionList[index][0] = new QAction("Rename", imageLabel[index]);
            actionList[index][1] = new QAction("Delete", imageLabel[index]);
            imageLabel[index]->addAction(actionList[index][0]);
            imageLabel[index]->addAction(actionList[index][1]);
            connect(actionList[index][0], SIGNAL(triggered()), this, SLOT(onAction1()));
            connect(actionList[index][1], SIGNAL(triggered()), this, SLOT(onAction2()));

            gridLayout->addWidget(imageLabel[index],k,j);
            //gridLayout->addWidget(tmp,k,j);
            gridLayout->addWidget(imageName[index],k+1,j);
            listCount++;
        }
    }

    jump: listCount = 0;


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
